import time
import numpy as np
import pyopencl as cl

N = 32
its = 1

a = np.zeros((N,), dtype=np.float32)
b = np.zeros((N,), dtype=np.uint32)

gpu_idx = 0

platforms = cl.get_platforms()
i = 0
for platform in platforms:
   gpu_devices = platform.get_devices(device_type=cl.device_type.GPU)
   if gpu_idx < i + len(gpu_devices):
       ctx = cl.Context(devices=[gpu_devices[gpu_idx-i]])
       break
   i += len(gpu_devices)

print('context', ctx)
#ctx = cl.create_some_context()
q = cl.CommandQueue(ctx)

mf = cl.mem_flags
a_gpu = cl.Buffer(ctx, mf.READ_WRITE | mf.COPY_HOST_PTR, hostbuf=a)
b_gpu = cl.Buffer(ctx, mf.READ_WRITE | mf.COPY_HOST_PTR, hostbuf=b)

prg = cl.Program(ctx, """
__kernel void sum(__global float *a_g, __global unsigned int *b_g) {
    int tid = get_local_id(0);
    a_g[tid] = tid;
}
""").build()

# run once, just to make sure the buffer copied to gpu
q.finish()
start = time.time()

prg.sum(q, (N,), (N,), a_gpu, b_gpu)

cl.enqueue_fill_buffer(q, a_gpu, np.float32(0), 0, 8*4)

q.finish()
end = time.time()
print('kernel done')
print('diff', end - start)

a_doubled = np.empty_like(a)
cl.enqueue_copy(q, a_doubled, a_gpu)

b_doubled = np.empty_like(b, dtype=np.uint32)
cl.enqueue_copy(q, b_doubled, b_gpu)

print('a', a)
print('a_doubled', a_doubled)
print('b_doubled', b_doubled)

