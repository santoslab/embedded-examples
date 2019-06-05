#include <all.h>

// art.Bridge.EntryPoints

B art_Bridge_EntryPoints__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints: return T;
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints: return T;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints: return T;
    default: return F;
  }
}

art_Bridge_EntryPoints art_Bridge_EntryPoints__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints: break;
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints: break;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.EntryPoints.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_Bridge_EntryPoints) this;
}

Unit art_Bridge_EntryPoints_initialise_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints: building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_initialise_(caller, (building_control_BuildingControl_TempControl_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints: building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_initialise_(caller, (building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints: building_control_BuildingControl_Fan_i_Bridge_EntryPoints_initialise_(caller, (building_control_BuildingControl_Fan_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_compute_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints: building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_(caller, (building_control_BuildingControl_TempControl_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints: building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_compute_(caller, (building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints: building_control_BuildingControl_Fan_i_Bridge_EntryPoints_compute_(caller, (building_control_BuildingControl_Fan_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_finalise_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints: building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_finalise_(caller, (building_control_BuildingControl_TempControl_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints: building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_finalise_(caller, (building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints) this); return;
    case Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints: building_control_BuildingControl_Fan_i_Bridge_EntryPoints_finalise_(caller, (building_control_BuildingControl_Fan_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}