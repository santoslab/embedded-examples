#ifndef SIREUM_H_building_control_ArtNix
#define SIREUM_H_building_control_ArtNix
#include <types.h>

void building_control_ArtNix_init(STACK_FRAME_ONLY);

Z building_control_ArtNix_maxPortIds(STACK_FRAME_ONLY);
art_TimeTriggered building_control_ArtNix_timeTriggered(STACK_FRAME_ONLY);
MS_2590FE building_control_ArtNix_data(STACK_FRAME_ONLY);
Option_8E9F45 building_control_ArtNix_noData(STACK_FRAME_ONLY);
MS_B5E3E6 building_control_ArtNix_connection(STACK_FRAME_ONLY);
MS_30A5B4 building_control_ArtNix_eventInPorts(STACK_FRAME_ONLY);
MS_2590FE building_control_ArtNix_frozen(STACK_FRAME_ONLY);
void building_control_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen);
MS_2590FE building_control_ArtNix_outgoing(STACK_FRAME_ONLY);
void building_control_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing);
B building_control_ArtNix_isTimeDispatch(STACK_FRAME_ONLY);
void building_control_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch);

Unit building_control_ArtNix_timeDispatch(STACK_FRAME_ONLY);

Unit building_control_ArtNix_eventDispatch(STACK_FRAME_ONLY);

Unit building_control_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d);

Unit building_control_ArtNix_run(STACK_FRAME_ONLY);

Unit building_control_ArtNix_logInfo(STACK_FRAME String title, String msg);

void building_control_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId);

Unit building_control_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void building_control_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit building_control_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit building_control_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data);

#endif