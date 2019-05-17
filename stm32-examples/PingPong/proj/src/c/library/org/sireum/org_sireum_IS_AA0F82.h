#ifndef SIREUM_H_org_sireum_IS_AA0F82
#define SIREUM_H_org_sireum_IS_AA0F82
#include <types.h>

// IS[Z, (Z, Z)]
B IS_AA0F82__eq(IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_create(IS_AA0F82 result, StackFrame caller, Z size, Tuple2_EC3B57 dflt);
void IS_AA0F82_zreate(IS_AA0F82 result, StackFrame caller, Z size, Tuple2_EC3B57 dflt);
void IS_AA0F82__append(IS_AA0F82 result, StackFrame caller, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__prepend(IS_AA0F82 result, StackFrame caller, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__appendAll(IS_AA0F82 result, StackFrame caller, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82__remove(IS_AA0F82 result, StackFrame caller, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__removeAll(IS_AA0F82 result, StackFrame caller, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_cprint(IS_AA0F82 this, B isOut);
void IS_AA0F82_string(String result, StackFrame caller, IS_AA0F82 this);

static inline B IS_AA0F82__ne(IS_AA0F82 this, IS_AA0F82 other) {
  return !IS_AA0F82__eq(this, other);
}


#endif