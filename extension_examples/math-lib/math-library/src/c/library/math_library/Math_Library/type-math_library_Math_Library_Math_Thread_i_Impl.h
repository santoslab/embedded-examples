#ifndef SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Impl
#define SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Impl
#include <misc.h>

// math_library.Math_Library.Math_Thread_i_Impl
#include <type-math_library_Math_Library_Math_Thread_i_Bridge_Api.h>

typedef struct math_library_Math_Library_Math_Thread_i_Impl *math_library_Math_Library_Math_Thread_i_Impl;
struct math_library_Math_Library_Math_Thread_i_Impl {
  TYPE type;
  struct math_library_Math_Library_Math_Thread_i_Bridge_Api api;
};

#define DeclNewmath_library_Math_Library_Math_Thread_i_Impl(x) struct math_library_Math_Library_Math_Thread_i_Impl x = { .type = Tmath_library_Math_Library_Math_Thread_i_Impl }


#endif