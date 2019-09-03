#ifndef SIREUM_H_building_control_Base_Types_Boolean
#define SIREUM_H_building_control_Base_Types_Boolean
#include <types.h>

// building_control.Base_Types.Boolean

#define building_control_Base_Types_Boolean_value_(this) ((this)->value)

B building_control_Base_Types_Boolean__eq(building_control_Base_Types_Boolean this, building_control_Base_Types_Boolean other);
inline B building_control_Base_Types_Boolean__ne(building_control_Base_Types_Boolean this, building_control_Base_Types_Boolean other) {
  return !building_control_Base_Types_Boolean__eq(this, other);
};
void building_control_Base_Types_Boolean_string_(STACK_FRAME String result, building_control_Base_Types_Boolean this);
void building_control_Base_Types_Boolean_cprint(building_control_Base_Types_Boolean this, B isOut);

inline B building_control_Base_Types_Boolean__is(STACK_FRAME void* this) {
  return ((building_control_Base_Types_Boolean) this)->type == Tbuilding_control_Base_Types_Boolean;
}

inline building_control_Base_Types_Boolean building_control_Base_Types_Boolean__as(STACK_FRAME void *this) {
  if (building_control_Base_Types_Boolean__is(CALLER this)) return (building_control_Base_Types_Boolean) this;
  fprintf(stderr, "Invalid case from %s to building_control.Base_Types.Boolean.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_Base_Types_Boolean_apply(STACK_FRAME building_control_Base_Types_Boolean this, B value);

#endif