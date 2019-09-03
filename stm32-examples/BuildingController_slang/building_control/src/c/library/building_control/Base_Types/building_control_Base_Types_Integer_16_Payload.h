#ifndef SIREUM_H_building_control_Base_Types_Integer_16_Payload
#define SIREUM_H_building_control_Base_Types_Integer_16_Payload
#include <types.h>

// building_control.Base_Types.Integer_16_Payload

#define building_control_Base_Types_Integer_16_Payload_value_(this) ((building_control_Base_Types_Integer_16) &(this)->value)

B building_control_Base_Types_Integer_16_Payload__eq(building_control_Base_Types_Integer_16_Payload this, building_control_Base_Types_Integer_16_Payload other);
inline B building_control_Base_Types_Integer_16_Payload__ne(building_control_Base_Types_Integer_16_Payload this, building_control_Base_Types_Integer_16_Payload other) {
  return !building_control_Base_Types_Integer_16_Payload__eq(this, other);
};
void building_control_Base_Types_Integer_16_Payload_string_(STACK_FRAME String result, building_control_Base_Types_Integer_16_Payload this);
void building_control_Base_Types_Integer_16_Payload_cprint(building_control_Base_Types_Integer_16_Payload this, B isOut);

inline B building_control_Base_Types_Integer_16_Payload__is(STACK_FRAME void* this) {
  return ((building_control_Base_Types_Integer_16_Payload) this)->type == Tbuilding_control_Base_Types_Integer_16_Payload;
}

inline building_control_Base_Types_Integer_16_Payload building_control_Base_Types_Integer_16_Payload__as(STACK_FRAME void *this) {
  if (building_control_Base_Types_Integer_16_Payload__is(CALLER this)) return (building_control_Base_Types_Integer_16_Payload) this;
  fprintf(stderr, "Invalid case from %s to building_control.Base_Types.Integer_16_Payload.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_Base_Types_Integer_16_Payload_apply(STACK_FRAME building_control_Base_Types_Integer_16_Payload this, building_control_Base_Types_Integer_16 value);

#endif