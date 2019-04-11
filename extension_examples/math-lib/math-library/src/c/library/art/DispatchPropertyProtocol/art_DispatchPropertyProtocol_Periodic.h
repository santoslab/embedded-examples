#ifndef SIREUM_H_art_DispatchPropertyProtocol_Periodic
#define SIREUM_H_art_DispatchPropertyProtocol_Periodic
#include <types.h>

// art.DispatchPropertyProtocol.Periodic

#define art_DispatchPropertyProtocol_Periodic_period_(this) ((this)->period)

B art_DispatchPropertyProtocol_Periodic__eq(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other);
static inline B art_DispatchPropertyProtocol_Periodic__ne(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other) {
  return !art_DispatchPropertyProtocol_Periodic__eq(this, other);
};
void art_DispatchPropertyProtocol_Periodic_cprint(art_DispatchPropertyProtocol_Periodic this, B isOut);
void art_DispatchPropertyProtocol_Periodic_string(String result, StackFrame caller, art_DispatchPropertyProtocol_Periodic this);

#define art_DispatchPropertyProtocol_Periodic__is(sf, this) (((art_DispatchPropertyProtocol_Periodic) this)->type == Tart_DispatchPropertyProtocol_Periodic)

static inline art_DispatchPropertyProtocol_Periodic art_DispatchPropertyProtocol_Periodic__as(StackFrame caller, void *this) {
  if (art_DispatchPropertyProtocol_Periodic__is(caller, this)) return (art_DispatchPropertyProtocol_Periodic) this;
  fprintf(stderr, "Invalid case from %s to art.DispatchPropertyProtocol.Periodic.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_DispatchPropertyProtocol_Periodic_apply(StackFrame caller, art_DispatchPropertyProtocol_Periodic this, Z period);

#endif