#ifndef SIREUM_H_building_control_ArtNix
#define SIREUM_H_building_control_ArtNix
#include <types.h>

void building_control_ArtNix_init(StackFrame caller);

Z building_control_ArtNix_maxPortIds(StackFrame caller);
art_TimeTriggered building_control_ArtNix_timeTriggered(StackFrame caller);
MS_2590FE building_control_ArtNix_data(StackFrame caller);
Option_8E9F45 building_control_ArtNix_noData(StackFrame caller);
MS_B5E3E6 building_control_ArtNix_connection(StackFrame caller);
MS_30A5B4 building_control_ArtNix_eventInPorts(StackFrame caller);
MS_2590FE building_control_ArtNix_frozen(StackFrame caller);
void building_control_ArtNix_frozen_a(StackFrame caller, MS_2590FE p_frozen);
MS_2590FE building_control_ArtNix_outgoing(StackFrame caller);
void building_control_ArtNix_outgoing_a(StackFrame caller, MS_2590FE p_outgoing);
B building_control_ArtNix_isTimeDispatch(StackFrame caller);
void building_control_ArtNix_isTimeDispatch_a(StackFrame caller, B p_isTimeDispatch);

Unit building_control_ArtNix_timeDispatch(StackFrame caller);

Unit building_control_ArtNix_eventDispatch(StackFrame caller);

Unit building_control_ArtNix_updateData(StackFrame caller, Z port, art_DataContent d);

Unit building_control_ArtNix_run(StackFrame caller);

Unit building_control_ArtNix_logInfo(StackFrame caller, String title, String msg);

Unit building_control_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit building_control_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void building_control_ArtNix_dispatchStatus(art_DispatchStatus result, StackFrame caller, Z bridgeId);

void building_control_ArtNix_getValue(Option_8E9F45 result, StackFrame caller, Z portId);

Unit building_control_ArtNix_putValue(StackFrame caller, Z portId, art_DataContent data);

#endif