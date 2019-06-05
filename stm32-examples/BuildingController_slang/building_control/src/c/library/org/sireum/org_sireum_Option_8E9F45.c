#include <all.h>

// Option[art.DataContent]

B Option_8E9F45__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TSome_D29615: return T;
    case TNone_964667: return T;
    default: return F;
  }
}

Option_8E9F45 Option_8E9F45__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case TSome_D29615: break;
    case TNone_964667: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.DataContent].", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Option_8E9F45) this;
}

B Option_8E9F45_nonEmpty_(StackFrame caller, Option_8E9F45 this) {
  switch (this->type) {
    case TSome_D29615: return Some_D29615_nonEmpty_(caller, (Some_D29615) this);
    case TNone_964667: return None_964667_nonEmpty_(caller, (None_964667) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}