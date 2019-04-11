#include <all.h>

// Nothing

B Nothing__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

Nothing Nothing__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to Nothing.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (Nothing) this;
}