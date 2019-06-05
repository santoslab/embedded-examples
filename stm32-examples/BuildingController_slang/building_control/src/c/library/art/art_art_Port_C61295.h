#ifndef SIREUM_H_art_art_Port_C61295
#define SIREUM_H_art_art_Port_C61295
#include <types.h>

// art.Port[building_control.Base_Types.Integer_16]

#define art_Port_C61295_id_(this) ((this)->id)
#define art_Port_C61295_mode_(this) ((this)->mode)

B art_Port_C61295__eq(art_Port_C61295 this, art_Port_C61295 other);
static inline B art_Port_C61295__ne(art_Port_C61295 this, art_Port_C61295 other) {
  return !art_Port_C61295__eq(this, other);
};
void art_Port_C61295_cprint(art_Port_C61295 this, B isOut);
void art_Port_C61295_string(String result, StackFrame caller, art_Port_C61295 this);

#define art_Port_C61295__is(sf, this) (((art_Port_C61295) this)->type == Tart_Port_C61295)

static inline art_Port_C61295 art_Port_C61295__as(StackFrame caller, void *this) {
  if (art_Port_C61295__is(caller, this)) return (art_Port_C61295) this;
  fprintf(stderr, "Invalid case from %s to art.Port[building_control.Base_Types.Integer_16].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Port_C61295_apply(StackFrame caller, art_Port_C61295 this, Z id, art_PortMode mode);

#endif