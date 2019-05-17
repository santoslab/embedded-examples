#ifndef SIREUM_H_org_sireum_MS_B5E3E6
#define SIREUM_H_org_sireum_MS_B5E3E6
#include <types.h>

// MS[Z, IS[Z, (Z, Z)]]
B MS_B5E3E6__eq(MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6_create(MS_B5E3E6 result, StackFrame caller, Z size, IS_AA0F82 dflt);
void MS_B5E3E6_zreate(MS_B5E3E6 result, StackFrame caller, Z size, IS_AA0F82 dflt);
void MS_B5E3E6__append(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__prepend(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__appendAll(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6__remove(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__removeAll(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6_cprint(MS_B5E3E6 this, B isOut);
void MS_B5E3E6_string(String result, StackFrame caller, MS_B5E3E6 this);

static inline B MS_B5E3E6__ne(MS_B5E3E6 this, MS_B5E3E6 other) {
  return !MS_B5E3E6__eq(this, other);
}


#endif