#ifndef SIREUM_H_art_art_Port_69270F
#define SIREUM_H_art_art_Port_69270F
#include <types.h>

// art.Port[building_control.Base_Types.Boolean]

#define art_Port_69270F_id_(this) ((this)->id)
#define art_Port_69270F_mode_(this) ((this)->mode)

B art_Port_69270F__eq(art_Port_69270F this, art_Port_69270F other);
static inline B art_Port_69270F__ne(art_Port_69270F this, art_Port_69270F other) {
  return !art_Port_69270F__eq(this, other);
};
void art_Port_69270F_cprint(art_Port_69270F this, B isOut);
void art_Port_69270F_string(String result, StackFrame caller, art_Port_69270F this);

#define art_Port_69270F__is(sf, this) (((art_Port_69270F) this)->type == Tart_Port_69270F)

static inline art_Port_69270F art_Port_69270F__as(StackFrame caller, void *this) {
  if (art_Port_69270F__is(caller, this)) return (art_Port_69270F) this;
  fprintf(stderr, "Invalid case from %s to art.Port[building_control.Base_Types.Boolean].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Port_69270F_apply(StackFrame caller, art_Port_69270F this, Z id, art_PortMode mode);

#endif