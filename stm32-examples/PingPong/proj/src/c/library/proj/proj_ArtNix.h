#ifndef SIREUM_H_proj_ArtNix
#define SIREUM_H_proj_ArtNix
#include <types.h>

void proj_ArtNix_init(StackFrame caller);

Z proj_ArtNix_maxPortIds(StackFrame caller);
MS_2590FE proj_ArtNix_data(StackFrame caller);
Option_8E9F45 proj_ArtNix_noData(StackFrame caller);
MS_B5E3E6 proj_ArtNix_connection(StackFrame caller);
MS_2590FE proj_ArtNix_frozen(StackFrame caller);
void proj_ArtNix_frozen_a(StackFrame caller, MS_2590FE p_frozen);
MS_2590FE proj_ArtNix_outgoing(StackFrame caller);
void proj_ArtNix_outgoing_a(StackFrame caller, MS_2590FE p_outgoing);
B proj_ArtNix_isTimeDispatch(StackFrame caller);
void proj_ArtNix_isTimeDispatch_a(StackFrame caller, B p_isTimeDispatch);

Unit proj_ArtNix_timeDispatch(StackFrame caller);

Unit proj_ArtNix_updateData(StackFrame caller, Z port, art_DataContent d);

Unit proj_ArtNix_run(StackFrame caller);

Unit proj_ArtNix_logInfo(StackFrame caller, String title, String msg);

Unit proj_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit proj_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit proj_ArtNix_putValue(StackFrame caller, Z portId, art_DataContent data);

void proj_ArtNix_getValue(Option_8E9F45 result, StackFrame caller, Z portId);

#endif