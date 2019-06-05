#ifndef SIREUM_H_art_UPort
#define SIREUM_H_art_UPort
#include <types.h>

// art.UPort

#define art_UPort__eq(this, other) Type__eq(this, other)
#define art_UPort__ne(this, other) (!Type__eq(this, other))
#define art_UPort_cprint(this, isOut) Type_cprint(this, isOut)
#define art_UPort_string(result, caller, this) Type_string(result, caller, this)

B art_UPort__is(StackFrame caller, void *this);
art_UPort art_UPort__as(StackFrame caller, void *this);

Z art_UPort_id_(StackFrame caller, art_UPort this);

art_PortMode art_UPort_mode_(StackFrame caller, art_UPort this);

#endif