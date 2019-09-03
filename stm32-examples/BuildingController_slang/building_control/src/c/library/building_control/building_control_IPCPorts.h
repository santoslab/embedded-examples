#ifndef SIREUM_H_building_control_IPCPorts
#define SIREUM_H_building_control_IPCPorts
#include <types.h>

void building_control_IPCPorts_init(STACK_FRAME_ONLY);

Z building_control_IPCPorts_TempSensor_i_App(STACK_FRAME_ONLY);
Z building_control_IPCPorts_Fan_i_App(STACK_FRAME_ONLY);
Z building_control_IPCPorts_TempControl_i_App(STACK_FRAME_ONLY);
Z building_control_IPCPorts_Main(STACK_FRAME_ONLY);

#endif