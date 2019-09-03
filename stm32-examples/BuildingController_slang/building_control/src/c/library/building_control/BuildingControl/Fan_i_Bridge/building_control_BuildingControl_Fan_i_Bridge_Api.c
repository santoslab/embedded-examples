#include <all.h>

// building_control.BuildingControl.Fan_i_Bridge.Api

B building_control_BuildingControl_Fan_i_Bridge_Api__eq(building_control_BuildingControl_Fan_i_Bridge_Api this, building_control_BuildingControl_Fan_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  return T;
}

B building_control_BuildingControl_Fan_i_Bridge_Api__ne(building_control_BuildingControl_Fan_i_Bridge_Api this, building_control_BuildingControl_Fan_i_Bridge_Api other);

void building_control_BuildingControl_Fan_i_Bridge_Api_string_(STACK_FRAME String result, building_control_BuildingControl_Fan_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Fan_i_Bridge.scala", "building_control.BuildingControl.Fan_i_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, string(")"));
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

B building_control_BuildingControl_Fan_i_Bridge_Api__is(STACK_FRAME void* this);
building_control_BuildingControl_Fan_i_Bridge_Api building_control_BuildingControl_Fan_i_Bridge_Api__as(STACK_FRAME void *this);

void building_control_BuildingControl_Fan_i_Bridge_Api_apply(STACK_FRAME building_control_BuildingControl_Fan_i_Bridge_Api this, Z id, Z fanCmd_Id) {
  DeclNewStackFrame(caller, "Fan_i_Bridge.scala", "building_control.BuildingControl.Fan_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->fanCmd_Id = fanCmd_Id;
}