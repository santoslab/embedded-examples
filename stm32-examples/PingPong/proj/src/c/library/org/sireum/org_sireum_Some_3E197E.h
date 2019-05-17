#ifndef SIREUM_H_org_sireum_Some_3E197E
#define SIREUM_H_org_sireum_Some_3E197E
#include <types.h>

// Some[art.UPort]

#define Some_3E197E_value_(this) ((art_UPort) &(this)->value)

B Some_3E197E__eq(Some_3E197E this, Some_3E197E other);
static inline B Some_3E197E__ne(Some_3E197E this, Some_3E197E other) {
  return !Some_3E197E__eq(this, other);
};
void Some_3E197E_cprint(Some_3E197E this, B isOut);
void Some_3E197E_string(String result, StackFrame caller, Some_3E197E this);

#define Some_3E197E__is(sf, this) (((Some_3E197E) this)->type == TSome_3E197E)

static inline Some_3E197E Some_3E197E__as(StackFrame caller, void *this) {
  if (Some_3E197E__is(caller, this)) return (Some_3E197E) this;
  fprintf(stderr, "Invalid case from %s to Some[art.UPort].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void Some_3E197E_apply(StackFrame caller, Some_3E197E this, art_UPort value);

#endif