#ifndef SIREUM_H_art_art_Port_B84865
#define SIREUM_H_art_art_Port_B84865
#include <types.h>

// art.Port[proj.Base_Types.Integer_8]

#define art_Port_B84865_id_(this) ((this)->id)
#define art_Port_B84865_name_(this) ((String) &(this)->name)
#define art_Port_B84865_mode_(this) ((this)->mode)

B art_Port_B84865__eq(art_Port_B84865 this, art_Port_B84865 other);
static inline B art_Port_B84865__ne(art_Port_B84865 this, art_Port_B84865 other) {
  return !art_Port_B84865__eq(this, other);
};
void art_Port_B84865_cprint(art_Port_B84865 this, B isOut);
void art_Port_B84865_string(String result, StackFrame caller, art_Port_B84865 this);

#define art_Port_B84865__is(sf, this) (((art_Port_B84865) this)->type == Tart_Port_B84865)

static inline art_Port_B84865 art_Port_B84865__as(StackFrame caller, void *this) {
  if (art_Port_B84865__is(caller, this)) return (art_Port_B84865) this;
  fprintf(stderr, "Invalid case from %s to art.Port[proj.Base_Types.Integer_8].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Port_B84865_apply(StackFrame caller, art_Port_B84865 this, Z id, String name, art_PortMode mode);

#endif