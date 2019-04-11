#ifndef SIREUM_H_art_Bridge
#define SIREUM_H_art_Bridge
#include <types.h>

// art.Bridge

#define art_Bridge__eq(this, other) Type__eq(this, other)
#define art_Bridge__ne(this, other) (!Type__eq(this, other))
#define art_Bridge_cprint(this, isOut) Type_cprint(this, isOut)
#define art_Bridge_string(result, caller, this) Type_string(result, caller, this)

B art_Bridge__is(StackFrame caller, void *this);
art_Bridge art_Bridge__as(StackFrame caller, void *this);

Z art_Bridge_id_(StackFrame caller, art_Bridge this);

void art_Bridge_dispatchProtocol_(art_DispatchPropertyProtocol result, StackFrame caller, art_Bridge this);

void art_Bridge_name_(String result, StackFrame caller, art_Bridge this);

void art_Bridge_ports_(art_Bridge_Ports result, StackFrame caller, art_Bridge this);

#endif