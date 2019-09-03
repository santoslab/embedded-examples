#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
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
  TMS_30A5B4 = 13, // MS[Z, Z]
  TMS_852149 = 14, // MS[Z, art.Bridge]
  TMSome_D3D128 = 15, // MSome[art.Bridge]
  TNone_93AA2B = 16, // None[(Z, art.DataContent)]
  TNone_76463B = 17, // None[Z]
  TNone_964667 = 18, // None[art.DataContent]
  TNone_39BC5F = 19, // None[art.UPort]
  TSome_E9D1E5 = 20, // Some[(Z, art.DataContent)]
  TSome_488F47 = 21, // Some[Z]
  TSome_D29615 = 22, // Some[art.DataContent]
  TSome_3E197E = 23, // Some[art.UPort]
  Tart_ArchitectureDescription = 24, // art.ArchitectureDescription
  Tart_Bridge_Ports = 25, // art.Bridge.Ports
  Tart_Connection_26CBE2 = 26, // art.Connection[building_control.Base_Types.Boolean]
  Tart_Connection_2385F4 = 27, // art.Connection[building_control.Base_Types.Integer_16]
  Tart_DispatchPropertyProtocol_Periodic = 28, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 29, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 30, // art.Empty
  Tart_EventTriggered = 31, // art.EventTriggered
  Tart_Port_69270F = 32, // art.Port[building_control.Base_Types.Boolean]
  Tart_Port_C61295 = 33, // art.Port[building_control.Base_Types.Integer_16]
  Tart_TimeTriggered = 34, // art.TimeTriggered
  Tbuilding_control_Base_Types_Boolean = 35, // building_control.Base_Types.Boolean
  Tbuilding_control_Base_Types_Boolean_Payload = 36, // building_control.Base_Types.Boolean_Payload
  Tbuilding_control_Base_Types_Integer_16 = 37, // building_control.Base_Types.Integer_16
  Tbuilding_control_Base_Types_Integer_16_Payload = 38, // building_control.Base_Types.Integer_16_Payload
  Tbuilding_control_BuildingControl_Fan_i_Bridge = 39, // building_control.BuildingControl.Fan_i_Bridge
  Tbuilding_control_BuildingControl_Fan_i_Bridge_Api = 40, // building_control.BuildingControl.Fan_i_Bridge.Api
  Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints = 41, // building_control.BuildingControl.Fan_i_Bridge.EntryPoints
  Tbuilding_control_BuildingControl_Fan_i_Impl = 42, // building_control.BuildingControl.Fan_i_Impl
  Tbuilding_control_BuildingControl_TempControl_i_Bridge = 43, // building_control.BuildingControl.TempControl_i_Bridge
  Tbuilding_control_BuildingControl_TempControl_i_Bridge_Api = 44, // building_control.BuildingControl.TempControl_i_Bridge.Api
  Tbuilding_control_BuildingControl_TempControl_i_Bridge_EntryPoints = 45, // building_control.BuildingControl.TempControl_i_Bridge.EntryPoints
  Tbuilding_control_BuildingControl_TempControl_i_Impl = 46, // building_control.BuildingControl.TempControl_i_Impl
  Tbuilding_control_BuildingControl_TempSensor_i_Bridge = 47, // building_control.BuildingControl.TempSensor_i_Bridge
  Tbuilding_control_BuildingControl_TempSensor_i_Bridge_Api = 48, // building_control.BuildingControl.TempSensor_i_Bridge.Api
  Tbuilding_control_BuildingControl_TempSensor_i_Bridge_EntryPoints = 49, // building_control.BuildingControl.TempSensor_i_Bridge.EntryPoints
  Tbuilding_control_BuildingControl_TempSensor_i_Impl = 50, // building_control.BuildingControl.TempSensor_i_Impl
  TString = 51, // org.sireum.String
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 232

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

#endif