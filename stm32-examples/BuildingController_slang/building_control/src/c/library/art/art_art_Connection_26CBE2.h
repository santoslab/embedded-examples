#ifndef SIREUM_H_art_art_Connection_26CBE2
#define SIREUM_H_art_art_Connection_26CBE2
#include <types.h>

// art.Connection[building_control.Base_Types.Boolean]

#define art_Connection_26CBE2_from_(this) ((art_Port_69270F) &(this)->from)
#define art_Connection_26CBE2_to_(this) ((art_Port_69270F) &(this)->to)

B art_Connection_26CBE2__eq(art_Connection_26CBE2 this, art_Connection_26CBE2 other);
inline B art_Connection_26CBE2__ne(art_Connection_26CBE2 this, art_Connection_26CBE2 other) {
  return !art_Connection_26CBE2__eq(this, other);
};
void art_Connection_26CBE2_string_(STACK_FRAME String result, art_Connection_26CBE2 this);
void art_Connection_26CBE2_cprint(art_Connection_26CBE2 this, B isOut);

inline B art_Connection_26CBE2__is(STACK_FRAME void* this) {
  return ((art_Connection_26CBE2) this)->type == Tart_Connection_26CBE2;
}

inline art_Connection_26CBE2 art_Connection_26CBE2__as(STACK_FRAME void *this) {
  if (art_Connection_26CBE2__is(CALLER this)) return (art_Connection_26CBE2) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[building_control.Base_Types.Boolean].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_26CBE2_apply(STACK_FRAME art_Connection_26CBE2 this, art_Port_69270F from, art_Port_69270F to);

#endif