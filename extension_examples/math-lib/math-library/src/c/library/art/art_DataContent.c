#include <all.h>

// art.DataContent

B art_DataContent__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Empty: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Empty: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_DataContent) this;
}