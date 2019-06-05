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
        library/art/type-art_art_Connection_2385F4.h
        library/art/art_art_Connection_2385F4.h
        library/art/art_art_Connection_2385F4.c
        library/art/type-art_art_Connection_26CBE2.h
        library/art/art_art_Connection_26CBE2.h
        library/art/art_art_Connection_26CBE2.c
        library/art/type-art_art_Port_69270F.h
        library/art/art_art_Port_69270F.h
        library/art/art_art_Port_69270F.c
        library/art/type-art_art_Port_C61295.h
        library/art/art_art_Port_C61295.h
        library/art/art_art_Port_C61295.c
        library/building_control/type-building_control_Arch.h
        library/building_control/building_control_Arch.h
        library/building_control/building_control_Arch.c
        library/building_control/type-building_control_ArtNix.h
        library/building_control/building_control_ArtNix.h
        library/building_control/building_control_ArtNix.c
        library/building_control/Base_Types/type-building_control_Base_Types_Boolean.h
        library/building_control/Base_Types/building_control_Base_Types_Boolean.h
        library/building_control/Base_Types/building_control_Base_Types_Boolean.c
        library/building_control/Base_Types/type-building_control_Base_Types_Boolean_Payload.h
        library/building_control/Base_Types/building_control_Base_Types_Boolean_Payload.h
        library/building_control/Base_Types/building_control_Base_Types_Boolean_Payload.c
        library/building_control/Base_Types/type-building_control_Base_Types_Integer_16.h
        library/building_control/Base_Types/building_control_Base_Types_Integer_16.h
        library/building_control/Base_Types/building_control_Base_Types_Integer_16.c
        library/building_control/Base_Types/type-building_control_Base_Types_Integer_16_Payload.h
        library/building_control/Base_Types/building_control_Base_Types_Integer_16_Payload.h
        library/building_control/Base_Types/building_control_Base_Types_Integer_16_Payload.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_FanNative.h
        library/building_control/BuildingControl/building_control_BuildingControl_FanNative.h
        library/building_control/BuildingControl/type-building_control_BuildingControl_Fan_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_Fan_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i_Bridge.c
        library/building_control/BuildingControl/Fan_i_Bridge/type-building_control_BuildingControl_Fan_i_Bridge_Api.h
        library/building_control/BuildingControl/Fan_i_Bridge/building_control_BuildingControl_Fan_i_Bridge_Api.h
        library/building_control/BuildingControl/Fan_i_Bridge/building_control_BuildingControl_Fan_i_Bridge_Api.c
        library/building_control/BuildingControl/Fan_i_Bridge/type-building_control_BuildingControl_Fan_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/Fan_i_Bridge/building_control_BuildingControl_Fan_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/Fan_i_Bridge/building_control_BuildingControl_Fan_i_Bridge_EntryPoints.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_Fan_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_Fan_i_Impl.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempControl_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempControl_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i_Bridge.c
        library/building_control/BuildingControl/TempControl_i_Bridge/type-building_control_BuildingControl_TempControl_i_Bridge_Api.h
        library/building_control/BuildingControl/TempControl_i_Bridge/building_control_BuildingControl_TempControl_i_Bridge_Api.h
        library/building_control/BuildingControl/TempControl_i_Bridge/building_control_BuildingControl_TempControl_i_Bridge_Api.c
        library/building_control/BuildingControl/TempControl_i_Bridge/type-building_control_BuildingControl_TempControl_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/TempControl_i_Bridge/building_control_BuildingControl_TempControl_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/TempControl_i_Bridge/building_control_BuildingControl_TempControl_i_Bridge_EntryPoints.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempControl_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempControl_i_Impl.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempSensorNative.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensorNative.h
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempSensor_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempSensor_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i_Bridge.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i_Bridge.c
        library/building_control/BuildingControl/TempSensor_i_Bridge/type-building_control_BuildingControl_TempSensor_i_Bridge_Api.h
        library/building_control/BuildingControl/TempSensor_i_Bridge/building_control_BuildingControl_TempSensor_i_Bridge_Api.h
        library/building_control/BuildingControl/TempSensor_i_Bridge/building_control_BuildingControl_TempSensor_i_Bridge_Api.c
        library/building_control/BuildingControl/TempSensor_i_Bridge/type-building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/TempSensor_i_Bridge/building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints.h
        library/building_control/BuildingControl/TempSensor_i_Bridge/building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints.c
        library/building_control/BuildingControl/type-building_control_BuildingControl_TempSensor_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i_Impl.h
        library/building_control/BuildingControl/building_control_BuildingControl_TempSensor_i_Impl.c
        library/building_control/type-building_control_Fan_i_App.h
        library/building_control/building_control_Fan_i_App.h
        library/building_control/building_control_Fan_i_App.c
        library/building_control/type-building_control_IPCPorts.h
        library/building_control/building_control_IPCPorts.h
        library/building_control/building_control_IPCPorts.c
        library/building_control/type-building_control_Main.h
        library/building_control/building_control_Main.h
        library/building_control/building_control_Main.c
        library/building_control/type-building_control_PlatformNix.h
        library/building_control/building_control_PlatformNix.h
        library/building_control/building_control_PlatformNix.c
        library/building_control/type-building_control_Process.h
        library/building_control/building_control_Process.h
        library/building_control/type-building_control_SharedMemory.h
        library/building_control/building_control_SharedMemory.h
        library/building_control/type-building_control_TempControl_i_App.h
        library/building_control/building_control_TempControl_i_App.h
        library/building_control/building_control_TempControl_i_App.c
        library/building_control/type-building_control_TempSensor_i_App.h
        library/building_control/building_control_TempSensor_i_App.h
        library/building_control/building_control_TempSensor_i_App.c
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
        library/org/sireum/type-org_sireum_Z16.h
        library/org/sireum/org_sireum_Z16.h
        library/org/sireum/org_sireum_Z16.c
        ext/ext.c
        ext/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-TempSensor_i_App
        PUBLIC PUBLIC app-Fan_i_App
        PUBLIC PUBLIC app-TempControl_i_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/building_control
        PUBLIC PUBLIC library/building_control/Base_Types
        PUBLIC PUBLIC library/building_control/BuildingControl
        PUBLIC PUBLIC library/building_control/BuildingControl/Fan_i_Bridge
        PUBLIC PUBLIC library/building_control/BuildingControl/TempControl_i_Bridge
        PUBLIC PUBLIC library/building_control/BuildingControl/TempSensor_i_Bridge
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext)


add_executable(TempSensor_i_App-bin app-TempSensor_i_App/TempSensor_i_App.c)

target_link_libraries(TempSensor_i_App-bin LINK_PUBLIC main)

set_target_properties(TempSensor_i_App-bin PROPERTIES OUTPUT_NAME TempSensor_i_App)


add_executable(Fan_i_App-bin app-Fan_i_App/Fan_i_App.c)

target_link_libraries(Fan_i_App-bin LINK_PUBLIC main)

set_target_properties(Fan_i_App-bin PROPERTIES OUTPUT_NAME Fan_i_App)


add_executable(TempControl_i_App-bin app-TempControl_i_App/TempControl_i_App.c)

target_link_libraries(TempControl_i_App-bin LINK_PUBLIC main)

set_target_properties(TempControl_i_App-bin PROPERTIES OUTPUT_NAME TempControl_i_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)