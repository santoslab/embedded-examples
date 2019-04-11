#include <all.h>

// art.Bridge

B art_Bridge__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_Bridge) this;
}

Z art_Bridge_id_(StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: return math_library_Math_Library_Math_Thread_i_Bridge_id_((math_library_Math_Library_Math_Thread_i_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(art_DispatchPropertyProtocol result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: Type_assign(result, math_library_Math_Library_Math_Thread_i_Bridge_dispatchProtocol_((math_library_Math_Library_Math_Thread_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_name_(String result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: Type_assign(result, math_library_Math_Library_Math_Thread_i_Bridge_name_((math_library_Math_Library_Math_Thread_i_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_ports_(art_Bridge_Ports result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: Type_assign(result, math_library_Math_Library_Math_Thread_i_Bridge_ports_((math_library_Math_Library_Math_Thread_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}