#ifndef SIREUM_H_building_control_Arch
#define SIREUM_H_building_control_Arch
#include <types.h>

void building_control_Arch_init(StackFrame caller);

building_control_BuildingControl_TempSensor_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(StackFrame caller);
building_control_BuildingControl_Fan_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_fan(StackFrame caller);
building_control_BuildingControl_TempControl_i_Bridge building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(StackFrame caller);
art_ArchitectureDescription building_control_Arch_ad(StackFrame caller);

#endif