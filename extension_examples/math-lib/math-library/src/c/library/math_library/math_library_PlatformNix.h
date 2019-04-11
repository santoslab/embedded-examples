#ifndef SIREUM_H_math_library_PlatformNix
#define SIREUM_H_math_library_PlatformNix
#include <types.h>

void math_library_PlatformNix_init(StackFrame caller);

Z math_library_PlatformNix_seed(StackFrame caller);
void math_library_PlatformNix_seed_a(StackFrame caller, Z p_seed);
Option_882048 math_library_PlatformNix_msgidOpt(StackFrame caller);
void math_library_PlatformNix_msgidOpt_a(StackFrame caller, Option_882048 p_msgidOpt);

Unit math_library_PlatformNix_initialise(StackFrame caller, Z seed, Option_882048 portOpt);

void math_library_PlatformNix_receive(Tuple2_D0E3BB result, StackFrame caller, Option_882048 portOpt);

Unit math_library_PlatformNix_send(StackFrame caller, Z app, Z port, art_DataContent data);

Unit math_library_PlatformNix_finalise(StackFrame caller);

#endif