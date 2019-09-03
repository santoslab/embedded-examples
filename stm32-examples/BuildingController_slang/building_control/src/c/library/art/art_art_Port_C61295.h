#ifndef SIREUM_H_art_art_Port_C61295
#define SIREUM_H_art_art_Port_C61295
#include <types.h>

// art.Port[building_control.Base_Types.Integer_16]

#define art_Port_C61295_id_(this) ((this)->id)
#define art_Port_C61295_mode_(this) ((this)->mode)

B art_Port_C61295__eq(art_Port_C61295 this, art_Port_C61295 other);
inline B art_Port_C61295__ne(art_Port_C61295 this, art_Port_C61295 other) {
  return !art_Port_C61295__eq(this, other);
};
void art_Port_C61295_string_(STACK_FRAME String result, art_Port_C61295 this);
void art_Port_C61295_cprint(art_Port_C61295 this, B isOut);

inline B art_Port_C61295__is(STACK_FRAME void* this) {
  return ((art_Port_C61295) this)->type == Tart_Port_C61295;
}

inline art_Port_C61295 art_Port_C61295__as(STACK_FRAME void *this) {
  if (art_Port_C61295__is(CALLER this)) return (art_Port_C61295) this;
  fprintf(stderr, "Invalid case from %s to art.Port[building_control.Base_Types.Integer_16].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_C61295_apply(STACK_FRAME art_Port_C61295 this, Z id, art_PortMode mode);

#endif