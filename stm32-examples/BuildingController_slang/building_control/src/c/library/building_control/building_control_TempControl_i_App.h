#ifndef SIREUM_H_building_control_TempControl_i_App
#define SIREUM_H_building_control_TempControl_i_App
#include <types.h>

void building_control_TempControl_i_App_init(STACK_FRAME_ONLY);

art_Bridge_EntryPoints building_control_TempControl_i_App_entryPoints(STACK_FRAME_ONLY);
Z building_control_TempControl_i_App_currentTempPortId(STACK_FRAME_ONLY);
Option_882048 building_control_TempControl_i_App_currentTempPortIdOpt(STACK_FRAME_ONLY);

Z building_control_TempControl_i_App_main(STACK_FRAME IS_948B60 args);

Unit building_control_TempControl_i_App_atExit(STACK_FRAME_ONLY);

Unit building_control_TempControl_i_App_initialize(STACK_FRAME Z seed);

Unit building_control_TempControl_i_App_compute(STACK_FRAME_ONLY);

Unit building_control_TempControl_i_App_exit(STACK_FRAME_ONLY);

#endif