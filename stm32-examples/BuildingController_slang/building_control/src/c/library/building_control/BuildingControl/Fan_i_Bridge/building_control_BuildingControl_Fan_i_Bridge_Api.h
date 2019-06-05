#ifndef SIREUM_H_building_control_BuildingControl_Fan_i_Bridge_Api
#define SIREUM_H_building_control_BuildingControl_Fan_i_Bridge_Api
#include <types.h>

// building_control.BuildingControl.Fan_i_Bridge.Api

#define building_control_BuildingControl_Fan_i_Bridge_Api_id_(this) ((this)->id)
#define building_control_BuildingControl_Fan_i_Bridge_Api_fanCmd_Id_(this) ((this)->fanCmd_Id)

B building_control_BuildingControl_Fan_i_Bridge_Api__eq(building_control_BuildingControl_Fan_i_Bridge_Api this, building_control_BuildingControl_Fan_i_Bridge_Api other);
static inline B building_control_BuildingControl_Fan_i_Bridge_Api__ne(building_control_BuildingControl_Fan_i_Bridge_Api this, building_control_BuildingControl_Fan_i_Bridge_Api other) {
  return !building_control_BuildingControl_Fan_i_Bridge_Api__eq(this, other);
};
void building_control_BuildingControl_Fan_i_Bridge_Api_cprint(building_control_BuildingControl_Fan_i_Bridge_Api this, B isOut);
void building_control_BuildingControl_Fan_i_Bridge_Api_string(String result, StackFrame caller, building_control_BuildingControl_Fan_i_Bridge_Api this);

#define building_control_BuildingControl_Fan_i_Bridge_Api__is(sf, this) (((building_control_BuildingControl_Fan_i_Bridge_Api) this)->type == Tbuilding_control_BuildingControl_Fan_i_Bridge_Api)

static inline building_control_BuildingControl_Fan_i_Bridge_Api building_control_BuildingControl_Fan_i_Bridge_Api__as(StackFrame caller, void *this) {
  if (building_control_BuildingControl_Fan_i_Bridge_Api__is(caller, this)) return (building_control_BuildingControl_Fan_i_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to building_control.BuildingControl.Fan_i_Bridge.Api.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void building_control_BuildingControl_Fan_i_Bridge_Api_apply(StackFrame caller, building_control_BuildingControl_Fan_i_Bridge_Api this, Z id, Z fanCmd_Id);

#endif