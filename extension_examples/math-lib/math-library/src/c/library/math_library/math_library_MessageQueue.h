#ifndef SIREUM_H_math_library_MessageQueue
#define SIREUM_H_math_library_MessageQueue
#include <types.h>

Z math_library_MessageQueue_create(StackFrame caller, Z msgid);

void math_library_MessageQueue_receive(Tuple2_D0E3BB result, StackFrame caller);

Unit math_library_MessageQueue_send(StackFrame caller, Z msgid, Z port, art_DataContent d);

Unit math_library_MessageQueue_remove(StackFrame caller, Z msgid);

#endif