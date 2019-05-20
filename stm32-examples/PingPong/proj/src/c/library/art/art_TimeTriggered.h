#ifndef SIREUM_H_art_TimeTriggered
#define SIREUM_H_art_TimeTriggered
#include <types.h>

// art.TimeTriggered


B art_TimeTriggered__eq(art_TimeTriggered this, art_TimeTriggered other);
static inline B art_TimeTriggered__ne(art_TimeTriggered this, art_TimeTriggered other) {
  return !art_TimeTriggered__eq(this, other);
};
void art_TimeTriggered_cprint(art_TimeTriggered this, B isOut);
void art_TimeTriggered_string(String result, StackFrame caller, art_TimeTriggered this);

#define art_TimeTriggered__is(sf, this) (((art_TimeTriggered) this)->type == Tart_TimeTriggered)

static inline art_TimeTriggered art_TimeTriggered__as(StackFrame caller, void *this) {
  if (art_TimeTriggered__is(caller, this)) return (art_TimeTriggered) this;
  fprintf(stderr, "Invalid case from %s to art.TimeTriggered.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_TimeTriggered_apply(StackFrame caller, art_TimeTriggered this);

#endif