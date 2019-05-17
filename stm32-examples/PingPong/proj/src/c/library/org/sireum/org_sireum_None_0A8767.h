#ifndef SIREUM_H_org_sireum_None_0A8767
#define SIREUM_H_org_sireum_None_0A8767
#include <types.h>

// None[proj.Base_Types.Integer_8]


B None_0A8767__eq(None_0A8767 this, None_0A8767 other);
static inline B None_0A8767__ne(None_0A8767 this, None_0A8767 other) {
  return !None_0A8767__eq(this, other);
};
void None_0A8767_cprint(None_0A8767 this, B isOut);
void None_0A8767_string(String result, StackFrame caller, None_0A8767 this);

#define None_0A8767__is(sf, this) (((None_0A8767) this)->type == TNone_0A8767)

static inline None_0A8767 None_0A8767__as(StackFrame caller, void *this) {
  if (None_0A8767__is(caller, this)) return (None_0A8767) this;
  fprintf(stderr, "Invalid case from %s to None[proj.Base_Types.Integer_8].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void None_0A8767_apply(StackFrame caller, None_0A8767 this);

#endif