#ifndef SIREUM_H_proj_Ping_i_App
#define SIREUM_H_proj_Ping_i_App
#include <types.h>

void proj_Ping_i_App_init(StackFrame caller);

art_Bridge_EntryPoints proj_Ping_i_App_entryPoints(StackFrame caller);
Z proj_Ping_i_App_appPortId(StackFrame caller);
Option_882048 proj_Ping_i_App_appPortIdOpt(StackFrame caller);
Z proj_Ping_i_App_ping_innPortId(StackFrame caller);
Option_882048 proj_Ping_i_App_ping_innPortIdOpt(StackFrame caller);

Z proj_Ping_i_App_main(StackFrame caller, IS_948B60 args);

Unit proj_Ping_i_App_atExit(StackFrame caller);

Unit proj_Ping_i_App_initialise(StackFrame caller, Z seed);

Unit proj_Ping_i_App_compute(StackFrame caller);

Unit proj_Ping_i_App_exit(StackFrame caller);

#endif