#include <all.h>

// art.UConnection

B art_UConnection__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

art_UConnection art_UConnection__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to art.UConnection.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_UConnection) this;
}

void art_UConnection_from_(art_UPort result, StackFrame caller, art_UConnection this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UConnection_to_(art_UPort result, StackFrame caller, art_UConnection this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}