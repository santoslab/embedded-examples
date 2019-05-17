#ifndef SIREUM_H_proj_PlatformNix
#define SIREUM_H_proj_PlatformNix
#include <types.h>

void proj_PlatformNix_init(StackFrame caller);

Z proj_PlatformNix_seed(StackFrame caller);
void proj_PlatformNix_seed_a(StackFrame caller, Z p_seed);
IS_82ABD8 proj_PlatformNix_ids(StackFrame caller);
void proj_PlatformNix_ids_a(StackFrame caller, IS_82ABD8 p_ids);

void proj_PlatformNix_receive(Tuple2_D0E3BB result, StackFrame caller, Option_882048 portOpt);

void proj_PlatformNix_receiveAsync(Option_02FA6D result, StackFrame caller, Option_882048 portOpt);

Unit proj_PlatformNix_initialise(StackFrame caller, Z seed, Option_882048 portOpt);

B proj_PlatformNix_sendAsync(StackFrame caller, Z app, Z port, art_DataContent data);

Unit proj_PlatformNix_finalise(StackFrame caller);

#endif