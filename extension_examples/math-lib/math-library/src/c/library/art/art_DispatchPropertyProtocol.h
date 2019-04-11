#ifndef SIREUM_H_art_DispatchPropertyProtocol
#define SIREUM_H_art_DispatchPropertyProtocol
#include <types.h>

// art.DispatchPropertyProtocol

#define art_DispatchPropertyProtocol__eq(this, other) Type__eq(this, other)
#define art_DispatchPropertyProtocol__ne(this, other) (!Type__eq(this, other))
#define art_DispatchPropertyProtocol_cprint(this, isOut) Type_cprint(this, isOut)
#define art_DispatchPropertyProtocol_string(result, caller, this) Type_string(result, caller, this)

B art_DispatchPropertyProtocol__is(StackFrame caller, void *this);
art_DispatchPropertyProtocol art_DispatchPropertyProtocol__as(StackFrame caller, void *this);

#endif