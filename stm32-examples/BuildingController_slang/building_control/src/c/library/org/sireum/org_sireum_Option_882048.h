#ifndef SIREUM_H_org_sireum_Option_882048
#define SIREUM_H_org_sireum_Option_882048
#include <types.h>

// Option[Z]

#define Option_882048__eq(this, other) Type__eq(this, other)
#define Option_882048__ne(this, other) (!Type__eq(this, other))
#define Option_882048_cprint(this, isOut) Type_cprint(this, isOut)
#define Option_882048_string(result, caller, this) Type_string(result, caller, this)

B Option_882048__is(StackFrame caller, void *this);
Option_882048 Option_882048__as(StackFrame caller, void *this);

Z Option_882048_get_(StackFrame caller, Option_882048 this);

#endif