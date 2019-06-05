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
    "MS[Z, Z]",
    "MS[Z, art.Bridge]",
    "MSome[art.Bridge]",
    "None[(Z, art.DataContent)]",
    "None[Z]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "Some[(Z, art.DataContent)]",
    "Some[Z]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection[building_control.Base_Types.Boolean]",
    "art.Connection[building_control.Base_Types.Integer_16]",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.EventTriggered",
    "art.Port[building_control.Base_Types.Boolean]",
    "art.Port[building_control.Base_Types.Integer_16]",
    "art.TimeTriggered",
    "building_control.Base_Types.Boolean",
    "building_control.Base_Types.Boolean_Payload",
    "building_control.Base_Types.Integer_16",
    "building_control.Base_Types.Integer_16_Payload",
    "building_control.BuildingControl.Fan_i_Bridge",
    "building_control.BuildingControl.Fan_i_Bridge.Api",
    "building_control.BuildingControl.Fan_i_Bridge.EntryPoints",
    "building_control.BuildingControl.Fan_i_Impl",
    "building_control.BuildingControl.TempControl_i_Bridge",
    "building_control.BuildingControl.TempControl_i_Bridge.Api",
    "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints",
    "building_control.BuildingControl.TempControl_i_Impl",
    "building_control.BuildingControl.TempSensor_i_Bridge",
    "building_control.BuildingControl.TempSensor_i_Bridge.Api",
    "building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints",
    "building_control.BuildingControl.TempSensor_i_Impl",
    "String"
  };
  return strings[((Type) type)->type];
}