#ifndef SIREUM_H_art_art_Connection_4C277C
#define SIREUM_H_art_art_Connection_4C277C
#include <types.h>

// art.Connection[proj.Base_Types.Integer_8]

#define art_Connection_4C277C_from_(this) ((art_Port_B84865) &(this)->from)
#define art_Connection_4C277C_to_(this) ((art_Port_B84865) &(this)->to)

B art_Connection_4C277C__eq(art_Connection_4C277C this, art_Connection_4C277C other);
static inline B art_Connection_4C277C__ne(art_Connection_4C277C this, art_Connection_4C277C other) {
  return !art_Connection_4C277C__eq(this, other);
};
void art_Connection_4C277C_cprint(art_Connection_4C277C this, B isOut);
void art_Connection_4C277C_string(String result, StackFrame caller, art_Connection_4C277C this);

#define art_Connection_4C277C__is(sf, this) (((art_Connection_4C277C) this)->type == Tart_Connection_4C277C)

static inline art_Connection_4C277C art_Connection_4C277C__as(StackFrame caller, void *this) {
  if (art_Connection_4C277C__is(caller, this)) return (art_Connection_4C277C) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[proj.Base_Types.Integer_8].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Connection_4C277C_apply(StackFrame caller, art_Connection_4C277C this, art_Port_B84865 from, art_Port_B84865 to);

#endif