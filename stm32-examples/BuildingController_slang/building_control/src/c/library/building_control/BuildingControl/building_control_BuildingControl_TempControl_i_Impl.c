#include <all.h>

// building_control.BuildingControl.TempControl_i_Impl

B building_control_BuildingControl_TempControl_i_Impl__eq(building_control_BuildingControl_TempControl_i_Impl this, building_control_BuildingControl_TempControl_i_Impl other) {
  if (building_control_BuildingControl_TempControl_i_Bridge_Api__ne((building_control_BuildingControl_TempControl_i_Bridge_Api) &this->api, (building_control_BuildingControl_TempControl_i_Bridge_Api) &other->api)) return F;
  return T;
}

void building_control_BuildingControl_TempControl_i_Impl_string(String result, StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this) {
  DeclNewStackFrame(caller, "TempControl_i_Impl.scala", "building_control.BuildingControl.TempControl_i_Impl", "string", 0);
  String_string(result, sf, string("TempControl_i_Impl("));
  building_control_BuildingControl_TempControl_i_Bridge_Api_string(result, sf, (building_control_BuildingControl_TempControl_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempControl_i_Impl_cprint(building_control_BuildingControl_TempControl_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempControl_i_Impl("), isOut);
  building_control_BuildingControl_TempControl_i_Bridge_Api_cprint((building_control_BuildingControl_TempControl_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempControl_i_Impl_apply(StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this, building_control_BuildingControl_TempControl_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "TempControl_i_Impl.scala", "building_control.BuildingControl.TempControl_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct building_control_BuildingControl_TempControl_i_Bridge_Api));
  this->lowTemp = Z16_C(70);
  this->highTemp = Z16_C(90);
  DeclNewbuilding_control_Base_Types_Boolean(t_0);
  building_control_Base_Types_Boolean_apply(sf, &t_0, T);
  Type_assign(&this->on, (&t_0), sizeof(struct building_control_Base_Types_Boolean));
  DeclNewbuilding_control_Base_Types_Boolean(t_1);
  building_control_Base_Types_Boolean_apply(sf, &t_1, F);
  Type_assign(&this->off, (&t_1), sizeof(struct building_control_Base_Types_Boolean));
}

Unit building_control_BuildingControl_TempControl_i_Impl_handlecurrentTemp_(StackFrame caller, building_control_BuildingControl_TempControl_i_Impl this, building_control_Base_Types_Integer_16 value) {
  DeclNewStackFrame(caller, "TempControl_i_Impl.scala", "building_control.BuildingControl.TempControl_i_Impl", "handlecurrentTemp", 0);

  sfUpdateLoc(18);
  Z16 ct = building_control_Base_Types_Integer_16_value_(value);

  sfUpdateLoc(20);
  if (Z16__gt(ct, building_control_BuildingControl_TempControl_i_Impl_highTemp_(this))) {

    sfUpdateLoc(21);
    building_control_BuildingControl_TempControl_i_Bridge_Api_sendfanCmd_(sf, building_control_BuildingControl_TempControl_i_Impl_api_(this), (building_control_Base_Types_Boolean) building_control_BuildingControl_TempControl_i_Impl_on_(this));

    sfUpdateLoc(23);
    building_control_BuildingControl_TempControl_i_Bridge_Api_logInfo_(sf, building_control_BuildingControl_TempControl_i_Impl_api_(this), (String) string("Sent \'on\' to fan"));
  } else {

    sfUpdateLoc(24);
    if (Z16__lt(ct, building_control_BuildingControl_TempControl_i_Impl_lowTemp_(this))) {

      sfUpdateLoc(25);
      building_control_BuildingControl_TempControl_i_Bridge_Api_sendfanCmd_(sf, building_control_BuildingControl_TempControl_i_Impl_api_(this), (building_control_Base_Types_Boolean) building_control_BuildingControl_TempControl_i_Impl_off_(this));

      sfUpdateLoc(27);
      building_control_BuildingControl_TempControl_i_Bridge_Api_logInfo_(sf, building_control_BuildingControl_TempControl_i_Impl_api_(this), (String) string("Sent \'off\' to fan"));
    }
  }
}