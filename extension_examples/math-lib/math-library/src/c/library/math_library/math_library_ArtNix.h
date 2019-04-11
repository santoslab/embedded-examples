#ifndef SIREUM_H_math_library_ArtNix
#define SIREUM_H_math_library_ArtNix
#include <types.h>

void math_library_ArtNix_init(StackFrame caller);

Z math_library_ArtNix_maxPortIds(StackFrame caller);
MS_2590FE math_library_ArtNix_data(StackFrame caller);
Option_8E9F45 math_library_ArtNix_noData(StackFrame caller);
MS_7CE7BD math_library_ArtNix_connection(StackFrame caller);
MS_2590FE math_library_ArtNix_frozen(StackFrame caller);
void math_library_ArtNix_frozen_a(StackFrame caller, MS_2590FE p_frozen);
MS_2590FE math_library_ArtNix_outgoing(StackFrame caller);
void math_library_ArtNix_outgoing_a(StackFrame caller, MS_2590FE p_outgoing);
B math_library_ArtNix_isTimeDispatch(StackFrame caller);
void math_library_ArtNix_isTimeDispatch_a(StackFrame caller, B p_isTimeDispatch);

Unit math_library_ArtNix_timeDispatch(StackFrame caller);

Unit math_library_ArtNix_run(StackFrame caller);

Unit math_library_ArtNix_logInfo(StackFrame caller, String title, String msg);

Unit math_library_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit math_library_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

#endif