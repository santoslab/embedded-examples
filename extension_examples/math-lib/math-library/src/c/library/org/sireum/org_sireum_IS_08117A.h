#ifndef SIREUM_H_org_sireum_IS_08117A
#define SIREUM_H_org_sireum_IS_08117A
#include <types.h>

// IS[Z, art.UConnection]
B IS_08117A__eq(IS_08117A this, IS_08117A other);
void IS_08117A_create(IS_08117A result, StackFrame caller, Z size, art_UConnection dflt);
void IS_08117A_zreate(IS_08117A result, StackFrame caller, Z size, art_UConnection dflt);
void IS_08117A__append(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value);
void IS_08117A__prepend(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value);
void IS_08117A__appendAll(IS_08117A result, StackFrame caller, IS_08117A this, IS_08117A other);
void IS_08117A__remove(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value);
void IS_08117A__removeAll(IS_08117A result, StackFrame caller, IS_08117A this, IS_08117A other);
void IS_08117A_cprint(IS_08117A this, B isOut);
void IS_08117A_string(String result, StackFrame caller, IS_08117A this);

static inline B IS_08117A__ne(IS_08117A this, IS_08117A other) {
  return !IS_08117A__eq(this, other);
}


#endif