#ifndef SIREUM_H_proj_Base_Types_Integer_8
#define SIREUM_H_proj_Base_Types_Integer_8
#include <types.h>

// proj.Base_Types.Integer_8

#define proj_Base_Types_Integer_8_value_(this) ((this)->value)

B proj_Base_Types_Integer_8__eq(proj_Base_Types_Integer_8 this, proj_Base_Types_Integer_8 other);
static inline B proj_Base_Types_Integer_8__ne(proj_Base_Types_Integer_8 this, proj_Base_Types_Integer_8 other) {
  return !proj_Base_Types_Integer_8__eq(this, other);
};
void proj_Base_Types_Integer_8_cprint(proj_Base_Types_Integer_8 this, B isOut);
void proj_Base_Types_Integer_8_string(String result, StackFrame caller, proj_Base_Types_Integer_8 this);

#define proj_Base_Types_Integer_8__is(sf, this) (((proj_Base_Types_Integer_8) this)->type == Tproj_Base_Types_Integer_8)

static inline proj_Base_Types_Integer_8 proj_Base_Types_Integer_8__as(StackFrame caller, void *this) {
  if (proj_Base_Types_Integer_8__is(caller, this)) return (proj_Base_Types_Integer_8) this;
  fprintf(stderr, "Invalid case from %s to proj.Base_Types.Integer_8.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_Base_Types_Integer_8_apply(StackFrame caller, proj_Base_Types_Integer_8 this, Z8 value);

#endif