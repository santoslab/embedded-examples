#ifndef SIREUM_H_org_sireum_Some_E9D1E5
#define SIREUM_H_org_sireum_Some_E9D1E5
#include <types.h>

// Some[(Z, art.DataContent)]

#define Some_E9D1E5_value_(this) ((Tuple2_D0E3BB) &(this)->value)

B Some_E9D1E5__eq(Some_E9D1E5 this, Some_E9D1E5 other);
static inline B Some_E9D1E5__ne(Some_E9D1E5 this, Some_E9D1E5 other) {
  return !Some_E9D1E5__eq(this, other);
};
void Some_E9D1E5_cprint(Some_E9D1E5 this, B isOut);
void Some_E9D1E5_string(String result, StackFrame caller, Some_E9D1E5 this);

#define Some_E9D1E5__is(sf, this) (((Some_E9D1E5) this)->type == TSome_E9D1E5)

static inline Some_E9D1E5 Some_E9D1E5__as(StackFrame caller, void *this) {
  if (Some_E9D1E5__is(caller, this)) return (Some_E9D1E5) this;
  fprintf(stderr, "Invalid case from %s to Some[(Z, art.DataContent)].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void Some_E9D1E5_apply(StackFrame caller, Some_E9D1E5 this, Tuple2_D0E3BB value);

#endif