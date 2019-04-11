#ifndef SIREUM_H_math_library_Math_Library_Math_Thread_i_Bridge_Api
#define SIREUM_H_math_library_Math_Library_Math_Thread_i_Bridge_Api
#include <types.h>

// math_library.Math_Library.Math_Thread_i_Bridge.Api

#define math_library_Math_Library_Math_Thread_i_Bridge_Api_id_(this) ((this)->id)

B math_library_Math_Library_Math_Thread_i_Bridge_Api__eq(math_library_Math_Library_Math_Thread_i_Bridge_Api this, math_library_Math_Library_Math_Thread_i_Bridge_Api other);
static inline B math_library_Math_Library_Math_Thread_i_Bridge_Api__ne(math_library_Math_Library_Math_Thread_i_Bridge_Api this, math_library_Math_Library_Math_Thread_i_Bridge_Api other) {
  return !math_library_Math_Library_Math_Thread_i_Bridge_Api__eq(this, other);
};
void math_library_Math_Library_Math_Thread_i_Bridge_Api_cprint(math_library_Math_Library_Math_Thread_i_Bridge_Api this, B isOut);
void math_library_Math_Library_Math_Thread_i_Bridge_Api_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this);

#define math_library_Math_Library_Math_Thread_i_Bridge_Api__is(sf, this) (((math_library_Math_Library_Math_Thread_i_Bridge_Api) this)->type == Tmath_library_Math_Library_Math_Thread_i_Bridge_Api)

static inline math_library_Math_Library_Math_Thread_i_Bridge_Api math_library_Math_Library_Math_Thread_i_Bridge_Api__as(StackFrame caller, void *this) {
  if (math_library_Math_Library_Math_Thread_i_Bridge_Api__is(caller, this)) return (math_library_Math_Library_Math_Thread_i_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to math_library.Math_Library.Math_Thread_i_Bridge.Api.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void math_library_Math_Library_Math_Thread_i_Bridge_Api_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this, Z id);

Unit math_library_Math_Library_Math_Thread_i_Bridge_Api_logInfo_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this, String msg);

#endif