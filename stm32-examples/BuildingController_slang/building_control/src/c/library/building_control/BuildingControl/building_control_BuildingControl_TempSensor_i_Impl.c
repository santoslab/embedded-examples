#include <all.h>

// building_control.BuildingControl.TempSensor_i_Impl

B building_control_BuildingControl_TempSensor_i_Impl__eq(building_control_BuildingControl_TempSensor_i_Impl this, building_control_BuildingControl_TempSensor_i_Impl other) {
  if (building_control_BuildingControl_TempSensor_i_Bridge_Api__ne((building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api, (building_control_BuildingControl_TempSensor_i_Bridge_Api) &other->api)) return F;
  return T;
}

void building_control_BuildingControl_TempSensor_i_Impl_string(String result, StackFrame caller, building_control_BuildingControl_TempSensor_i_Impl this) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "string", 0);
  String_string(result, sf, string("TempSensor_i_Impl("));
  building_control_BuildingControl_TempSensor_i_Bridge_Api_string(result, sf, (building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempSensor_i_Impl_cprint(building_control_BuildingControl_TempSensor_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempSensor_i_Impl("), isOut);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_cprint((building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempSensor_i_Impl_apply(StackFrame caller, building_control_BuildingControl_TempSensor_i_Impl this, building_control_BuildingControl_TempSensor_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_Api));
}

Unit building_control_BuildingControl_TempSensor_i_Impl_timeTriggered_(StackFrame caller, building_control_BuildingControl_TempSensor_i_Impl this) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "timeTriggered", 0);

  sfUpdateLoc(11);
  Z16 temp = building_control_BuildingControl_TempSensorNative_currentTempGet(sf);

  sfUpdateLoc(13);
  DeclNewbuilding_control_Base_Types_Integer_16(t_0);
  building_control_Base_Types_Integer_16_apply(sf, &t_0, temp);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_sendcurrentTemp_(sf, building_control_BuildingControl_TempSensor_i_Impl_api_(this), (building_control_Base_Types_Integer_16) (&t_0));

  sfUpdateLoc(15);
  DeclNewString(t_1);
  String_string((String) &t_1, sf, string("Sent "));
  Z16_string((String) &t_1, sf, temp);
  String_string((String) &t_1, sf, string(""));
  building_control_BuildingControl_TempSensor_i_Bridge_Api_logInfo_(sf, building_control_BuildingControl_TempSensor_i_Impl_api_(this), (String) ((String) &t_1));
}