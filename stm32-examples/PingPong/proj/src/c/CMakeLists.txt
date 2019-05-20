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
        runtime/type.h
        runtime/misc.c
        runtime/stackframe.h
        runtime/misc.h
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
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_DispatchStatus.h
        library/art/art_DispatchStatus.h
        library/art/art_DispatchStatus.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/type-art_EventTriggered.h
        library/art/art_EventTriggered.h
        library/art/art_EventTriggered.c
        library/art/type-art_PortMode.h
        library/art/art_PortMode.h
        library/art/art_PortMode.c
        library/art/type-art_TimeTriggered.h
        library/art/art_TimeTriggered.h
        library/art/art_TimeTriggered.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Connection_4C277C.h
        library/art/art_art_Connection_4C277C.h
        library/art/art_art_Connection_4C277C.c
        library/art/type-art_art_Port_B84865.h
        library/art/art_art_Port_B84865.h
        library/art/art_art_Port_B84865.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.c
        library/org/sireum/type-org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.c
        library/org/sireum/type-org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.c
        library/org/sireum/type-org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.c
        library/org/sireum/type-org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.c
        library/org/sireum/type-org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.c
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
        library/org/sireum/type-org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.c
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
        library/org/sireum/type-org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.c
        library/org/sireum/type-org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_Z8.h
        library/org/sireum/org_sireum_Z8.h
        library/org/sireum/org_sireum_Z8.c
        library/proj/type-proj_Arch.h
        library/proj/proj_Arch.h
        library/proj/proj_Arch.c
        library/proj/type-proj_ArtNix.h
        library/proj/proj_ArtNix.h
        library/proj/proj_ArtNix.c
        library/proj/Base_Types/type-proj_Base_Types_Integer_8.h
        library/proj/Base_Types/proj_Base_Types_Integer_8.h
        library/proj/Base_Types/proj_Base_Types_Integer_8.c
        library/proj/Base_Types/type-proj_Base_Types_Integer_8_Payload.h
        library/proj/Base_Types/proj_Base_Types_Integer_8_Payload.h
        library/proj/Base_Types/proj_Base_Types_Integer_8_Payload.c
        library/proj/type-proj_IPCPorts.h
        library/proj/proj_IPCPorts.h
        library/proj/proj_IPCPorts.c
        library/proj/type-proj_Main.h
        library/proj/proj_Main.h
        library/proj/proj_Main.c
        library/proj/PingPong/type-proj_PingPong_PingExt.h
        library/proj/PingPong/proj_PingPong_PingExt.h
        library/proj/PingPong/type-proj_PingPong_Ping_i.h
        library/proj/PingPong/proj_PingPong_Ping_i.h
        library/proj/PingPong/proj_PingPong_Ping_i.c
        library/proj/PingPong/type-proj_PingPong_Ping_i_Bridge.h
        library/proj/PingPong/proj_PingPong_Ping_i_Bridge.h
        library/proj/PingPong/proj_PingPong_Ping_i_Bridge.c
        library/proj/PingPong/Ping_i_Bridge/type-proj_PingPong_Ping_i_Bridge_Api.h
        library/proj/PingPong/Ping_i_Bridge/proj_PingPong_Ping_i_Bridge_Api.h
        library/proj/PingPong/Ping_i_Bridge/proj_PingPong_Ping_i_Bridge_Api.c
        library/proj/PingPong/Ping_i_Bridge/type-proj_PingPong_Ping_i_Bridge_EntryPoints.h
        library/proj/PingPong/Ping_i_Bridge/proj_PingPong_Ping_i_Bridge_EntryPoints.h
        library/proj/PingPong/Ping_i_Bridge/proj_PingPong_Ping_i_Bridge_EntryPoints.c
        library/proj/PingPong/type-proj_PingPong_Ping_i_Impl.h
        library/proj/PingPong/proj_PingPong_Ping_i_Impl.h
        library/proj/PingPong/proj_PingPong_Ping_i_Impl.c
        library/proj/PingPong/type-proj_PingPong_PongExt.h
        library/proj/PingPong/proj_PingPong_PongExt.h
        library/proj/PingPong/type-proj_PingPong_Pong_i.h
        library/proj/PingPong/proj_PingPong_Pong_i.h
        library/proj/PingPong/proj_PingPong_Pong_i.c
        library/proj/PingPong/type-proj_PingPong_Pong_i_Bridge.h
        library/proj/PingPong/proj_PingPong_Pong_i_Bridge.h
        library/proj/PingPong/proj_PingPong_Pong_i_Bridge.c
        library/proj/PingPong/Pong_i_Bridge/type-proj_PingPong_Pong_i_Bridge_Api.h
        library/proj/PingPong/Pong_i_Bridge/proj_PingPong_Pong_i_Bridge_Api.h
        library/proj/PingPong/Pong_i_Bridge/proj_PingPong_Pong_i_Bridge_Api.c
        library/proj/PingPong/Pong_i_Bridge/type-proj_PingPong_Pong_i_Bridge_EntryPoints.h
        library/proj/PingPong/Pong_i_Bridge/proj_PingPong_Pong_i_Bridge_EntryPoints.h
        library/proj/PingPong/Pong_i_Bridge/proj_PingPong_Pong_i_Bridge_EntryPoints.c
        library/proj/PingPong/type-proj_PingPong_Pong_i_Impl.h
        library/proj/PingPong/proj_PingPong_Pong_i_Impl.h
        library/proj/PingPong/proj_PingPong_Pong_i_Impl.c
        library/proj/type-proj_Ping_i_App.h
        library/proj/proj_Ping_i_App.h
        library/proj/proj_Ping_i_App.c
        library/proj/type-proj_PlatformNix.h
        library/proj/proj_PlatformNix.h
        library/proj/proj_PlatformNix.c
        library/proj/type-proj_Pong_i_App.h
        library/proj/proj_Pong_i_App.h
        library/proj/proj_Pong_i_App.c
        library/proj/type-proj_Process.h
        library/proj/proj_Process.h
        library/proj/type-proj_SharedMemory.h
        library/proj/proj_SharedMemory.h
        ext/ext.c
        ext/ext.h
        ext/ipc.c
        ext/ipc.h)

target_include_directories(main
        PUBLIC PUBLIC app-Ping_i_App
        PUBLIC PUBLIC app-Pong_i_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/proj
        PUBLIC PUBLIC library/proj/Base_Types
        PUBLIC PUBLIC library/proj/PingPong
        PUBLIC PUBLIC library/proj/PingPong/Ping_i_Bridge
        PUBLIC PUBLIC library/proj/PingPong/Pong_i_Bridge
        PUBLIC PUBLIC ext)


add_executable(Ping_i_App-bin app-Ping_i_App/Ping_i_App.c)

target_link_libraries(Ping_i_App-bin LINK_PUBLIC main)

set_target_properties(Ping_i_App-bin PROPERTIES OUTPUT_NAME Ping_i_App)


add_executable(Pong_i_App-bin app-Pong_i_App/Pong_i_App.c)

target_link_libraries(Pong_i_App-bin LINK_PUBLIC main)

set_target_properties(Pong_i_App-bin PROPERTIES OUTPUT_NAME Pong_i_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)