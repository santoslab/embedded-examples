#ifndef SIREUM_H_org_sireum_Some_488F47
#define SIREUM_H_org_sireum_Some_488F47
#include <types.h>

// Some[Z]

#define Some_488F47_value_(this) ((this)->value)

B Some_488F47__eq(Some_488F47 this, Some_488F47 other);
static inline B Some_488F47__ne(Some_488F47 this, Some_488F47 other) {
  return !Some_488F47__eq(this, other);
};
void Some_488F47_cprint(Some_488F47 this, B isOut);
void Some_488F47_string(String result, StackFrame caller, Some_488F47 this);

#define Some_488F47__is(sf, this) (((Some_488F47) this)->type == TSome_488F47)

static inline Some_488F47 Some_488F47__as(StackFrame caller, void *this) {
  if (Some_488F47__is(caller, this)) return (Some_488F47) this;
  fprintf(stderr, "Invalid case from %s to Some[Z].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void Some_488F47_apply(StackFrame caller, Some_488F47 this, Z value);

#endif