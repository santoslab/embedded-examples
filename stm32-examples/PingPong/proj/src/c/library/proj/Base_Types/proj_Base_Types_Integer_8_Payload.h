#ifndef SIREUM_H_proj_Base_Types_Integer_8_Payload
#define SIREUM_H_proj_Base_Types_Integer_8_Payload
#include <types.h>

// proj.Base_Types.Integer_8_Payload

#define proj_Base_Types_Integer_8_Payload_value_(this) ((proj_Base_Types_Integer_8) &(this)->value)

B proj_Base_Types_Integer_8_Payload__eq(proj_Base_Types_Integer_8_Payload this, proj_Base_Types_Integer_8_Payload other);
static inline B proj_Base_Types_Integer_8_Payload__ne(proj_Base_Types_Integer_8_Payload this, proj_Base_Types_Integer_8_Payload other) {
  return !proj_Base_Types_Integer_8_Payload__eq(this, other);
};
void proj_Base_Types_Integer_8_Payload_cprint(proj_Base_Types_Integer_8_Payload this, B isOut);
void proj_Base_Types_Integer_8_Payload_string(String result, StackFrame caller, proj_Base_Types_Integer_8_Payload this);

#define proj_Base_Types_Integer_8_Payload__is(sf, this) (((proj_Base_Types_Integer_8_Payload) this)->type == Tproj_Base_Types_Integer_8_Payload)

static inline proj_Base_Types_Integer_8_Payload proj_Base_Types_Integer_8_Payload__as(StackFrame caller, void *this) {
  if (proj_Base_Types_Integer_8_Payload__is(caller, this)) return (proj_Base_Types_Integer_8_Payload) this;
  fprintf(stderr, "Invalid case from %s to proj.Base_Types.Integer_8_Payload.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_Base_Types_Integer_8_Payload_apply(StackFrame caller, proj_Base_Types_Integer_8_Payload this, proj_Base_Types_Integer_8 value);

#endif