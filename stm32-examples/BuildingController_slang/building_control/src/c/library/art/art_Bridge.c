#include <all.h>

// art.Bridge

B art_Bridge__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge: return T;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge: return T;
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge: break;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge: break;
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_Bridge) this;
}

Z art_Bridge_id_(StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge: return building_control_BuildingControl_TempSensor_i_Bridge_id_((building_control_BuildingControl_TempSensor_i_Bridge) this);
    case Tbuilding_control_BuildingControl_Fan_i_Bridge: return building_control_BuildingControl_Fan_i_Bridge_id_((building_control_BuildingControl_Fan_i_Bridge) this);
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge: return building_control_BuildingControl_TempControl_i_Bridge_id_((building_control_BuildingControl_TempControl_i_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(art_DispatchPropertyProtocol result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge: Type_assign(result, building_control_BuildingControl_TempSensor_i_Bridge_dispatchProtocol_((building_control_BuildingControl_TempSensor_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge: Type_assign(result, building_control_BuildingControl_Fan_i_Bridge_dispatchProtocol_((building_control_BuildingControl_Fan_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge: Type_assign(result, building_control_BuildingControl_TempControl_i_Bridge_dispatchProtocol_((building_control_BuildingControl_TempControl_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_ports_(art_Bridge_Ports result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge: Type_assign(result, building_control_BuildingControl_TempSensor_i_Bridge_ports_((building_control_BuildingControl_TempSensor_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge: Type_assign(result, building_control_BuildingControl_Fan_i_Bridge_ports_((building_control_BuildingControl_Fan_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge: Type_assign(result, building_control_BuildingControl_TempControl_i_Bridge_ports_((building_control_BuildingControl_TempControl_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}