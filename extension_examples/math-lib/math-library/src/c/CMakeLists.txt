cmake_minimum_required(VERSION 3.6.2)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

add_compile_options("$<$<CONFIG:Release>:-O2>")

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(NO_LOC
  "Build the program without location update."
  OFF)

if(NO_LOC)
  add_definitions(-DSIREUM_NO_LOC)
endif(NO_LOC)

add_library(main STATIC
        runtime/stackframe.c
        runtime/stackframe.h
        runtime/misc.h
        runtime/misc.c
        runtime/type.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/math_library/type-math_library_ArtNix.h
        library/math_library/math_library_ArtNix.h
        library/math_library/math_library_ArtNix.c
        library/math_library/type-math_library_IPCPorts.h
        library/math_library/math_library_IPCPorts.h
        library/math_library/math_library_IPCPorts.c
        library/math_library/type-math_library_Main.h
        library/math_library/math_library_Main.h
        library/math_library/math_library_Main.c
        library/math_library/type-math_library_Math_Thread_i_App.h
        library/math_library/math_library_Math_Thread_i_App.h
        library/math_library/math_library_Math_Thread_i_App.c
        library/math_library/type-math_library_Process.h
        library/math_library/math_library_Process.h
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_PortMode.h
        library/art/art_PortMode.h
        library/art/art_PortMode.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/math_library/type-math_library_Arch.h
        library/math_library/math_library_Arch.h
        library/math_library/math_library_Arch.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/math_library/Math_Library/type-math_library_Math_Library_MathLib.h
        library/math_library/Math_Library/math_library_Math_Library_MathLib.h
        library/math_library/Math_Library/type-math_library_Math_Library_Math_Thread_i.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i.c
        library/math_library/type-math_library_MessageQueue.h
        library/math_library/math_library_MessageQueue.h
        library/math_library/type-math_library_PlatformNix.h
        library/math_library/math_library_PlatformNix.h
        library/math_library/math_library_PlatformNix.c
        library/math_library/Math_Library/type-math_library_Math_Library_Math_Thread_i_Bridge.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i_Bridge.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i_Bridge.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/math_library/Math_Library/Math_Thread_i_Bridge/type-math_library_Math_Library_Math_Thread_i_Bridge_Api.h
        library/math_library/Math_Library/Math_Thread_i_Bridge/math_library_Math_Library_Math_Thread_i_Bridge_Api.h
        library/math_library/Math_Library/Math_Thread_i_Bridge/math_library_Math_Library_Math_Thread_i_Bridge_Api.c
        library/math_library/Math_Library/Math_Thread_i_Bridge/type-math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints.h
        library/math_library/Math_Library/Math_Thread_i_Bridge/math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints.h
        library/math_library/Math_Library/Math_Thread_i_Bridge/math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints.c
        library/math_library/Math_Library/type-math_library_Math_Library_Math_Thread_i_Impl.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i_Impl.h
        library/math_library/Math_Library/math_library_Math_Library_Math_Thread_i_Impl.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.c
        library/org/sireum/type-org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_7CE7BD.h
        library/org/sireum/org_sireum_MS_7CE7BD.h
        library/org/sireum/org_sireum_MS_7CE7BD.c
        library/org/sireum/type-org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.c
        library/org/sireum/type-org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_Z32.h
        library/org/sireum/org_sireum_Z32.h
        library/org/sireum/org_sireum_Z32.c
        library/org/sireum/conversions/type-org_sireum_conversions_Z.h
        library/org/sireum/conversions/org_sireum_conversions_Z.h
        ext/ext.c
        ext/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-Math_Thread_i_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/math_library
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/math_library/Math_Library
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/math_library/Math_Library/Math_Thread_i_Bridge
        PUBLIC PUBLIC library/org/sireum/conversions
        PUBLIC PUBLIC ext)


add_executable(Math_Thread_i_App-bin app-Math_Thread_i_App/Math_Thread_i_App.c)

target_link_libraries(Math_Thread_i_App-bin LINK_PUBLIC main)

set_target_properties(Math_Thread_i_App-bin PROPERTIES OUTPUT_NAME Math_Thread_i_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)