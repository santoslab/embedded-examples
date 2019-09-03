#include <all.h>

// building_control.BuildingControl.TempSensor_i_Impl

B building_control_BuildingControl_TempSensor_i_Impl__eq(building_control_BuildingControl_TempSensor_i_Impl this, building_control_BuildingControl_TempSensor_i_Impl other) {
  if (building_control_BuildingControl_TempSensor_i_Bridge_Api__ne((building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api, (building_control_BuildingControl_TempSensor_i_Bridge_Api) &other->api)) return F;
  return T;
}

B building_control_BuildingControl_TempSensor_i_Impl__ne(building_control_BuildingControl_TempSensor_i_Impl this, building_control_BuildingControl_TempSensor_i_Impl other);

void building_control_BuildingControl_TempSensor_i_Impl_string_(STACK_FRAME String result, building_control_BuildingControl_TempSensor_i_Impl this) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "string", 0);
  String_string_(SF result, string("TempSensor_i_Impl("));
  building_control_BuildingControl_TempSensor_i_Bridge_Api_string_(SF result, (building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api);
  String_string_(SF result, string(")"));
}

void building_control_BuildingControl_TempSensor_i_Impl_cprint(building_control_BuildingControl_TempSensor_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempSensor_i_Impl("), isOut);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_cprint((building_control_BuildingControl_TempSensor_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B building_control_BuildingControl_TempSensor_i_Impl__is(STACK_FRAME void* this);
building_control_BuildingControl_TempSensor_i_Impl building_control_BuildingControl_TempSensor_i_Impl__as(STACK_FRAME void *this);

void building_control_BuildingControl_TempSensor_i_Impl_apply(STACK_FRAME building_control_BuildingControl_TempSensor_i_Impl this, building_control_BuildingControl_TempSensor_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_Api));
}

Unit building_control_BuildingControl_TempSensor_i_Impl_timeTriggered_(STACK_FRAME building_control_BuildingControl_TempSensor_i_Impl this) {
  DeclNewStackFrame(caller, "TempSensor_i_Impl.scala", "building_control.BuildingControl.TempSensor_i_Impl", "timeTriggered", 0);

  sfUpdateLoc(11);
  Z16 temp = building_control_BuildingControl_TempSensorNative_currentTempGet(SF_LAST);

  sfUpdateLoc(13);
  DeclNewbuilding_control_Base_Types_Integer_16(t_0);
  building_control_Base_Types_Integer_16_apply(SF &t_0, temp);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_sendcurrentTemp_(SF building_control_BuildingControl_TempSensor_i_Impl_api_(this), (building_control_Base_Types_Integer_16) (&t_0));

  sfUpdateLoc(15);
  DeclNewString(t_1);
  String_string_(SF (String) &t_1, string("Sent "));
  Z16_string_(SF (String) &t_1, temp);
  String_string_(SF (String) &t_1, string(""));
  building_control_BuildingControl_TempSensor_i_Bridge_Api_logInfo_(SF building_control_BuildingControl_TempSensor_i_Impl_api_(this), (String) ((String) &t_1));
}