#ifndef SIREUM_H_art_art_Connection_2385F4
#define SIREUM_H_art_art_Connection_2385F4
#include <types.h>

// art.Connection[building_control.Base_Types.Integer_16]

#define art_Connection_2385F4_from_(this) ((art_Port_C61295) &(this)->from)
#define art_Connection_2385F4_to_(this) ((art_Port_C61295) &(this)->to)

B art_Connection_2385F4__eq(art_Connection_2385F4 this, art_Connection_2385F4 other);
static inline B art_Connection_2385F4__ne(art_Connection_2385F4 this, art_Connection_2385F4 other) {
  return !art_Connection_2385F4__eq(this, other);
};
void art_Connection_2385F4_cprint(art_Connection_2385F4 this, B isOut);
void art_Connection_2385F4_string(String result, StackFrame caller, art_Connection_2385F4 this);

#define art_Connection_2385F4__is(sf, this) (((art_Connection_2385F4) this)->type == Tart_Connection_2385F4)

static inline art_Connection_2385F4 art_Connection_2385F4__as(StackFrame caller, void *this) {
  if (art_Connection_2385F4__is(caller, this)) return (art_Connection_2385F4) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[building_control.Base_Types.Integer_16].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Connection_2385F4_apply(StackFrame caller, art_Connection_2385F4 this, art_Port_C61295 from, art_Port_C61295 to);

#endif