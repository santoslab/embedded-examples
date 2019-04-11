#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge
#include <misc.h>

// art.Bridge

#include <type-math_library_Math_Library_Math_Thread_i_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct math_library_Math_Library_Math_Thread_i_Bridge math_library_Math_Library_Math_Thread_i_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#endif