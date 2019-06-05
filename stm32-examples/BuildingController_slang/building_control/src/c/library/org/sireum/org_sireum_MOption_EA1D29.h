#ifndef SIREUM_H_org_sireum_MOption_EA1D29
#define SIREUM_H_org_sireum_MOption_EA1D29
#include <types.h>

// MOption[art.Bridge]

#define MOption_EA1D29__eq(this, other) Type__eq(this, other)
#define MOption_EA1D29__ne(this, other) (!Type__eq(this, other))
#define MOption_EA1D29_cprint(this, isOut) Type_cprint(this, isOut)
#define MOption_EA1D29_string(result, caller, this) Type_string(result, caller, this)

B MOption_EA1D29__is(StackFrame caller, void *this);
MOption_EA1D29 MOption_EA1D29__as(StackFrame caller, void *this);

#endif