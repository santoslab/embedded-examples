#include <all.h>

// MOption[art.Bridge]

B MOption_EA1D29__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TMNone_2A2E1D: return T;
    case TMSome_D3D128: return T;
    default: return F;
  }
}

MOption_EA1D29 MOption_EA1D29__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TMNone_2A2E1D: break;
    case TMSome_D3D128: break;
    default:
      fprintf(stderr, "Invalid cast from %s to MOption[art.Bridge].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (MOption_EA1D29) this;
}