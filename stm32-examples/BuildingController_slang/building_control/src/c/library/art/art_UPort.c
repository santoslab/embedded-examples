#include <all.h>

// art.UPort

B art_UPort__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_69270F: return T;
    case Tart_Port_C61295: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_69270F: break;
    case Tart_Port_C61295: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_UPort) this;
}

Z art_UPort_id_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    case Tart_Port_69270F: return art_Port_69270F_id_((art_Port_69270F) this);
    case Tart_Port_C61295: return art_Port_C61295_id_((art_Port_C61295) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

art_PortMode art_UPort_mode_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    case Tart_Port_69270F: return art_Port_69270F_mode_((art_Port_69270F) this);
    case Tart_Port_C61295: return art_Port_C61295_mode_((art_Port_C61295) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}