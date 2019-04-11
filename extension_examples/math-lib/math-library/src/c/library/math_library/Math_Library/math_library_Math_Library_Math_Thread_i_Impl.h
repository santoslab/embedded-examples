#ifndef SIREUM_H_math_library_Math_Library_Math_Thread_i_Impl
#define SIREUM_H_math_library_Math_Library_Math_Thread_i_Impl
#include <types.h>

// math_library.Math_Library.Math_Thread_i_Impl

#define math_library_Math_Library_Math_Thread_i_Impl_api_(this) ((math_library_Math_Library_Math_Thread_i_Bridge_Api) &(this)->api)

B math_library_Math_Library_Math_Thread_i_Impl__eq(math_library_Math_Library_Math_Thread_i_Impl this, math_library_Math_Library_Math_Thread_i_Impl other);
static inline B math_library_Math_Library_Math_Thread_i_Impl__ne(math_library_Math_Library_Math_Thread_i_Impl this, math_library_Math_Library_Math_Thread_i_Impl other) {
  return !math_library_Math_Library_Math_Thread_i_Impl__eq(this, other);
};
void math_library_Math_Library_Math_Thread_i_Impl_cprint(math_library_Math_Library_Math_Thread_i_Impl this, B isOut);
void math_library_Math_Library_Math_Thread_i_Impl_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this);

#define math_library_Math_Library_Math_Thread_i_Impl__is(sf, this) (((math_library_Math_Library_Math_Thread_i_Impl) this)->type == Tmath_library_Math_Library_Math_Thread_i_Impl)

static inline math_library_Math_Library_Math_Thread_i_Impl math_library_Math_Library_Math_Thread_i_Impl__as(StackFrame caller, void *this) {
  if (math_library_Math_Library_Math_Thread_i_Impl__is(caller, this)) return (math_library_Math_Library_Math_Thread_i_Impl) this;
  fprintf(stderr, "Invalid case from %s to math_library.Math_Library.Math_Thread_i_Impl.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void math_library_Math_Library_Math_Thread_i_Impl_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this, math_library_Math_Library_Math_Thread_i_Bridge_Api api);

Unit math_library_Math_Library_Math_Thread_i_Impl_timeTriggered_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this);

#endif