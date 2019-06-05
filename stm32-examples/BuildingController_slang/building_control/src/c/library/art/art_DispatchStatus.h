#ifndef SIREUM_H_art_DispatchStatus
#define SIREUM_H_art_DispatchStatus
#include <types.h>

// art.DispatchStatus

#define art_DispatchStatus__eq(this, other) Type__eq(this, other)
#define art_DispatchStatus__ne(this, other) (!Type__eq(this, other))
#define art_DispatchStatus_cprint(this, isOut) Type_cprint(this, isOut)
#define art_DispatchStatus_string(result, caller, this) Type_string(result, caller, this)

B art_DispatchStatus__is(StackFrame caller, void *this);
art_DispatchStatus art_DispatchStatus__as(StackFrame caller, void *this);

#endif