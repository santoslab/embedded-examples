#include <all.h>

// Option[proj.Base_Types.Integer_8]

B Option_56AFA0__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_0A8767: return T;
    case TSome_AA0E8F: return T;
    default: return F;
  }
}

Option_56AFA0 Option_56AFA0__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_0A8767: break;
    case TSome_AA0E8F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[proj.Base_Types.Integer_8].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Option_56AFA0) this;
}