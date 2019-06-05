#ifndef SIREUM_H_building_control_BuildingControl_TempControl_i_Impl
#define SIREUM_H_building_control_BuildingControl_TempControl_i_Impl
#include <types.h>

// building_control.BuildingControl.TempControl_i_Impl

#define building_control_BuildingControl_TempControl_i_Impl_api_(this) ((building_control_BuildingControl_TempControl_i_Bridge_Api) &(this)->api)
#define building_control_BuildingControl_TempControl_i_Impl_lowTemp_(this) ((this)->lowTemp)
#define building_control_BuildingControl_TempControl_i_Impl_highTemp_(this) ((this)->highTemp)
#define building_control_BuildingControl_TempControl_i_Impl_on_(this) ((building_control_Base_Types_Boolean) &(this)->on)
#define building_control_BuildingControl_TempControl_i_Impl_off_(this) ((building_control_Base_Types_Boolean) &(this)->off)

B building_control_BuildingControl_TempControl_i_Impl__eq(building_control_BuildingControl_TempControl_i_Impl this, building_control_BuildingControl_TempControl_i_Impl other);
static inline B building_control_BuildingControl_TempControl_i_Impl__ne(building_control_BuildingControl_TempControl_i_Impl this, building_control_BuildingControl_TempControl_i_Impl other) {
  return !building_control_BuildingControl_TempControl_i_Impl__eq(this, other);
};
void building_control_BuildingControl_TempControl_i_Impl_cprint(building_control_BuildingControl_TempControl_i_Impl this, B isOut);
void building_control_BuildingControl_TempControl_i_Impl_string(String result, StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this);

#define building_control_BuildingControl_TempControl_i_Impl__is(sf, this) (((building_control_BuildingControl_TempControl_i_Impl) this)->type == Tbuilding_control_BuildingControl_TempControl_i_Impl)

static inline building_control_BuildingControl_TempControl_i_Impl building_control_BuildingControl_TempControl_i_Impl__as(StackFrame caller, void *this) {
  if (building_control_BuildingControl_TempControl_i_Impl__is(caller, this)) return (building_control_BuildingControl_TempControl_i_Impl) this;
  fprintf(stderr, "Invalid case from %s to building_control.BuildingControl.TempControl_i_Impl.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void building_control_BuildingControl_TempControl_i_Impl_apply(StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this, building_control_BuildingControl_TempControl_i_Bridge_Api api);

Unit building_control_BuildingControl_TempControl_i_Impl_handlecurrentTemp_(StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this, building_control_Base_Types_Integer_16 value);

#endif