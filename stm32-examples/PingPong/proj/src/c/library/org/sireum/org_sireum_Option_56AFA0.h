#ifndef SIREUM_H_org_sireum_Option_56AFA0
#define SIREUM_H_org_sireum_Option_56AFA0
#include <types.h>

// Option[proj.Base_Types.Integer_8]

#define Option_56AFA0__eq(this, other) Type__eq(this, other)
#define Option_56AFA0__ne(this, other) (!Type__eq(this, other))
#define Option_56AFA0_cprint(this, isOut) Type_cprint(this, isOut)
#define Option_56AFA0_string(result, caller, this) Type_string(result, caller, this)

B Option_56AFA0__is(StackFrame caller, void *this);
Option_56AFA0 Option_56AFA0__as(StackFrame caller, void *this);

#endif