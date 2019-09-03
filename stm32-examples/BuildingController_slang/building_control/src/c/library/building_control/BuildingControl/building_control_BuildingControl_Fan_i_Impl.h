#ifndef SIREUM_H_building_control_BuildingControl_Fan_i_Impl
#define SIREUM_H_building_control_BuildingControl_Fan_i_Impl
#include <types.h>

// building_control.BuildingControl.Fan_i_Impl

#define building_control_BuildingControl_Fan_i_Impl_api_(this) ((building_control_BuildingControl_Fan_i_Bridge_Api) &(this)->api)

B building_control_BuildingControl_Fan_i_Impl__eq(building_control_BuildingControl_Fan_i_Impl this, building_control_BuildingControl_Fan_i_Impl other);
inline B building_control_BuildingControl_Fan_i_Impl__ne(building_control_BuildingControl_Fan_i_Impl this, building_control_BuildingControl_Fan_i_Impl other) {
  return !building_control_BuildingControl_Fan_i_Impl__eq(this, other);
};
void building_control_BuildingControl_Fan_i_Impl_string_(STACK_FRAME String result, building_control_BuildingControl_Fan_i_Impl this);
void building_control_BuildingControl_Fan_i_Impl_cprint(building_control_BuildingControl_Fan_i_Impl this, B isOut);

inline B building_control_BuildingControl_Fan_i_Impl__is(STACK_FRAME void* this) {
  return ((building_control_BuildingControl_Fan_i_Impl) this)->type == Tbuilding_control_BuildingControl_Fan_i_Impl;
}

inline building_control_BuildingControl_Fan_i_Impl building_control_BuildingControl_Fan_i_Impl__as(STACK_FRAME void *this) {
  if (building_control_BuildingControl_Fan_i_Impl__is(CALLER this)) return (building_control_BuildingControl_Fan_i_Impl) this;
  fprintf(stderr, "Invalid case from %s to building_control.BuildingControl.Fan_i_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_BuildingControl_Fan_i_Impl_apply(STACK_FRAME building_control_BuildingControl_Fan_i_Impl this, building_control_BuildingControl_Fan_i_Bridge_Api api);

Unit building_control_BuildingControl_Fan_i_Impl_handlefanCmd_(STACK_FRAME building_control_BuildingControl_Fan_i_Impl this, building_control_Base_Types_Boolean value);

#endif