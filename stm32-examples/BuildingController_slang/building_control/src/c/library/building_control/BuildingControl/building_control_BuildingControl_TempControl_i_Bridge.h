#ifndef SIREUM_H_building_control_BuildingControl_TempControl_i_Bridge
#define SIREUM_H_building_control_BuildingControl_TempControl_i_Bridge
#include <types.h>

// building_control.BuildingControl.TempControl_i_Bridge

#define building_control_BuildingControl_TempControl_i_Bridge_id_(this) ((this)->id)
#define building_control_BuildingControl_TempControl_i_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(this) ((art_Port_C61295) &(this)->currentTemp)
#define building_control_BuildingControl_TempControl_i_Bridge_fanCmd_(this) ((art_Port_69270F) &(this)->fanCmd)
#define building_control_BuildingControl_TempControl_i_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define building_control_BuildingControl_TempControl_i_Bridge_api_(this) ((building_control_BuildingControl_TempControl_i_Bridge_Api) &(this)->api)
#define building_control_BuildingControl_TempControl_i_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B building_control_BuildingControl_TempControl_i_Bridge__eq(building_control_BuildingControl_TempControl_i_Bridge this, building_control_BuildingControl_TempControl_i_Bridge other);
inline B building_control_BuildingControl_TempControl_i_Bridge__ne(building_control_BuildingControl_TempControl_i_Bridge this, building_control_BuildingControl_TempControl_i_Bridge other) {
  return !building_control_BuildingControl_TempControl_i_Bridge__eq(this, other);
};
void building_control_BuildingControl_TempControl_i_Bridge_string_(STACK_FRAME String result, building_control_BuildingControl_TempControl_i_Bridge this);
void building_control_BuildingControl_TempControl_i_Bridge_cprint(building_control_BuildingControl_TempControl_i_Bridge this, B isOut);

inline B building_control_BuildingControl_TempControl_i_Bridge__is(STACK_FRAME void* this) {
  return ((building_control_BuildingControl_TempControl_i_Bridge) this)->type == Tbuilding_control_BuildingControl_TempControl_i_Bridge;
}

inline building_control_BuildingControl_TempControl_i_Bridge building_control_BuildingControl_TempControl_i_Bridge__as(STACK_FRAME void *this) {
  if (building_control_BuildingControl_TempControl_i_Bridge__is(CALLER this)) return (building_control_BuildingControl_TempControl_i_Bridge) this;
  fprintf(stderr, "Invalid case from %s to building_control.BuildingControl.TempControl_i_Bridge.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void building_control_BuildingControl_TempControl_i_Bridge_apply(STACK_FRAME building_control_BuildingControl_TempControl_i_Bridge this, Z id, art_DispatchPropertyProtocol dispatchProtocol, art_Port_C61295 currentTemp, art_Port_69270F fanCmd);

#endif