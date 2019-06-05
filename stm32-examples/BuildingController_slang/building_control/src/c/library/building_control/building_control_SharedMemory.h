#ifndef SIREUM_H_building_control_SharedMemory
#define SIREUM_H_building_control_SharedMemory
#include <types.h>

Z building_control_SharedMemory_create(StackFrame caller, Z id);

void building_control_SharedMemory_receive(art_DataContent result, StackFrame caller, Z port);

void building_control_SharedMemory_receiveAsync(Option_8E9F45 result, StackFrame caller, Z port);

B building_control_SharedMemory_sendAsync(StackFrame caller, Z id, Z port, art_DataContent d);

Unit building_control_SharedMemory_remove(StackFrame caller, Z id);

#endif