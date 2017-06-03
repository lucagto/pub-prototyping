/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "jnitest_c.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_root_JnitestCJNI_SomeStruct_1aLong_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  long arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  arg2 = (long)jarg2; 
  if (arg1) (arg1)->aLong = arg2;
}


SWIGEXPORT jint JNICALL Java_root_JnitestCJNI_SomeStruct_1aLong_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  result = (long) ((arg1)->aLong);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_SomeStruct_1aString_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  char *arg2 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  {
    if (arg1->aString) free((char *)arg1->aString);
    if (arg2) {
      arg1->aString = (char *) malloc(strlen((const char *)arg2)+1);
      strcpy((char *)arg1->aString, (const char *)arg2);
    } else {
      arg1->aString = 0;
    }
  }
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_root_JnitestCJNI_SomeStruct_1aString_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  result = (char *) ((arg1)->aString);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_SomeStruct_1aDouble_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  arg2 = (double)jarg2; 
  if (arg1) (arg1)->aDouble = arg2;
}


SWIGEXPORT jdouble JNICALL Java_root_JnitestCJNI_SomeStruct_1aDouble_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  result = (double) ((arg1)->aDouble);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_root_JnitestCJNI_new_1SomeStruct(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SomeStruct *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SomeStruct *)calloc(1, sizeof(SomeStruct));
  *(SomeStruct **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_delete_1SomeStruct(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SomeStruct **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_StructWithArray_1array_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  SomeStruct *arg2 = (SomeStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(StructWithArray **)&jarg1; 
  arg2 = *(SomeStruct **)&jarg2; 
  if (arg1) (arg1)->array = arg2;
}


SWIGEXPORT jlong JNICALL Java_root_JnitestCJNI_StructWithArray_1array_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  SomeStruct *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(StructWithArray **)&jarg1; 
  result = (SomeStruct *) ((arg1)->array);
  *(SomeStruct **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_StructWithArray_1size_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(StructWithArray **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->size = arg2;
}


SWIGEXPORT jint JNICALL Java_root_JnitestCJNI_StructWithArray_1size_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(StructWithArray **)&jarg1; 
  result = (int) ((arg1)->size);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_root_JnitestCJNI_new_1StructWithArray(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  StructWithArray *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (StructWithArray *)calloc(1, sizeof(StructWithArray));
  *(StructWithArray **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_delete_1StructWithArray(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(StructWithArray **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_myfunc(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  myfunc();
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_myfunc_1name(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return ;
  }
  myfunc_name((char const *)arg1);
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_root_JnitestCJNI_myfunc_1name_1return(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)myfunc_name_return((char const *)arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_pass_1array(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  int *arg1 = (int *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int **)&jarg1; 
  arg2 = (int)jarg2; 
  pass_array(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_pass_1array2(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  int *arg1 = (int *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int **)&jarg1; 
  arg2 = (int)jarg2; 
  pass_array2(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_root_JnitestCJNI_receive_1array(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (int *)receive_array();
  *(int **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_print_1array(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  print_array(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printSomeStruct(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  SomeStruct *arg1 = (SomeStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SomeStruct **)&jarg1; 
  printSomeStruct(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printStructArray(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  SomeStruct **arg1 = (SomeStruct **) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SomeStruct ***)&jarg1; 
  arg2 = (int)jarg2; 
  printStructArray(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_print_1pointer_1to_1int_1array(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  long **arg1 = (long **) 0 ;
  long arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(long ***)&jarg1; 
  arg2 = (long)jarg2; 
  print_pointer_to_int_array(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printStructWithArray(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  StructWithArray *arg1 = (StructWithArray *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(StructWithArray **)&jarg1; 
  printStructWithArray(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printLearnParm(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LEARN_PARM *arg1 = (LEARN_PARM *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LEARN_PARM **)&jarg1; 
  printLearnParm(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printDoc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  DOC *arg1 = (DOC *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(DOC **)&jarg1; 
  printDoc(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printWord(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  WORD *arg1 = (WORD *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(WORD **)&jarg1; 
  printWord(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printSvector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SVECTOR *arg1 = (SVECTOR *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SVECTOR **)&jarg1; 
  printSvector(arg1);
}


SWIGEXPORT void JNICALL Java_root_JnitestCJNI_printDocArray(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  DOC **arg1 = (DOC **) 0 ;
  long arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(DOC ***)&jarg1; 
  arg2 = (long)jarg2; 
  printDocArray(arg1,arg2);
}


#ifdef __cplusplus
}
#endif

