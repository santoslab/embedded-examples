#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#include <types.h>
#include <art_ArchitectureDescription.h>
#include <art_Art.h>
#include <art_Bridge.h>
#include <art_Empty.h>
#include <art_UPort.h>
#include <math_library_ArtNix.h>
#include <math_library_IPCPorts.h>
#include <math_library_Main.h>
#include <math_library_Math_Thread_i_App.h>
#include <math_library_Process.h>
#include <art_Bridge_EntryPoints.h>
#include <art_Bridge_Ports.h>
#include <art_DataContent.h>
#include <art_DispatchPropertyProtocol.h>
#include <art_DispatchPropertyProtocol_Sporadic.h>
#include <art_PortMode.h>
#include <art_UConnection.h>
#include <math_library_Arch.h>
#include <art_DispatchPropertyProtocol_Periodic.h>
#include <math_library_Math_Library_MathLib.h>
#include <math_library_Math_Library_Math_Thread_i.h>
#include <math_library_MessageQueue.h>
#include <math_library_PlatformNix.h>
#include <math_library_Math_Library_Math_Thread_i_Bridge.h>
#include <org_sireum_IS_08117A.h>
#include <org_sireum_IS_820232.h>
#include <math_library_Math_Library_Math_Thread_i_Bridge_Api.h>
#include <math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints.h>
#include <math_library_Math_Library_Math_Thread_i_Impl.h>
#include <org_sireum_IS_82ABD8.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_MNone_2A2E1D.h>
#include <org_sireum_MOption_EA1D29.h>
#include <org_sireum_MS_2590FE.h>
#include <org_sireum_MS_7CE7BD.h>
#include <org_sireum_MS_852149.h>
#include <org_sireum_MS_94FFA9.h>
#include <org_sireum_MS_E444B2.h>
#include <org_sireum_MS_F55A18.h>
#include <org_sireum_MSome_D3D128.h>
#include <org_sireum_None.h>
#include <org_sireum_None_39BC5F.h>
#include <org_sireum_None_76463B.h>
#include <org_sireum_None_964667.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_6239DB.h>
#include <org_sireum_Option_882048.h>
#include <org_sireum_Option_8E9F45.h>
#include <org_sireum_Some.h>
#include <org_sireum_Some_3E197E.h>
#include <org_sireum_Some_488F47.h>
#include <org_sireum_Some_D29615.h>
#include <org_sireum_Tuple2_D0E3BB.h>
#include <org_sireum_Tuple2_EC3B57.h>
#include <org_sireum_Z32.h>
#include <org_sireum_conversions_Z.h>

B Type__eq(void *t1, void *t2);
void Type_cprint(void *this, B isOut);
void Type_string(String result, StackFrame caller, void* this);
void Z_apply(Option_882048 result, String s);

#endif