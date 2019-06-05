#include <all.h>

// building_control.BuildingControl.Fan_i_Impl

B building_control_BuildingControl_Fan_i_Impl__eq(building_control_BuildingControl_Fan_i_Impl this, building_control_BuildingControl_Fan_i_Impl other) {
  if (building_control_BuildingControl_Fan_i_Bridge_Api__ne((building_control_BuildingControl_Fan_i_Bridge_Api) &this->api, (building_control_BuildingControl_Fan_i_Bridge_Api) &other->api)) return F;
  return T;
}

void building_control_BuildingControl_Fan_i_Impl_string(String result, StackFrame caller, building_control_BuildingControl_Fan_i_Impl this) {
  DeclNewStackFrame(caller, "Fan_i_Impl.scala", "building_control.BuildingControl.Fan_i_Impl", "string", 0);
  String_string(result, sf, string("Fan_i_Impl("));
  building_control_BuildingControl_Fan_i_Bridge_Api_string(result, sf, (building_control_BuildingControl_Fan_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_Fan_i_Impl_cprint(building_control_BuildingControl_Fan_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Fan_i_Impl("), isOut);
  building_control_BuildingControl_Fan_i_Bridge_Api_cprint((building_control_BuildingControl_Fan_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_Fan_i_Impl_apply(StackFrame caller, building_control_BuildingControl_Fan_i_Impl this, building_control_BuildingControl_Fan_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "Fan_i_Impl.scala", "building_control.BuildingControl.Fan_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct building_control_BuildingControl_Fan_i_Bridge_Api));
}

Unit building_control_BuildingControl_Fan_i_Impl_handlefanCmd_(StackFrame caller, building_control_BuildingControl_Fan_i_Impl this, building_control_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "Fan_i_Impl.scala", "building_control.BuildingControl.Fan_i_Impl", "handlefanCmd", 0);

  sfUpdateLoc(10);
  building_control_BuildingControl_FanNative_fanController(sf, building_control_Base_Types_Boolean_value_(value));
}