#ifndef SIREUM_H_org_sireum_IS_82ABD8
#define SIREUM_H_org_sireum_IS_82ABD8
#include <types.h>

// IS[Z, Z]
B IS_82ABD8__eq(IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8_create(IS_82ABD8 result, StackFrame caller, Z size, Z dflt);
void IS_82ABD8_zreate(IS_82ABD8 result, StackFrame caller, Z size, Z dflt);
void IS_82ABD8__append(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value);
void IS_82ABD8__prepend(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value);
void IS_82ABD8__appendAll(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8__remove(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value);
void IS_82ABD8__removeAll(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8_cprint(IS_82ABD8 this, B isOut);
void IS_82ABD8_string(String result, StackFrame caller, IS_82ABD8 this);

static inline B IS_82ABD8__ne(IS_82ABD8 this, IS_82ABD8 other) {
  return !IS_82ABD8__eq(this, other);
}


#endif