#ifndef SIREUM_H_org_sireum_Nothing
#define SIREUM_H_org_sireum_Nothing
#include <types.h>

// Nothing

#define Nothing__eq(this, other) Type__eq(this, other)
#define Nothing__ne(this, other) (!Type__eq(this, other))
#define Nothing_cprint(this, isOut) Type_cprint(this, isOut)
#define Nothing_string(result, caller, this) Type_string(result, caller, this)

B Nothing__is(StackFrame caller, void *this);
Nothing Nothing__as(StackFrame caller, void *this);

#endif