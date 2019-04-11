#ifndef SIREUM_H_math_library_IPCPorts
#define SIREUM_H_math_library_IPCPorts
#include <types.h>

void math_library_IPCPorts_init(StackFrame caller);

Z math_library_IPCPorts_Math_Thread_i_App(StackFrame caller);
Z math_library_IPCPorts_Main(StackFrame caller);

#endif