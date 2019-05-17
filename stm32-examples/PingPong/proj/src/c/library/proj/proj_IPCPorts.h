#ifndef SIREUM_H_proj_IPCPorts
#define SIREUM_H_proj_IPCPorts
#include <types.h>

void proj_IPCPorts_init(StackFrame caller);

Z proj_IPCPorts_Ping_i_App(StackFrame caller);
Z proj_IPCPorts_Pong_i_App(StackFrame caller);
Z proj_IPCPorts_Main(StackFrame caller);

#endif