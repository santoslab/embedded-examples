#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#include <misc.h>
#include <type-art_ArchitectureDescription.h>
#include <type-art_Art.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_DispatchStatus.h>
#include <type-art_Empty.h>
#include <type-art_EventTriggered.h>
#include <type-art_PortMode.h>
#include <type-art_TimeTriggered.h>
#include <type-art_UConnection.h>
#include <type-art_UPort.h>
#include <type-art_art_Connection_4C277C.h>
#include <type-art_art_Port_B84865.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_AA0F82.h>
#include <type-org_sireum_MNone_2A2E1D.h>
#include <type-org_sireum_MOption_EA1D29.h>
#include <type-org_sireum_MS_2590FE.h>
#include <type-org_sireum_MS_30A5B4.h>
#include <type-org_sireum_MS_852149.h>
#include <type-org_sireum_MS_94FFA9.h>
#include <type-org_sireum_MS_B5E3E6.h>
#include <type-org_sireum_MS_E444B2.h>
#include <type-org_sireum_MS_F55A18.h>
#include <type-org_sireum_MSome_D3D128.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_76463B.h>
#include <type-org_sireum_None_93AA2B.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_02FA6D.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_E9D1E5.h>
#include <type-org_sireum_Tuple2_D0E3BB.h>
#include <type-org_sireum_Tuple2_EC3B57.h>
#include <type-org_sireum_Z8.h>
#include <type-proj_Arch.h>
#include <type-proj_ArtNix.h>
#include <type-proj_Base_Types_Integer_8.h>
#include <type-proj_Base_Types_Integer_8_Payload.h>
#include <type-proj_IPCPorts.h>
#include <type-proj_Main.h>
#include <type-proj_PingPong_PingExt.h>
#include <type-proj_PingPong_Ping_i.h>
#include <type-proj_PingPong_Ping_i_Bridge.h>
#include <type-proj_PingPong_Ping_i_Bridge_Api.h>
#include <type-proj_PingPong_Ping_i_Bridge_EntryPoints.h>
#include <type-proj_PingPong_Ping_i_Impl.h>
#include <type-proj_PingPong_PongExt.h>
#include <type-proj_PingPong_Pong_i.h>
#include <type-proj_PingPong_Pong_i_Bridge.h>
#include <type-proj_PingPong_Pong_i_Bridge_Api.h>
#include <type-proj_PingPong_Pong_i_Bridge_EntryPoints.h>
#include <type-proj_PingPong_Pong_i_Impl.h>
#include <type-proj_Ping_i_App.h>
#include <type-proj_PlatformNix.h>
#include <type-proj_Pong_i_App.h>
#include <type-proj_Process.h>
#include <type-proj_SharedMemory.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

static inline size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TTuple2_D0E3BB: return sizeof(struct Tuple2_D0E3BB); // (Z, art.DataContent)
    case TIS_AA0F82: return sizeof(struct IS_AA0F82); // IS[Z, (Z, Z)]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMNone_2A2E1D: return sizeof(struct MNone_2A2E1D); // MNone[art.Bridge]
    case TMS_B5E3E6: return sizeof(struct MS_B5E3E6); // MS[Z, IS[Z, (Z, Z)]]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_94FFA9: return sizeof(struct MS_94FFA9); // MS[Z, MOption[art.Bridge]]
    case TMS_2590FE: return sizeof(struct MS_2590FE); // MS[Z, Option[art.DataContent]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TMS_30A5B4: return sizeof(struct MS_30A5B4); // MS[Z, Z]
    case TMS_852149: return sizeof(struct MS_852149); // MS[Z, art.Bridge]
    case TMSome_D3D128: return sizeof(struct MSome_D3D128); // MSome[art.Bridge]
    case TNone_93AA2B: return sizeof(struct None_93AA2B); // None[(Z, art.DataContent)]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TSome_E9D1E5: return sizeof(struct Some_E9D1E5); // Some[(Z, art.DataContent)]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection_4C277C: return sizeof(struct art_Connection_4C277C); // art.Connection[proj.Base_Types.Integer_8]
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_B84865: return sizeof(struct art_Port_B84865); // art.Port[proj.Base_Types.Integer_8]
    case Tart_TimeTriggered: return sizeof(struct art_TimeTriggered); // art.TimeTriggered
    case TString: return sizeof(struct String); // org.sireum.String
    case Tproj_Base_Types_Integer_8: return sizeof(struct proj_Base_Types_Integer_8); // proj.Base_Types.Integer_8
    case Tproj_Base_Types_Integer_8_Payload: return sizeof(struct proj_Base_Types_Integer_8_Payload); // proj.Base_Types.Integer_8_Payload
    case Tproj_PingPong_Ping_i_Bridge: return sizeof(struct proj_PingPong_Ping_i_Bridge); // proj.PingPong.Ping_i_Bridge
    case Tproj_PingPong_Ping_i_Bridge_Api: return sizeof(struct proj_PingPong_Ping_i_Bridge_Api); // proj.PingPong.Ping_i_Bridge.Api
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: return sizeof(struct proj_PingPong_Ping_i_Bridge_EntryPoints); // proj.PingPong.Ping_i_Bridge.EntryPoints
    case Tproj_PingPong_Ping_i_Impl: return sizeof(struct proj_PingPong_Ping_i_Impl); // proj.PingPong.Ping_i_Impl
    case Tproj_PingPong_Pong_i_Bridge: return sizeof(struct proj_PingPong_Pong_i_Bridge); // proj.PingPong.Pong_i_Bridge
    case Tproj_PingPong_Pong_i_Bridge_Api: return sizeof(struct proj_PingPong_Pong_i_Bridge_Api); // proj.PingPong.Pong_i_Bridge.Api
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: return sizeof(struct proj_PingPong_Pong_i_Bridge_EntryPoints); // proj.PingPong.Pong_i_Bridge.EntryPoints
    case Tproj_PingPong_Pong_i_Impl: return sizeof(struct proj_PingPong_Pong_i_Impl); // proj.PingPong.Pong_i_Impl
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize);

#endif