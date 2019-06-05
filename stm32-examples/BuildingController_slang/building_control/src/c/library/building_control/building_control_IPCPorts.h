#ifndef SIREUM_H_building_control_IPCPorts
#define SIREUM_H_building_control_IPCPorts
#include <types.h>

void building_control_IPCPorts_init(StackFrame caller);

Z building_control_IPCPorts_TempSensor_i_App(StackFrame caller);
Z building_control_IPCPorts_Fan_i_App(StackFrame caller);
Z building_control_IPCPorts_TempControl_i_App(StackFrame caller);
Z building_control_IPCPorts_Main(StackFrame caller);

#endif