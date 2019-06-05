#ifndef SIREUM_H_art_ArchitectureDescription
#define SIREUM_H_art_ArchitectureDescription
#include <types.h>

// art.ArchitectureDescription

#define art_ArchitectureDescription_components_(this) ((MS_852149) &(this)->components)
#define art_ArchitectureDescription_connections_(this) ((IS_08117A) &(this)->connections)

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other);
static inline B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  return !art_ArchitectureDescription__eq(this, other);
};
void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut);
void art_ArchitectureDescription_string(String result, StackFrame caller, art_ArchitectureDescription this);

#define art_ArchitectureDescription__is(sf, this) (((art_ArchitectureDescription) this)->type == Tart_ArchitectureDescription)

static inline art_ArchitectureDescription art_ArchitectureDescription__as(StackFrame caller, void *this) {
  if (art_ArchitectureDescription__is(caller, this)) return (art_ArchitectureDescription) this;
  fprintf(stderr, "Invalid case from %s to art.ArchitectureDescription.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void art_ArchitectureDescription_apply(StackFrame caller, art_ArchitectureDescription this, MS_852149 components, IS_08117A connections);

#endif