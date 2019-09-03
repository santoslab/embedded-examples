#include <all.h>

// building_control.BuildingControl.TempSensor_i_Bridge

B building_control_BuildingControl_TempSensor_i_Bridge__eq(building_control_BuildingControl_TempSensor_i_Bridge this, building_control_BuildingControl_TempSensor_i_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_C61295__ne((art_Port_C61295) &this->currentTemp, (art_Port_C61295) &other->currentTemp)) return F;
  return T;
}

B building_control_BuildingControl_TempSensor_i_Bridge__ne(building_control_BuildingControl_TempSensor_i_Bridge this, building_control_BuildingControl_TempSensor_i_Bridge other);

void building_control_BuildingControl_TempSensor_i_Bridge_string_(STACK_FRAME String result, building_control_BuildingControl_TempSensor_i_Bridge this) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge", "string", 0);
  String_string_(SF result, string("TempSensor_i_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  art_Port_C61295_string_(SF result, (art_Port_C61295) &this->currentTemp);
  String_string_(SF result, string(")"));
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

B building_control_BuildingControl_TempSensor_i_Bridge__is(STACK_FRAME void* this);
building_control_BuildingControl_TempSensor_i_Bridge building_control_BuildingControl_TempSensor_i_Bridge__as(STACK_FRAME void *this);

void building_control_BuildingControl_TempSensor_i_Bridge_apply(STACK_FRAME building_control_BuildingControl_TempSensor_i_Bridge this, Z id, art_DispatchPropertyProtocol dispatchProtocol, art_Port_C61295 currentTemp) {
  DeclNewStackFrame(caller, "TempSensor_i_Bridge.scala", "building_control.BuildingControl.TempSensor_i_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->currentTemp, currentTemp, sizeof(struct art_Port_C61295));
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 1;
  IS_820232_up(&t_1, 0, (art_UPort) building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this));
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
  IS_820232_up(&t_5, 0, (art_UPort) building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge_Api(t_6);
  building_control_BuildingControl_TempSensor_i_Bridge_Api_apply(SF &t_6, building_control_BuildingControl_TempSensor_i_Bridge_id_(this), art_Port_C61295_id_(building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_Api));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Impl(t_8);
  building_control_BuildingControl_TempSensor_i_Impl_apply(SF &t_8, (building_control_BuildingControl_TempSensor_i_Bridge_Api) building_control_BuildingControl_TempSensor_i_Bridge_api_(this));
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints(t_7);
  building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints_apply(SF &t_7, building_control_BuildingControl_TempSensor_i_Bridge_id_(this), art_Port_C61295_id_(building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(this)), (building_control_BuildingControl_TempSensor_i_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints));
}