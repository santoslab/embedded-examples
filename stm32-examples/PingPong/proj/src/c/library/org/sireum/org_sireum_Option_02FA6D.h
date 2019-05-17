#ifndef SIREUM_H_org_sireum_Option_02FA6D
#define SIREUM_H_org_sireum_Option_02FA6D
#include <types.h>

// Option[(Z, art.DataContent)]

#define Option_02FA6D__eq(this, other) Type__eq(this, other)
#define Option_02FA6D__ne(this, other) (!Type__eq(this, other))
#define Option_02FA6D_cprint(this, isOut) Type_cprint(this, isOut)
#define Option_02FA6D_string(result, caller, this) Type_string(result, caller, this)

B Option_02FA6D__is(StackFrame caller, void *this);
Option_02FA6D Option_02FA6D__as(StackFrame caller, void *this);

B Option_02FA6D_isEmpty_(StackFrame caller, Option_02FA6D this);

#endif