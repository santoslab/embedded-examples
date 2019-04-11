#ifndef SIREUM_H_art_DispatchPropertyProtocol_Sporadic
#define SIREUM_H_art_DispatchPropertyProtocol_Sporadic
#include <types.h>

// art.DispatchPropertyProtocol.Sporadic

#define art_DispatchPropertyProtocol_Sporadic_min_(this) ((this)->min)

B art_DispatchPropertyProtocol_Sporadic__eq(art_DispatchPropertyProtocol_Sporadic this, art_DispatchPropertyProtocol_Sporadic other);
static inline B art_DispatchPropertyProtocol_Sporadic__ne(art_DispatchPropertyProtocol_Sporadic this, art_DispatchPropertyProtocol_Sporadic other) {
  return !art_DispatchPropertyProtocol_Sporadic__eq(this, other);
};
void art_DispatchPropertyProtocol_Sporadic_cprint(art_DispatchPropertyProtocol_Sporadic this, B isOut);
void art_DispatchPropertyProtocol_Sporadic_string(String result, StackFrame caller, art_DispatchPropertyProtocol_Sporadic this);

#define art_DispatchPropertyProtocol_Sporadic__is(sf, this) (((art_DispatchPropertyProtocol_Sporadic) this)->type == Tart_DispatchPropertyProtocol_Sporadic)

static inline art_DispatchPropertyProtocol_Sporadic art_DispatchPropertyProtocol_Sporadic__as(StackFrame caller, void *this) {
  if (art_DispatchPropertyProtocol_Sporadic__is(caller, this)) return (art_DispatchPropertyProtocol_Sporadic) this;
  fprintf(stderr, "Invalid case from %s to art.DispatchPropertyProtocol.Sporadic.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_DispatchPropertyProtocol_Sporadic_apply(StackFrame caller, art_DispatchPropertyProtocol_Sporadic this, Z min);

#endif