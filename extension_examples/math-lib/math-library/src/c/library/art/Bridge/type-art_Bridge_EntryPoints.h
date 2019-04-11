#ifndef SIREUM_TYPE_H_art_Bridge_EntryPoints
#define SIREUM_TYPE_H_art_Bridge_EntryPoints
#include <misc.h>

// art.Bridge.EntryPoints

#include <type-math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints.h>

typedef union art_Bridge_EntryPoints *art_Bridge_EntryPoints;
union art_Bridge_EntryPoints {
  TYPE type;
  struct math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints;
};

#define DeclNewart_Bridge_EntryPoints(x) union art_Bridge_EntryPoints x = { 0 }

#endif