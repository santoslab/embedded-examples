#ifndef SIREUM_H_building_control_SharedMemory
#define SIREUM_H_building_control_SharedMemory
#include <types.h>

Z building_control_SharedMemory_create(STACK_FRAME Z id);

void building_control_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port);

void building_control_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port);

B building_control_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit building_control_SharedMemory_remove(STACK_FRAME Z id);

#endif