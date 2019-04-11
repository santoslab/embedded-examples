#ifndef SIREUM_H_org_sireum_None_76463B
#define SIREUM_H_org_sireum_None_76463B
#include <types.h>

// None[Z]


B None_76463B__eq(None_76463B this, None_76463B other);
static inline B None_76463B__ne(None_76463B this, None_76463B other) {
  return !None_76463B__eq(this, other);
};
void None_76463B_cprint(None_76463B this, B isOut);
void None_76463B_string(String result, StackFrame caller, None_76463B this);

#define None_76463B__is(sf, this) (((None_76463B) this)->type == TNone_76463B)

static inline None_76463B None_76463B__as(StackFrame caller, void *this) {
  if (None_76463B__is(caller, this)) return (None_76463B) this;
  fprintf(stderr, "Invalid case from %s to None[Z].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void None_76463B_apply(StackFrame caller, None_76463B this);

#endif