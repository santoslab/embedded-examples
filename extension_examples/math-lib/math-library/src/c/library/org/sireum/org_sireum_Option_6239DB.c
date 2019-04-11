#include <all.h>

// Option[art.UPort]

B Option_6239DB__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_39BC5F: return T;
    case TSome_3E197E: return T;
    default: return F;
  }
}

Option_6239DB Option_6239DB__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_39BC5F: break;
    case TSome_3E197E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.UPort].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Option_6239DB) this;
}