#ifndef SIREUM_H_org_sireum_IS_948B60
#define SIREUM_H_org_sireum_IS_948B60
#include <types.h>

// IS[Z, String]
B IS_948B60__eq(IS_948B60 this, IS_948B60 other);
void IS_948B60_create(IS_948B60 result, StackFrame caller, Z size, String dflt);
void IS_948B60_zreate(IS_948B60 result, StackFrame caller, Z size, String dflt);
void IS_948B60__append(IS_948B60 result, StackFrame caller, IS_948B60 this, String value);
void IS_948B60__prepend(IS_948B60 result, StackFrame caller, IS_948B60 this, String value);
void IS_948B60__appendAll(IS_948B60 result, StackFrame caller, IS_948B60 this, IS_948B60 other);
void IS_948B60__remove(IS_948B60 result, StackFrame caller, IS_948B60 this, String value);
void IS_948B60__removeAll(IS_948B60 result, StackFrame caller, IS_948B60 this, IS_948B60 other);
void IS_948B60_cprint(IS_948B60 this, B isOut);
void IS_948B60_string(String result, StackFrame caller, IS_948B60 this);

static inline B IS_948B60__ne(IS_948B60 this, IS_948B60 other) {
  return !IS_948B60__eq(this, other);
}


#endif