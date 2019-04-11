#ifndef SIREUM_H_org_sireum_MS_2590FE
#define SIREUM_H_org_sireum_MS_2590FE
#include <types.h>

// MS[Z, Option[art.DataContent]]
B MS_2590FE__eq(MS_2590FE this, MS_2590FE other);
void MS_2590FE_create(MS_2590FE result, StackFrame caller, Z size, Option_8E9F45 dflt);
void MS_2590FE_zreate(MS_2590FE result, StackFrame caller, Z size, Option_8E9F45 dflt);
void MS_2590FE__append(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__prepend(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__appendAll(MS_2590FE result, StackFrame caller, MS_2590FE this, MS_2590FE other);
void MS_2590FE__remove(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__removeAll(MS_2590FE result, StackFrame caller, MS_2590FE this, MS_2590FE other);
void MS_2590FE_cprint(MS_2590FE this, B isOut);
void MS_2590FE_string(String result, StackFrame caller, MS_2590FE this);

static inline B MS_2590FE__ne(MS_2590FE this, MS_2590FE other) {
  return !MS_2590FE__eq(this, other);
}


#endif