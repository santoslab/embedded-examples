#ifndef SIREUM_H_building_control_Base_Types_Integer_16
#define SIREUM_H_building_control_Base_Types_Integer_16
#include <types.h>

// building_control.Base_Types.Integer_16

#define building_control_Base_Types_Integer_16_value_(this) ((this)->value)

B building_control_Base_Types_Integer_16__eq(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other);
static inline B building_control_Base_Types_Integer_16__ne(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other) {
  return !building_control_Base_Types_Integer_16__eq(this, other);
};
void building_control_Base_Types_Integer_16_cprint(building_control_Base_Types_Integer_16 this, B isOut);
void building_control_Base_Types_Integer_16_string(String result, StackFrame caller, building_control_Base_Types_Integer_16 this);

#define building_control_Base_Types_Integer_16__is(sf, this) (((building_control_Base_Types_Integer_16) this)->type == Tbuilding_control_Base_Types_Integer_16)

static inline building_control_Base_Types_Integer_16 building_control_Base_Types_Integer_16__as(StackFrame caller, void *this) {
  if (building_control_Base_Types_Integer_16__is(caller, this)) return (building_control_Base_Types_Integer_16) this;
  fprintf(stderr, "Invalid case from %s to building_control.Base_Types.Integer_16.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void building_control_Base_Types_Integer_16_apply(StackFrame caller, building_control_Base_Types_Integer_16 this, Z16 value);

#endif