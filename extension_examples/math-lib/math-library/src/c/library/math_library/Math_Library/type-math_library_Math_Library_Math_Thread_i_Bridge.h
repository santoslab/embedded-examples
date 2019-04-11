#ifndef SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Bridge
#define SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Bridge
#include <misc.h>

// math_library.Math_Library.Math_Thread_i_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_Bridge_Ports.h>
#include <type-math_library_Math_Library_Math_Thread_i_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct math_library_Math_Library_Math_Thread_i_Bridge *math_library_Math_Library_Math_Thread_i_Bridge;
struct math_library_Math_Library_Math_Thread_i_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Bridge_Ports ports;
  struct math_library_Math_Library_Math_Thread_i_Bridge_Api api;
  Z id;
};

#define DeclNewmath_library_Math_Library_Math_Thread_i_Bridge(x) struct math_library_Math_Library_Math_Thread_i_Bridge x = { .type = Tmath_library_Math_Library_Math_Thread_i_Bridge }


#endif