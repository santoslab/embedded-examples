#ifndef SIREUM_H_building_control_Base_Types_Boolean_Payload
#define SIREUM_H_building_control_Base_Types_Boolean_Payload
#include <types.h>

// building_control.Base_Types.Boolean_Payload

#define building_control_Base_Types_Boolean_Payload_value_(this) ((building_control_Base_Types_Boolean) &(this)->value)

B building_control_Base_Types_Boolean_Payload__eq(building_control_Base_Types_Boolean_Payload this, building_control_Base_Types_Boolean_Payload other);
static inline B building_control_Base_Types_Boolean_Payload__ne(building_control_Base_Types_Boolean_Payload this, building_control_Base_Types_Boolean_Payload other) {
  return !building_control_Base_Types_Boolean_Payload__eq(this, other);
};
void building_control_Base_Types_Boolean_Payload_cprint(building_control_Base_Types_Boolean_Payload this, B isOut);
void building_control_Base_Types_Boolean_Payload_string(String result, StackFrame caller, building_control_Base_Types_Boolean_Payload this);

#define building_control_Base_Types_Boolean_Payload__is(sf, this) (((building_control_Base_Types_Boolean_Payload) this)->type == Tbuilding_control_Base_Types_Boolean_Payload)

static inline building_control_Base_Types_Boolean_Payload building_control_Base_Types_Boolean_Payload__as(StackFrame caller, void *this) {
  if (building_control_Base_Types_Boolean_Payload__is(caller, this)) return (building_control_Base_Types_Boolean_Payload) this;
  fprintf(stderr, "Invalid case from %s to building_control.Base_Types.Boolean_Payload.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void building_control_Base_Types_Boolean_Payload_apply(StackFrame caller, building_control_Base_Types_Boolean_Payload this, building_control_Base_Types_Boolean value);

#endif