#include <all.h>

// art.DataContent

B art_DataContent__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Empty: return T;
    case Tproj_Base_Types_Integer_8_Payload: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Empty: break;
    case Tproj_Base_Types_Integer_8_Payload: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_DataContent) this;
}