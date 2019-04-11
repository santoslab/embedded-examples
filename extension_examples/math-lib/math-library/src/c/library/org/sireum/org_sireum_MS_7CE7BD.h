#ifndef SIREUM_H_org_sireum_MS_7CE7BD
#define SIREUM_H_org_sireum_MS_7CE7BD
#include <types.h>

// MS[Z, (Z, Z)]
B MS_7CE7BD__eq(MS_7CE7BD this, MS_7CE7BD other);
void MS_7CE7BD_create(MS_7CE7BD result, StackFrame caller, Z size, Tuple2_EC3B57 dflt);
void MS_7CE7BD_zreate(MS_7CE7BD result, StackFrame caller, Z size, Tuple2_EC3B57 dflt);
void MS_7CE7BD__append(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value);
void MS_7CE7BD__prepend(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value);
void MS_7CE7BD__appendAll(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, MS_7CE7BD other);
void MS_7CE7BD__remove(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value);
void MS_7CE7BD__removeAll(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, MS_7CE7BD other);
void MS_7CE7BD_cprint(MS_7CE7BD this, B isOut);
void MS_7CE7BD_string(String result, StackFrame caller, MS_7CE7BD this);

static inline B MS_7CE7BD__ne(MS_7CE7BD this, MS_7CE7BD other) {
  return !MS_7CE7BD__eq(this, other);
}


#endif