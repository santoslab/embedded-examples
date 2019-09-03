#ifndef SIREUM_H_building_control_PlatformNix
#define SIREUM_H_building_control_PlatformNix
#include <types.h>

void building_control_PlatformNix_init(STACK_FRAME_ONLY);

Z building_control_PlatformNix_seed(STACK_FRAME_ONLY);
void building_control_PlatformNix_seed_a(STACK_FRAME Z p_seed);
IS_82ABD8 building_control_PlatformNix_ids(STACK_FRAME_ONLY);
void building_control_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids);

Unit building_control_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt);

void building_control_PlatformNix_receive(STACK_FRAME Tuple2_D0E3BB result, Option_882048 portOpt);

void building_control_PlatformNix_receiveAsync(STACK_FRAME Option_02FA6D result, Option_882048 portOpt);

B building_control_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data);

Unit building_control_PlatformNix_finalise(STACK_FRAME_ONLY);

#endif