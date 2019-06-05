#include <all.h>

// building_control.BuildingControl.TempControl_i_Bridge.Api

B building_control_BuildingControl_TempControl_i_Bridge_Api__eq(building_control_BuildingControl_TempControl_i_Bridge_Api this, building_control_BuildingControl_TempControl_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  return T;
}

void building_control_BuildingControl_TempControl_i_Bridge_Api_string(String result, StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->currentTemp_Id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->fanCmd_Id);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempControl_i_Bridge_Api_cprint(building_control_BuildingControl_TempControl_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempControl_i_Bridge_Api_apply(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_Api this, Z id, Z currentTemp_Id, Z fanCmd_Id) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
  this->fanCmd_Id = fanCmd_Id;
}

Unit building_control_BuildingControl_TempControl_i_Bridge_Api_sendfanCmd_(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_Api this, building_control_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.Api", "sendfanCmd", 0);

  sfUpdateLoc(67);
  DeclNewbuilding_control_Base_Types_Boolean_Payload(t_0);
  building_control_Base_Types_Boolean_Payload_apply(sf, &t_0, (building_control_Base_Types_Boolean) value);
  art_Art_putValue(sf, building_control_BuildingControl_TempControl_i_Bridge_Api_fanCmd_Id_(this), (art_DataContent) (&t_0));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_Api_logInfo_(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(72);
  art_Art_logInfo(sf, building_control_BuildingControl_TempControl_i_Bridge_Api_id_(this), (String) msg);
}