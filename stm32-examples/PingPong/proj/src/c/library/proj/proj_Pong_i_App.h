#ifndef SIREUM_H_proj_Pong_i_App
#define SIREUM_H_proj_Pong_i_App
#include <types.h>

void proj_Pong_i_App_init(StackFrame caller);

art_Bridge_EntryPoints proj_Pong_i_App_entryPoints(StackFrame caller);
Z proj_Pong_i_App_appPortId(StackFrame caller);
Option_882048 proj_Pong_i_App_appPortIdOpt(StackFrame caller);
Z proj_Pong_i_App_pong_innPortId(StackFrame caller);
Option_882048 proj_Pong_i_App_pong_innPortIdOpt(StackFrame caller);

Z proj_Pong_i_App_main(StackFrame caller, IS_948B60 args);

Unit proj_Pong_i_App_atExit(StackFrame caller);

Unit proj_Pong_i_App_initialize(StackFrame caller, Z seed);

Unit proj_Pong_i_App_compute(StackFrame caller);

Unit proj_Pong_i_App_exit(StackFrame caller);

#endif