#ifndef SIREUM_H_org_sireum_Some_D29615
#define SIREUM_H_org_sireum_Some_D29615
#include <types.h>

// Some[art.DataContent]

#define Some_D29615_value_(this) ((art_DataContent) &(this)->value)

B Some_D29615__eq(Some_D29615 this, Some_D29615 other);
static inline B Some_D29615__ne(Some_D29615 this, Some_D29615 other) {
  return !Some_D29615__eq(this, other);
};
void Some_D29615_cprint(Some_D29615 this, B isOut);
void Some_D29615_string(String result, StackFrame caller, Some_D29615 this);

#define Some_D29615__is(sf, this) (((Some_D29615) this)->type == TSome_D29615)

static inline Some_D29615 Some_D29615__as(StackFrame caller, void *this) {
  if (Some_D29615__is(caller, this)) return (Some_D29615) this;
  fprintf(stderr, "Invalid case from %s to Some[art.DataContent].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void Some_D29615_apply(StackFrame caller, Some_D29615 this, art_DataContent value);

#endif