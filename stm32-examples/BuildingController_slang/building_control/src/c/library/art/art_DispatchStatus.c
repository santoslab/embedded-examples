#include <all.h>

// art.DispatchStatus

B art_DispatchStatus__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_EventTriggered: return T;
    case Tart_TimeTriggered: return T;
    default: return F;
  }
}

art_DispatchStatus art_DispatchStatus__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_EventTriggered: break;
    case Tart_TimeTriggered: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DispatchStatus.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_DispatchStatus) this;
}