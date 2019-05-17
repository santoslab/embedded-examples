#ifndef SIREUM_H_art_UConnection
#define SIREUM_H_art_UConnection
#include <types.h>

// art.UConnection

#define art_UConnection__eq(this, other) Type__eq(this, other)
#define art_UConnection__ne(this, other) (!Type__eq(this, other))
#define art_UConnection_cprint(this, isOut) Type_cprint(this, isOut)
#define art_UConnection_string(result, caller, this) Type_string(result, caller, this)

B art_UConnection__is(StackFrame caller, void *this);
art_UConnection art_UConnection__as(StackFrame caller, void *this);

void art_UConnection_from_(art_UPort result, StackFrame caller, art_UConnection this);

void art_UConnection_to_(art_UPort result, StackFrame caller, art_UConnection this);

#endif