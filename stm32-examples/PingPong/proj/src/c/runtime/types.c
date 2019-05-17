#include <types.h>

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string(void *type) {
  static char *strings[] = {
    "(Z, Z)",
    "(Z, art.DataContent)",
    "IS[Z, (Z, Z)]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MNone[art.Bridge]",
    "MS[Z, IS[Z, (Z, Z)]]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, MOption[art.Bridge]]",
    "MS[Z, Option[art.DataContent]]",
    "MS[Z, Option[art.UPort]]",
    "MS[Z, art.Bridge]",
    "MSome[art.Bridge]",
    "None[(Z, art.DataContent)]",
    "None[Z]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "None[proj.Base_Types.Integer_8]",
    "Some[(Z, art.DataContent)]",
    "Some[Z]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "Some[proj.Base_Types.Integer_8]",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection[proj.Base_Types.Integer_8]",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.Port[proj.Base_Types.Integer_8]",
    "String",
    "proj.Base_Types.Integer_8",
    "proj.Base_Types.Integer_8_Payload",
    "proj.PingPong.Ping_i_Bridge",
    "proj.PingPong.Ping_i_Bridge.Api",
    "proj.PingPong.Ping_i_Bridge.EntryPoints",
    "proj.PingPong.Ping_i_Impl",
    "proj.PingPong.Pong_i_Bridge",
    "proj.PingPong.Pong_i_Bridge.Api",
    "proj.PingPong.Pong_i_Bridge.EntryPoints",
    "proj.PingPong.Pong_i_Impl"
  };
  return strings[((Type) type)->type];
}