#include <all.h>

// Option[Z]

B Option_882048__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: return T;
    case TSome_488F47: return T;
    default: return F;
  }
}

Option_882048 Option_882048__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: break;
    case TSome_488F47: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[Z].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Option_882048) this;
}

Z Option_882048_get_(StackFrame caller, Option_882048 this) {
  switch (this->type) {
    case TNone_76463B: return None_76463B_get_(caller, (None_76463B) this);
    case TSome_488F47: return Some_488F47_get_(caller, (Some_488F47) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}