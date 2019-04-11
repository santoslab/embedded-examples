#ifndef SIREUM_H_org_sireum_MS_F55A18
#define SIREUM_H_org_sireum_MS_F55A18
#include <types.h>

// MS[Z, Option[art.UPort]]
B MS_F55A18__eq(MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_create(MS_F55A18 result, StackFrame caller, Z size, Option_6239DB dflt);
void MS_F55A18_zreate(MS_F55A18 result, StackFrame caller, Z size, Option_6239DB dflt);
void MS_F55A18__append(MS_F55A18 result, StackFrame caller, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__prepend(MS_F55A18 result, StackFrame caller, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__appendAll(MS_F55A18 result, StackFrame caller, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18__remove(MS_F55A18 result, StackFrame caller, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__removeAll(MS_F55A18 result, StackFrame caller, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_cprint(MS_F55A18 this, B isOut);
void MS_F55A18_string(String result, StackFrame caller, MS_F55A18 this);

static inline B MS_F55A18__ne(MS_F55A18 this, MS_F55A18 other) {
  return !MS_F55A18__eq(this, other);
}


#endif