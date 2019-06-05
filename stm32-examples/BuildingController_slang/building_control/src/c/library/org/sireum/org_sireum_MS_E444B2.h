#ifndef SIREUM_H_org_sireum_MS_E444B2
#define SIREUM_H_org_sireum_MS_E444B2
#include <types.h>

// MS[Z, IS[Z, Z]]
B MS_E444B2__eq(MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_create(MS_E444B2 result, StackFrame caller, Z size, IS_82ABD8 dflt);
void MS_E444B2_zreate(MS_E444B2 result, StackFrame caller, Z size, IS_82ABD8 dflt);
void MS_E444B2__append(MS_E444B2 result, StackFrame caller, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__prepend(MS_E444B2 result, StackFrame caller, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__appendAll(MS_E444B2 result, StackFrame caller, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2__remove(MS_E444B2 result, StackFrame caller, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__removeAll(MS_E444B2 result, StackFrame caller, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_cprint(MS_E444B2 this, B isOut);
void MS_E444B2_string(String result, StackFrame caller, MS_E444B2 this);

static inline B MS_E444B2__ne(MS_E444B2 this, MS_E444B2 other) {
  return !MS_E444B2__eq(this, other);
}


#endif