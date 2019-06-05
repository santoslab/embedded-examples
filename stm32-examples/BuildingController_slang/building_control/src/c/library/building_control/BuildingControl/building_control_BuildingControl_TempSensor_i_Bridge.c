#include <all.h>

// building_control.BuildingControl.TempSensor_i_Bridge

B building_control_BuildingControl_TempSensor_i_Bridge__eq(building_control_BuildingControl_TempSensor_i_Bridge this, building_control_BuildingControl_TempSensor_i_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_C61295__ne((art_Port_C61295) &this->currentTemp, (art_Port_C61295) &other->currentTemp)) return F;
  return T;
}

void building_control_BuildingControl_TempSensor_i_Bridge_string(String result, StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge", "string", 0);
  String_string(result, sf, string("TempSensor_i_Bridge("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  art_DispatchPropertyProtocol_string(result, sf, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string(result, sf, sep);
  art_Port_C61295_string(result, sf, (art_Port_C61295) &this->currentTemp);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempSensor_i_Bridge_cprint(building_control_BuildingControl_TempSensor_i_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempSensor_i_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  art_Port_C61295_cprint((art_Port_C61295) &this->currentTemp, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempSensor_i_Bridge_apply(StackFrame caller, building_control_BuildingControl_TempSensor_i_Bridge this, Z id, art_DispatchPropertyProtocol dispatchProtocol, art_Port_C61295 currentTemp) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->currentTemp, currentTemp, sizeof(struct art_Port_C61295));
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 1;
  Type_assign(&t_1.value[0], building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this), sizeof(union art_UPort));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 0;
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 1;
  Type_assign(&t_5.value[0], building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this), sizeof(union art_UPort));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(sf, &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge_Api(t_6);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_apply(sf, &t_6, building_control_BuildingControl_TempSensor_i_Bridge_id_(this), art_Port_C61295_id_(building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_Api));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Impl(t_8);
  building_control_BuildingControl_TempSensor_i_Impl_apply(sf, &t_8, (building_control_BuildingControl_TempSensor_i_Bridge_Api) building_control_BuildingControl_TempSensor_i_Bridge_api_(this));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints(t_7);
  building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_apply(sf, &t_7, building_control_BuildingControl_TempSensor_i_Bridge_id_(this), art_Port_C61295_id_(building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this)), (building_control_BuildingControl_TempSensor_i_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints));
}