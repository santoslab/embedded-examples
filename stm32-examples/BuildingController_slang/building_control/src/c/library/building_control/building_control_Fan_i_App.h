#ifndef SIREUM_H_building_control_Fan_i_App
#define SIREUM_H_building_control_Fan_i_App
#include <types.h>

void building_control_Fan_i_App_init(StackFrame caller);

art_Bridge_EntryPoints building_control_Fan_i_App_entryPoints(StackFrame caller);
Z building_control_Fan_i_App_fanCmdPortId(StackFrame caller);
Option_882048 building_control_Fan_i_App_fanCmdPortIdOpt(StackFrame caller);

Z building_control_Fan_i_App_main(StackFrame caller, IS_948B60 args);

Unit building_control_Fan_i_App_atExit(StackFrame caller);

Unit building_control_Fan_i_App_initialize(StackFrame caller, Z seed);

Unit building_control_Fan_i_App_compute(StackFrame caller);

Unit building_control_Fan_i_App_exit(StackFrame caller);

#endif