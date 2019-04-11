#ifndef SIREUM_H_art_Empty
#define SIREUM_H_art_Empty
#include <types.h>

// art.Empty


B art_Empty__eq(art_Empty this, art_Empty other);
static inline B art_Empty__ne(art_Empty this, art_Empty other) {
  return !art_Empty__eq(this, other);
};
void art_Empty_cprint(art_Empty this, B isOut);
void art_Empty_string(String result, StackFrame caller, art_Empty this);

#define art_Empty__is(sf, this) (((art_Empty) this)->type == Tart_Empty)

static inline art_Empty art_Empty__as(StackFrame caller, void *this) {
  if (art_Empty__is(caller, this)) return (art_Empty) this;
  fprintf(stderr, "Invalid case from %s to art.Empty.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_Empty_apply(StackFrame caller, art_Empty this);

#endif