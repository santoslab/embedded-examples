#ifndef SIREUM_H_org_sireum_Some_AA0E8F
#define SIREUM_H_org_sireum_Some_AA0E8F
#include <types.h>

// Some[proj.Base_Types.Integer_8]

#define Some_AA0E8F_value_(this) ((proj_Base_Types_Integer_8) &(this)->value)

B Some_AA0E8F__eq(Some_AA0E8F this, Some_AA0E8F other);
static inline B Some_AA0E8F__ne(Some_AA0E8F this, Some_AA0E8F other) {
  return !Some_AA0E8F__eq(this, other);
};
void Some_AA0E8F_cprint(Some_AA0E8F this, B isOut);
void Some_AA0E8F_string(String result, StackFrame caller, Some_AA0E8F this);

#define Some_AA0E8F__is(sf, this) (((Some_AA0E8F) this)->type == TSome_AA0E8F)

static inline Some_AA0E8F Some_AA0E8F__as(StackFrame caller, void *this) {
  if (Some_AA0E8F__is(caller, this)) return (Some_AA0E8F) this;
  fprintf(stderr, "Invalid case from %s to Some[proj.Base_Types.Integer_8].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void Some_AA0E8F_apply(StackFrame caller, Some_AA0E8F this, proj_Base_Types_Integer_8 value);

#endif