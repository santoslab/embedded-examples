#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
#include <ztype.h>
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0, // (Z, Z)
  TTuple2_D0E3BB = 1, // (Z, art.DataContent)
  TIS_948B60 = 2, // IS[Z, String]
  TIS_82ABD8 = 3, // IS[Z, Z]
  TIS_08117A = 4, // IS[Z, art.UConnection]
  TIS_820232 = 5, // IS[Z, art.UPort]
  TMNone_2A2E1D = 6, // MNone[art.Bridge]
  TMS_7CE7BD = 7, // MS[Z, (Z, Z)]
  TMS_E444B2 = 8, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 9, // MS[Z, MOption[art.Bridge]]
  TMS_2590FE = 10, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 11, // MS[Z, Option[art.UPort]]
  TMS_852149 = 12, // MS[Z, art.Bridge]
  TMSome_D3D128 = 13, // MSome[art.Bridge]
  TNone_76463B = 14, // None[Z]
  TNone_964667 = 15, // None[art.DataContent]
  TNone_39BC5F = 16, // None[art.UPort]
  TSome_488F47 = 17, // Some[Z]
  TSome_D29615 = 18, // Some[art.DataContent]
  TSome_3E197E = 19, // Some[art.UPort]
  Tart_ArchitectureDescription = 20, // art.ArchitectureDescription
  Tart_Bridge_Ports = 21, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = 22, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 23, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 24, // art.Empty
  Tmath_library_Math_Library_Math_Thread_i_Bridge = 25, // math_library.Math_Library.Math_Thread_i_Bridge
  Tmath_library_Math_Library_Math_Thread_i_Bridge_Api = 26, // math_library.Math_Library.Math_Thread_i_Bridge.Api
  Tmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints = 27, // math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints
  Tmath_library_Math_Library_Math_Thread_i_Impl = 28, // math_library.Math_Library.Math_Thread_i_Impl
  TString = 29, // org.sireum.String
} TYPE;

char *TYPE_string(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

static inline B String__eq(String this, String other) {
  Z thisSize = this->size;
  if (thisSize != other->size) return F;
  return memcmp(this->value, other->value, (size_t) thisSize) == 0;
}

static inline B String__ne(String this, String other) {
  return !String__eq(this, other);
}

#endif