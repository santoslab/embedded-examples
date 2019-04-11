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
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MNone[art.Bridge]",
    "MS[Z, (Z, Z)]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, MOption[art.Bridge]]",
    "MS[Z, Option[art.DataContent]]",
    "MS[Z, Option[art.UPort]]",
    "MS[Z, art.Bridge]",
    "MSome[art.Bridge]",
    "None[Z]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "Some[Z]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "math_library.Math_Library.Math_Thread_i_Bridge",
    "math_library.Math_Library.Math_Thread_i_Bridge.Api",
    "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints",
    "math_library.Math_Library.Math_Thread_i_Impl",
    "String"
  };
  return strings[((Type) type)->type];
}