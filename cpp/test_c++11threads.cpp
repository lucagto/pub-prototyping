#include <iostream>
#include <thread>
#include <vector>
#include <mutex>


void run_from_thread(int tid) {
    std::cout << "run from thread, tid=" << tid << " actual id=" << std::this_thread::get_id() << std::endl;
}

struct Counter {
    Counter() {
    }
    void child() {
        std::lock_guard<std::recursive_mutex> guard(mu);
    }
    int increment() {
        // mu.lock();
        std::lock_guard< std::recursive_mutex > guard(mu);
        // child();
        value++;
        // mu.unlock();
        return value;
    }
    int operator()() {
        return value;
    }
    int value = 0;
    std::recursive_mutex mu;
};

class MyVars {
public:
    MyVars() {
        std::cout << "MyVars()" << std::endl;
    }
    ~MyVars() {
        std::cout << "~MyVars()" << std::endl;
    }
    Counter counter;
};

std::once_flag initedMyVars;
static MyVars *myVars = 0;
static void initMyVars() {
    myVars = new MyVars();
    std::cout << "inited myvars" << std::endl;
}
static MyVars *getMyVars() {
    std::call_once(initedMyVars, initMyVars);
    return myVars;
}

int main(int argc, char *argv[]) {
    // based on https://baptiste-wicht.com/posts/2012/03/cp11-concurrency-tutorial-part-2-protect-shared-data.html
    std::thread t1(run_from_thread, 0);
    t1.join();

    std::vector<std::thread> threads;
    for(int i=0; i < 5; i++) {
        threads.push_back(std::thread(run_from_thread, i));
    }
    for(int i=0; i < 5; i++) {
        threads[i].join();
    }

    threads.clear();

    const int numThreads = 500;
    // Counter counter;
    for(int i = 0; i < numThreads; i++) {
        threads.push_back(std::thread([](){
            MyVars *myVars = getMyVars();
            // std::cout << "thread using lambda, id=" << std::this_thread::get_id() << std::endl;
            for(int i = 0; i < 100; i++) {
                myVars->counter.increment();
            }
            // std::cout << "counter at end: " << counter() << std::endl;
        }));
    }
    for(int i=0; i < numThreads; i++) {
        threads[i].join();
    }

    std::cout << "counter at end: " << getMyVars()->counter() << std::endl;
    std::cout << "finished main" << std::endl;
    return 0;
}