#ifndef SIREUM_H_building_control_BuildingControl_Fan_i_Bridge_EntryPoints
#define SIREUM_H_building_control_BuildingControl_Fan_i_Bridge_EntryPoints
#include <types.h>

// building_control.BuildingControl.Fan_i_Bridge.EntryPoints

#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_Fan_i_BridgeId_(this) ((this)->Fan_i_BridgeId)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_fanCmd_Id_(this) ((this)->fanCmd_Id)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_component_(this) ((building_control_BuildingControl_Fan_i_Impl) &(this)->component)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define building_control_BuildingControl_Fan_i_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B building_control_BuildingControl_Fan_i_Bridge_EntryPoints__eq(building_control_BuildingControl_Fan_i_Bridge_EntryPoints this, building_control_BuildingControl_Fan_i_Bridge_EntryPoints other);
inline B building_control_BuildingControl_Fan_i_Bridge_EntryPoints__ne(building_control_BuildingControl_Fan_i_Bridge_EntryPoints this, building_control_BuildingControl_Fan_i_Bridge_EntryPoints other) {
  return !building_control_BuildingControl_Fan_i_Bridge_EntryPoints__eq(this, other);
};
void building_control_BuildingControl_Fan_i_Bridge_EntryPoints_string_(STACK_FRAME String result, building_control_BuildingControl_Fan_i_Bridge_EntryPoints this);
void building_control_BuildingControl_Fan_i_Bridge_EntryPoints_cprint(building_control_BuildingControl_Fan_i_Bridge_EntryPoints this, B isOut);

inline B building_control_BuildingControl_Fan_i_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((building_control_BuildingControl_Fan_i_Bridge_EntryPoints) this)->type == Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints;
}

inline building_control_BuildingControl_Fan_i_Bridge_EntryPoints building_control_BuildingControl_Fan_i_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (building_control_BuildingControl_Fan_i_Bridge_EntryPoints__is(CALLER this)) return (building_control_BuildingControl_Fan_i_Bridge_EntryPoints) this;
  fprintf(stderr, "Invalid case from %s to building_control.BuildingControl.Fan_i_Bridge.EntryPoints.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_BuildingControl_Fan_i_Bridge_EntryPoints_apply(STACK_FRAME building_control_BuildingControl_Fan_i_Bridge_EntryPoints this, Z Fan_i_BridgeId, Z fanCmd_Id, building_control_BuildingControl_Fan_i_Impl component);

Unit building_control_BuildingControl_Fan_i_Bridge_EntryPoints_initialise_(STACK_FRAME building_control_BuildingControl_Fan_i_Bridge_EntryPoints this);

Unit building_control_BuildingControl_Fan_i_Bridge_EntryPoints_compute_(STACK_FRAME building_control_BuildingControl_Fan_i_Bridge_EntryPoints this);

Unit building_control_BuildingControl_Fan_i_Bridge_EntryPoints_finalise_(STACK_FRAME building_control_BuildingControl_Fan_i_Bridge_EntryPoints this);

#endif