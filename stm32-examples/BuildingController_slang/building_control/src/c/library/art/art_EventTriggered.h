#ifndef SIREUM_H_art_EventTriggered
#define SIREUM_H_art_EventTriggered
#include <types.h>

// art.EventTriggered

#define art_EventTriggered_portIds_(this) ((IS_82ABD8) &(this)->portIds)

B art_EventTriggered__eq(art_EventTriggered this, art_EventTriggered other);
static inline B art_EventTriggered__ne(art_EventTriggered this, art_EventTriggered other) {
  return !art_EventTriggered__eq(this, other);
};
void art_EventTriggered_cprint(art_EventTriggered this, B isOut);
void art_EventTriggered_string(String result, StackFrame caller, art_EventTriggered this);

#define art_EventTriggered__is(sf, this) (((art_EventTriggered) this)->type == Tart_EventTriggered)

static inline art_EventTriggered art_EventTriggered__as(StackFrame caller, void *this) {
  if (art_EventTriggered__is(caller, this)) return (art_EventTriggered) this;
  fprintf(stderr, "Invalid case from %s to art.EventTriggered.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_EventTriggered_apply(StackFrame caller, art_EventTriggered this, IS_82ABD8 portIds);

#endif