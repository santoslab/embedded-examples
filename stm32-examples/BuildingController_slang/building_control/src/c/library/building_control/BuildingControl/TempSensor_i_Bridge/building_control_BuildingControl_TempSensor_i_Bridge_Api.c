#include <all.h>

// building_control.BuildingControl.TempSensor_i_Bridge.Api

B building_control_BuildingControl_TempSensor_i_Bridge_Api__eq(building_control_BuildingControl_TempSensor_i_Bridge_Api this, building_control_BuildingControl_TempSensor_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  return T;
}

void building_control_BuildingControl_TempSensor_i_Bridge_Api_string(String result, StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->currentTemp_Id);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempSensor_i_Bridge_Api_cprint(building_control_BuildingControl_TempSensor_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempSensor_i_Bridge_Api_apply(StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge_Api this, Z id, Z currentTemp_Id) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
}

Unit building_control_BuildingControl_TempSensor_i_Bridge_Api_sendcurrentTemp_(StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge_Api this, building_control_Base_Types_Integer_16 value) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.Api", "sendcurrentTemp", 0);

  sfUpdateLoc(54);
  DeclNewbuilding_control_Base_Types_Integer_16_Payload(t_0);
  building_control_Base_Types_Integer_16_Payload_apply(sf, &t_0, (building_control_Base_Types_Integer_16) value);
  art_Art_putValue(sf, building_control_BuildingControl_TempSensor_i_Bridge_Api_currentTemp_Id_(this), (art_DataContent) (&t_0));
}

Unit building_control_BuildingControl_TempSensor_i_Bridge_Api_logInfo_(StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(59);
  art_Art_logInfo(sf, building_control_BuildingControl_TempSensor_i_Bridge_Api_id_(this), (String) msg);
}