#ifndef SIREUM_H_proj_Arch
#define SIREUM_H_proj_Arch
#include <types.h>

void proj_Arch_init(StackFrame caller);

proj_PingPong_Ping_i_Bridge proj_Arch_PingPongSystem_i_Instance_p_ping(StackFrame caller);
proj_PingPong_Pong_i_Bridge proj_Arch_PingPongSystem_i_Instance_p_pong(StackFrame caller);
art_ArchitectureDescription proj_Arch_ad(StackFrame caller);

#endif