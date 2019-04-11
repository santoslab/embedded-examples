#ifndef SIREUM_H_art_Bridge_EntryPoints
#define SIREUM_H_art_Bridge_EntryPoints
#include <types.h>

// art.Bridge.EntryPoints

#define art_Bridge_EntryPoints__eq(this, other) Type__eq(this, other)
#define art_Bridge_EntryPoints__ne(this, other) (!Type__eq(this, other))
#define art_Bridge_EntryPoints_cprint(this, isOut) Type_cprint(this, isOut)
#define art_Bridge_EntryPoints_string(result, caller, this) Type_string(result, caller, this)

B art_Bridge_EntryPoints__is(StackFrame caller, void *this);
art_Bridge_EntryPoints art_Bridge_EntryPoints__as(StackFrame caller, void *this);

Unit art_Bridge_EntryPoints_initialise_(StackFrame caller, art_Bridge_EntryPoints this);

Unit art_Bridge_EntryPoints_compute_(StackFrame caller, art_Bridge_EntryPoints this);

Unit art_Bridge_EntryPoints_finalise_(StackFrame caller, art_Bridge_EntryPoints this);

#endif