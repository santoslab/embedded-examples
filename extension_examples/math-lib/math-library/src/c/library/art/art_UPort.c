#include <all.h>

// art.UPort

B art_UPort__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

art_UPort art_UPort__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_UPort) this;
}

Z art_UPort_id_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

art_PortMode art_UPort_mode_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UPort_name_(String result, StackFrame caller, art_UPort this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}