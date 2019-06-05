#include <all.h>

B building_control_Arch_initialized_ = F;

struct building_control_BuildingControl_TempSensor_i_Bridge _building_control_Arch_BuildingControlDemo_i_Instance_tempSensor;
struct building_control_BuildingControl_Fan_i_Bridge _building_control_Arch_BuildingControlDemo_i_Instance_fan;
struct building_control_BuildingControl_TempControl_i_Bridge _building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl;
struct art_ArchitectureDescription _building_control_Arch_ad;

void building_control_Arch_init(StackFrame caller) {
  if (building_control_Arch_initialized_) return;
  building_control_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "building_control.Arch", "<init>", 0);
  DeclNewart_DispatchPropertyProtocol_Periodic(t_1);
  art_DispatchPropertyProtocol_Periodic_apply(sf, &t_1, Z_C(1000));
  DeclNewart_Port_C61295(t_2);
  art_Port_C61295_apply(sf, &t_2, Z_C(0), art_PortMode_EventOut);
  DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge(t_0);
  building_control_BuildingControl_TempSensor_i_Bridge_apply(sf, &t_0, Z_C(0), (art_DispatchPropertyProtocol) (&t_1), (art_Port_C61295) (&t_2));
  Type_assign(&_building_control_Arch_BuildingControlDemo_i_Instance_tempSensor, (&t_0), sizeof(struct building_control_BuildingControl_TempSensor_i_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_4);
  art_DispatchPropertyProtocol_Sporadic_apply(sf, &t_4, Z_C(1000));
  DeclNewart_Port_69270F(t_5);
  art_Port_69270F_apply(sf, &t_5, Z_C(1), art_PortMode_EventIn);
  DeclNewbuilding_control_BuildingControl_Fan_i_Bridge(t_3);
  building_control_BuildingControl_Fan_i_Bridge_apply(sf, &t_3, Z_C(1), (art_DispatchPropertyProtocol) (&t_4), (art_Port_69270F) (&t_5));
  Type_assign(&_building_control_Arch_BuildingControlDemo_i_Instance_fan, (&t_3), sizeof(struct building_control_BuildingControl_Fan_i_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_7);
  art_DispatchPropertyProtocol_Sporadic_apply(sf, &t_7, Z_C(1000));
  DeclNewart_Port_C61295(t_8);
  art_Port_C61295_apply(sf, &t_8, Z_C(2), art_PortMode_EventIn);
  DeclNewart_Port_69270F(t_9);
  art_Port_69270F_apply(sf, &t_9, Z_C(3), art_PortMode_EventOut);
  DeclNewbuilding_control_BuildingControl_TempControl_i_Bridge(t_6);
  building_control_BuildingControl_TempControl_i_Bridge_apply(sf, &t_6, Z_C(2), (art_DispatchPropertyProtocol) (&t_7), (art_Port_C61295) (&t_8), (art_Port_69270F) (&t_9));
  Type_assign(&_building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl, (&t_6), sizeof(struct building_control_BuildingControl_TempControl_i_Bridge));
  STATIC_ASSERT(3 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  DeclNewMS_852149(t_11);
  t_11.size = (int8_t) 3;
  Type_assign(&t_11.value[0], building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(sf), sizeof(union art_Bridge));
  Type_assign(&t_11.value[1], building_control_Arch_BuildingControlDemo_i_Instance_fan(sf), sizeof(union art_Bridge));
  Type_assign(&t_11.value[2], building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf), sizeof(union art_Bridge));
  STATIC_ASSERT(2 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_12);
  t_12.size = (int8_t) 2;
  DeclNewart_Connection_2385F4(t_13);
  art_Connection_2385F4_apply(sf, &t_13, (art_Port_C61295) building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(sf)), (art_Port_C61295) building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf)));
  Type_assign(&t_12.value[0], (&t_13), sizeof(union art_UConnection));
  DeclNewart_Connection_26CBE2(t_14);
  art_Connection_26CBE2_apply(sf, &t_14, (art_Port_69270F) building_control_BuildingControl_TempControl_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf)), (art_Port_69270F) building_control_BuildingControl_Fan_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_fan(sf)));
  Type_assign(&t_12.value[1], (&t_14), sizeof(union art_UConnection));
  DeclNewart_ArchitectureDescription(t_10);
  art_ArchitectureDescription_apply(sf, &t_10, (MS_852149) (&t_11), (IS_08117A) (&t_12));
  Type_assign(&_building_control_Arch_ad, (&t_10), sizeof(struct art_ArchitectureDescription));
}

building_control_BuildingControl_TempSensor_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(StackFrame caller) {
  building_control_Arch_init(caller);
  return (building_control_BuildingControl_TempSensor_i_Bridge) &_building_control_Arch_BuildingControlDemo_i_Instance_tempSensor;
}

building_control_BuildingControl_Fan_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_fan(StackFrame caller) {
  building_control_Arch_init(caller);
  return (building_control_BuildingControl_Fan_i_Bridge) &_building_control_Arch_BuildingControlDemo_i_Instance_fan;
}

building_control_BuildingControl_TempControl_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(StackFrame caller) {
  building_control_Arch_init(caller);
  return (building_control_BuildingControl_TempControl_i_Bridge) &_building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl;
}

art_ArchitectureDescription building_control_Arch_ad(StackFrame caller) {
  building_control_Arch_init(caller);
  return (art_ArchitectureDescription) &_building_control_Arch_ad;
}