#ifndef SIREUM_H_org_sireum_Option_8E9F45
#define SIREUM_H_org_sireum_Option_8E9F45
#include <types.h>

// Option[art.DataContent]

#define Option_8E9F45__eq(this, other) Type__eq(this, other)
#define Option_8E9F45__ne(this, other) (!Type__eq(this, other))
#define Option_8E9F45_cprint(this, isOut) Type_cprint(this, isOut)
#define Option_8E9F45_string(result, caller, this) Type_string(result, caller, this)

B Option_8E9F45__is(StackFrame caller, void *this);
Option_8E9F45 Option_8E9F45__as(StackFrame caller, void *this);

B Option_8E9F45_nonEmpty_(StackFrame caller, Option_8E9F45 this);

#endif