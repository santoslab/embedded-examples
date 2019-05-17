#ifndef SIREUM_H_org_sireum_IS_820232
#define SIREUM_H_org_sireum_IS_820232
#include <types.h>

// IS[Z, art.UPort]
B IS_820232__eq(IS_820232 this, IS_820232 other);
void IS_820232_create(IS_820232 result, StackFrame caller, Z size, art_UPort dflt);
void IS_820232_zreate(IS_820232 result, StackFrame caller, Z size, art_UPort dflt);
void IS_820232__append(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value);
void IS_820232__prepend(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value);
void IS_820232__appendAll(IS_820232 result, StackFrame caller, IS_820232 this, IS_820232 other);
void IS_820232__remove(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value);
void IS_820232__removeAll(IS_820232 result, StackFrame caller, IS_820232 this, IS_820232 other);
void IS_820232_cprint(IS_820232 this, B isOut);
void IS_820232_string(String result, StackFrame caller, IS_820232 this);

static inline B IS_820232__ne(IS_820232 this, IS_820232 other) {
  return !IS_820232__eq(this, other);
}


#endif