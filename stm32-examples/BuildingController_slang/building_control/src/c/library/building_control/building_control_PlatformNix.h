#ifndef SIREUM_H_building_control_PlatformNix
#define SIREUM_H_building_control_PlatformNix
#include <types.h>

void building_control_PlatformNix_init(StackFrame caller);

Z building_control_PlatformNix_seed(StackFrame caller);
void building_control_PlatformNix_seed_a(StackFrame caller, Z p_seed);
IS_82ABD8 building_control_PlatformNix_ids(StackFrame caller);
void building_control_PlatformNix_ids_a(StackFrame caller, IS_82ABD8 p_ids);

Unit building_control_PlatformNix_initialise(StackFrame caller, Z seed, Option_882048 portOpt);

void building_control_PlatformNix_receive(Tuple2_D0E3BB result, StackFrame caller, Option_882048 portOpt);

void building_control_PlatformNix_receiveAsync(Option_02FA6D result, StackFrame caller, Option_882048 portOpt);

B building_control_PlatformNix_sendAsync(StackFrame caller, Z app, Z port, art_DataContent data);

Unit building_control_PlatformNix_finalise(StackFrame caller);

#endif