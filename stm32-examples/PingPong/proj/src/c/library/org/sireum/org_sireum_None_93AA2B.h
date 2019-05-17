#ifndef SIREUM_H_org_sireum_None_93AA2B
#define SIREUM_H_org_sireum_None_93AA2B
#include <types.h>

// None[(Z, art.DataContent)]


B None_93AA2B__eq(None_93AA2B this, None_93AA2B other);
static inline B None_93AA2B__ne(None_93AA2B this, None_93AA2B other) {
  return !None_93AA2B__eq(this, other);
};
void None_93AA2B_cprint(None_93AA2B this, B isOut);
void None_93AA2B_string(String result, StackFrame caller, None_93AA2B this);

#define None_93AA2B__is(sf, this) (((None_93AA2B) this)->type == TNone_93AA2B)

static inline None_93AA2B None_93AA2B__as(StackFrame caller, void *this) {
  if (None_93AA2B__is(caller, this)) return (None_93AA2B) this;
  fprintf(stderr, "Invalid case from %s to None[(Z, art.DataContent)].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void None_93AA2B_apply(StackFrame caller, None_93AA2B this);

#endif