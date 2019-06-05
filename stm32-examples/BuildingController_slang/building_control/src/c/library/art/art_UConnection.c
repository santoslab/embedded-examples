#include <all.h>

// art.UConnection

B art_UConnection__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_26CBE2: return T;
    case Tart_Connection_2385F4: return T;
    default: return F;
  }
}

art_UConnection art_UConnection__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_26CBE2: break;
    case Tart_Connection_2385F4: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UConnection.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_UConnection) this;
}

void art_UConnection_from_(art_UPort result, StackFrame caller, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_26CBE2: Type_assign(result, art_Connection_26CBE2_from_((art_Connection_26CBE2) this), sizeof(union art_UPort)); return;
    case Tart_Connection_2385F4: Type_assign(result, art_Connection_2385F4_from_((art_Connection_2385F4) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UConnection_to_(art_UPort result, StackFrame caller, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_26CBE2: Type_assign(result, art_Connection_26CBE2_to_((art_Connection_26CBE2) this), sizeof(union art_UPort)); return;
    case Tart_Connection_2385F4: Type_assign(result, art_Connection_2385F4_to_((art_Connection_2385F4) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}