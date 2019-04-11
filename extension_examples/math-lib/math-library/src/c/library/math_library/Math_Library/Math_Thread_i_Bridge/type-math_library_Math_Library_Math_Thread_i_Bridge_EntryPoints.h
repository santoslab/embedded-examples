#ifndef SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints
#define SIREUM_TYPE_H_math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints
#include <misc.h>

// math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints
#include <type-math_library_Math_Library_Math_Thread_i_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints *math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints;
struct math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints {
  TYPE type;
  struct math_library_Math_Library_Math_Thread_i_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Math_Thread_i_BridgeId;
};

#define DeclNewmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints(x) struct math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints x = { .type = Tmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints }


#endif