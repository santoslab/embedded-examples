#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
#include <ztype.h>
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0, // (Z, Z)
  TTuple2_D0E3BB = 1, // (Z, art.DataContent)
  TIS_AA0F82 = 2, // IS[Z, (Z, Z)]
  TIS_948B60 = 3, // IS[Z, String]
  TIS_82ABD8 = 4, // IS[Z, Z]
  TIS_08117A = 5, // IS[Z, art.UConnection]
  TIS_820232 = 6, // IS[Z, art.UPort]
  TMNone_2A2E1D = 7, // MNone[art.Bridge]
  TMS_B5E3E6 = 8, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = 9, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 10, // MS[Z, MOption[art.Bridge]]
  TMS_2590FE = 11, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 12, // MS[Z, Option[art.UPort]]
  TMS_852149 = 13, // MS[Z, art.Bridge]
  TMSome_D3D128 = 14, // MSome[art.Bridge]
  TNone_93AA2B = 15, // None[(Z, art.DataContent)]
  TNone_76463B = 16, // None[Z]
  TNone_964667 = 17, // None[art.DataContent]
  TNone_39BC5F = 18, // None[art.UPort]
  TNone_0A8767 = 19, // None[proj.Base_Types.Integer_8]
  TSome_E9D1E5 = 20, // Some[(Z, art.DataContent)]
  TSome_488F47 = 21, // Some[Z]
  TSome_D29615 = 22, // Some[art.DataContent]
  TSome_3E197E = 23, // Some[art.UPort]
  TSome_AA0E8F = 24, // Some[proj.Base_Types.Integer_8]
  Tart_ArchitectureDescription = 25, // art.ArchitectureDescription
  Tart_Bridge_Ports = 26, // art.Bridge.Ports
  Tart_Connection_4C277C = 27, // art.Connection[proj.Base_Types.Integer_8]
  Tart_DispatchPropertyProtocol_Periodic = 28, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 29, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 30, // art.Empty
  Tart_Port_B84865 = 31, // art.Port[proj.Base_Types.Integer_8]
  TString = 32, // org.sireum.String
  Tproj_Base_Types_Integer_8 = 33, // proj.Base_Types.Integer_8
  Tproj_Base_Types_Integer_8_Payload = 34, // proj.Base_Types.Integer_8_Payload
  Tproj_PingPong_Ping_i_Bridge = 35, // proj.PingPong.Ping_i_Bridge
  Tproj_PingPong_Ping_i_Bridge_Api = 36, // proj.PingPong.Ping_i_Bridge.Api
  Tproj_PingPong_Ping_i_Bridge_EntryPoints = 37, // proj.PingPong.Ping_i_Bridge.EntryPoints
  Tproj_PingPong_Ping_i_Impl = 38, // proj.PingPong.Ping_i_Impl
  Tproj_PingPong_Pong_i_Bridge = 39, // proj.PingPong.Pong_i_Bridge
  Tproj_PingPong_Pong_i_Bridge_Api = 40, // proj.PingPong.Pong_i_Bridge.Api
  Tproj_PingPong_Pong_i_Bridge_EntryPoints = 41, // proj.PingPong.Pong_i_Bridge.EntryPoints
  Tproj_PingPong_Pong_i_Impl = 42, // proj.PingPong.Pong_i_Impl
} TYPE;

char *TYPE_string(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 60

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