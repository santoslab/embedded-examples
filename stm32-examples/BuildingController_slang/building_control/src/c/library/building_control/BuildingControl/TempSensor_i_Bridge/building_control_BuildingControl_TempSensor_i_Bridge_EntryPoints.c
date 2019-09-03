#include <all.h>

// building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints

B building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints__eq(building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this, building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints other) {
  if (Z__ne(this->TempSensor_i_BridgeId, other->TempSensor_i_BridgeId)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (building_control_BuildingControl_TempSensor_i_Impl__ne((building_control_BuildingControl_TempSensor_i_Impl) &this->component, (building_control_BuildingControl_TempSensor_i_Impl) &other->component)) return F;
  return T;
}

B building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints__ne(building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this, building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints other);

void building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_string_(STACK_FRAME String result, building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->TempSensor_i_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  building_control_BuildingControl_TempSensor_i_Impl_string_(SF result, (building_control_BuildingControl_TempSensor_i_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_cprint(building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->TempSensor_i_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  building_control_BuildingControl_TempSensor_i_Impl_cprint((building_control_BuildingControl_TempSensor_i_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints__is(STACK_FRAME void* this);
building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints__as(STACK_FRAME void *this);

void building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_apply(STACK_FRAME building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this, Z TempSensor_i_BridgeId, Z currentTemp_Id, building_control_BuildingControl_TempSensor_i_Impl component) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints", "apply", 0);
  this->TempSensor_i_BridgeId = TempSensor_i_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  Type_assign(&this->component, component, sizeof(struct building_control_BuildingControl_TempSensor_i_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  IS_82ABD8_up(&t_3, 0, (Z) building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_currentTemp_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_initialise_(STACK_FRAME building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(87);
  building_control_BuildingControl_TempSensor_i_Impl_initialise_(SF building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_component_(this));
}

Unit building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_compute_(STACK_FRAME building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(91);
  art_Art_receiveInput(SF (IS_82ABD8) building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(92);
  building_control_BuildingControl_TempSensor_i_Impl_timeTriggered_(SF building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(93);
  art_Art_sendOutput(SF (IS_82ABD8) building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_finalise_(STACK_FRAME building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(109);
  building_control_BuildingControl_TempSensor_i_Impl_finalise_(SF building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_component_(this));
}