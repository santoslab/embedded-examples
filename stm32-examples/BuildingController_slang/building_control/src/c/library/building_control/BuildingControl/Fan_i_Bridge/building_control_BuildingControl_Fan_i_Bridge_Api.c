#include <all.h>

// building_control.BuildingControl.Fan_i_Bridge.Api

B building_control_BuildingControl_Fan_i_Bridge_Api__eq(building_control_BuildingControl_Fan_i_Bridge_Api this, building_control_BuildingControl_Fan_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  return T;
}

void building_control_BuildingControl_Fan_i_Bridge_Api_string(String result, StackFrame caller, building_control_BuildingControl_Fan_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Fan_i_Bridge.scala", "building_control.BuildingControl.Fan_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->fanCmd_Id);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_Fan_i_Bridge_Api_cprint(building_control_BuildingControl_Fan_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_Fan_i_Bridge_Api_apply(StackFrame caller, building_control_BuildingControl_Fan_i_Bridge_Api this, Z id, Z fanCmd_Id) {
  DeclNewStackFrame(caller, "Fan_i_Bridge.scala", "building_control.BuildingControl.Fan_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->fanCmd_Id = fanCmd_Id;
}