#ifndef SIREUM_H_building_control_Base_Types_Integer_16
#define SIREUM_H_building_control_Base_Types_Integer_16
#include <types.h>

// building_control.Base_Types.Integer_16

#define building_control_Base_Types_Integer_16_value_(this) ((this)->value)

B building_control_Base_Types_Integer_16__eq(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other);
inline B building_control_Base_Types_Integer_16__ne(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other) {
  return !building_control_Base_Types_Integer_16__eq(this, other);
};
void building_control_Base_Types_Integer_16_string_(STACK_FRAME String result, building_control_Base_Types_Integer_16 this);
void building_control_Base_Types_Integer_16_cprint(building_control_Base_Types_Integer_16 this, B isOut);

inline B building_control_Base_Types_Integer_16__is(STACK_FRAME void* this) {
  return ((building_control_Base_Types_Integer_16) this)->type == Tbuilding_control_Base_Types_Integer_16;
}

inline building_control_Base_Types_Integer_16 building_control_Base_Types_Integer_16__as(STACK_FRAME void *this) {
  if (building_control_Base_Types_Integer_16__is(CALLER this)) return (building_control_Base_Types_Integer_16) this;
  fprintf(stderr, "Invalid case from %s to building_control.Base_Types.Integer_16.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_Base_Types_Integer_16_apply(STACK_FRAME building_control_Base_Types_Integer_16 this, Z16 value);

#endif