#ifndef SIREUM_H_org_sireum_Option_6239DB
#define SIREUM_H_org_sireum_Option_6239DB
#include <types.h>

// Option[art.UPort]

#define Option_6239DB__eq(this, other) Type__eq(this, other)
#define Option_6239DB__ne(this, other) (!Type__eq(this, other))
#define Option_6239DB_cprint(this, isOut) Type_cprint(this, isOut)
#define Option_6239DB_string(result, caller, this) Type_string(result, caller, this)

B Option_6239DB__is(StackFrame caller, void *this);
Option_6239DB Option_6239DB__as(StackFrame caller, void *this);

#endif