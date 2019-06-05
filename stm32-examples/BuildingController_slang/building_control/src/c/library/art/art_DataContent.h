#ifndef SIREUM_H_art_DataContent
#define SIREUM_H_art_DataContent
#include <types.h>

// art.DataContent

#define art_DataContent__eq(this, other) Type__eq(this, other)
#define art_DataContent__ne(this, other) (!Type__eq(this, other))
#define art_DataContent_cprint(this, isOut) Type_cprint(this, isOut)
#define art_DataContent_string(result, caller, this) Type_string(result, caller, this)

B art_DataContent__is(StackFrame caller, void *this);
art_DataContent art_DataContent__as(StackFrame caller, void *this);

#endif