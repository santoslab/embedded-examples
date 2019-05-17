#ifndef SIREUM_H_proj_SharedMemory
#define SIREUM_H_proj_SharedMemory
#include <types.h>

void proj_SharedMemory_receive(art_DataContent result, StackFrame caller, Z port);

void proj_SharedMemory_receiveAsync(Option_8E9F45 result, StackFrame caller, Z port);

Z proj_SharedMemory_create(StackFrame caller, Z id);

B proj_SharedMemory_sendAsync(StackFrame caller, Z id, Z port, art_DataContent d);

Unit proj_SharedMemory_remove(StackFrame caller, Z id);

#endif