#include <all.h>

// art.UPort

B art_UPort__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_B84865: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_B84865: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_UPort) this;
}

Z art_UPort_id_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    case Tart_Port_B84865: return art_Port_B84865_id_((art_Port_B84865) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

art_PortMode art_UPort_mode_(StackFrame caller, art_UPort this) {
  switch (this->type) {
    case Tart_Port_B84865: return art_Port_B84865_mode_((art_Port_B84865) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UPort_name_(String result, StackFrame caller, art_UPort this) {
  switch (this->type) {
    case Tart_Port_B84865: Type_assign(result, art_Port_B84865_name_((art_Port_B84865) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}