#include <all.h>

// Option[(Z, art.DataContent)]

B Option_02FA6D__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_93AA2B: return T;
    case TSome_E9D1E5: return T;
    default: return F;
  }
}

Option_02FA6D Option_02FA6D__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TNone_93AA2B: break;
    case TSome_E9D1E5: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[(Z, art.DataContent)].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Option_02FA6D) this;
}

B Option_02FA6D_isEmpty_(StackFrame caller, Option_02FA6D this) {
  switch (this->type) {
    case TNone_93AA2B: return None_93AA2B_isEmpty_(caller, (None_93AA2B) this);
    case TSome_E9D1E5: return Some_E9D1E5_isEmpty_(caller, (Some_E9D1E5) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}