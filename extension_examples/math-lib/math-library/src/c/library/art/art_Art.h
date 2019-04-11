#ifndef SIREUM_H_art_Art
#define SIREUM_H_art_Art
#include <types.h>

void art_Art_init(StackFrame caller);

Z art_Art_maxComponents(StackFrame caller);
Z art_Art_maxPorts(StackFrame caller);
String art_Art_logTitle(StackFrame caller);
MS_94FFA9 art_Art_bridges(StackFrame caller);
MS_E444B2 art_Art_connections(StackFrame caller);
MS_F55A18 art_Art_ports(StackFrame caller);

Unit art_Art_run(StackFrame caller, art_ArchitectureDescription system);

Unit art_Art_m_register(StackFrame caller, art_Bridge bridge);

Unit art_Art_connect(StackFrame caller, art_UPort from, art_UPort to);

Unit art_Art_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit art_Art_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit art_Art_logInfo(StackFrame caller, Z bridgeId, String msg);

void art_Art_bridge(art_Bridge result, StackFrame caller, Z bridgeId);

#endif