#ifndef SIREUM_H_math_library_Math_Library_Math_Thread_i_Bridge
#define SIREUM_H_math_library_Math_Library_Math_Thread_i_Bridge
#include <types.h>

// math_library.Math_Library.Math_Thread_i_Bridge

#define math_library_Math_Library_Math_Thread_i_Bridge_id_(this) ((this)->id)
#define math_library_Math_Library_Math_Thread_i_Bridge_name_(this) ((String) &(this)->name)
#define math_library_Math_Library_Math_Thread_i_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define math_library_Math_Library_Math_Thread_i_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define math_library_Math_Library_Math_Thread_i_Bridge_api_(this) ((math_library_Math_Library_Math_Thread_i_Bridge_Api) &(this)->api)
#define math_library_Math_Library_Math_Thread_i_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B math_library_Math_Library_Math_Thread_i_Bridge__eq(math_library_Math_Library_Math_Thread_i_Bridge this, math_library_Math_Library_Math_Thread_i_Bridge other);
static inline B math_library_Math_Library_Math_Thread_i_Bridge__ne(math_library_Math_Library_Math_Thread_i_Bridge this, math_library_Math_Library_Math_Thread_i_Bridge other) {
  return !math_library_Math_Library_Math_Thread_i_Bridge__eq(this, other);
};
void math_library_Math_Library_Math_Thread_i_Bridge_cprint(math_library_Math_Library_Math_Thread_i_Bridge this, B isOut);
void math_library_Math_Library_Math_Thread_i_Bridge_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge this);

#define math_library_Math_Library_Math_Thread_i_Bridge__is(sf, this) (((math_library_Math_Library_Math_Thread_i_Bridge) this)->type == Tmath_library_Math_Library_Math_Thread_i_Bridge)

static inline math_library_Math_Library_Math_Thread_i_Bridge math_library_Math_Library_Math_Thread_i_Bridge__as(StackFrame caller, void *this) {
  if (math_library_Math_Library_Math_Thread_i_Bridge__is(caller, this)) return (math_library_Math_Library_Math_Thread_i_Bridge) this;
  fprintf(stderr, "Invalid case from %s to math_library.Math_Library.Math_Thread_i_Bridge.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void math_library_Math_Library_Math_Thread_i_Bridge_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol);

#endif