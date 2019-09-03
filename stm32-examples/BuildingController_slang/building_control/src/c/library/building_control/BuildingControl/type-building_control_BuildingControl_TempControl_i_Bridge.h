#ifndef SIREUM_TYPE_H_building_control_BuildingControl_TempControl_i_Bridge
#define SIREUM_TYPE_H_building_control_BuildingControl_TempControl_i_Bridge
#include <misc.h>

// building_control.BuildingControl.TempControl_i_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_C61295.h>
#include <type-art_art_Port_69270F.h>
#include <type-art_Bridge_Ports.h>
#include <type-building_control_BuildingControl_TempControl_i_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct building_control_BuildingControl_TempControl_i_Bridge *building_control_BuildingControl_TempControl_i_Bridge;
struct building_control_BuildingControl_TempControl_i_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct art_Port_C61295 currentTemp;
  struct art_Port_69270F fanCmd;
  struct art_Bridge_Ports ports;
  struct building_control_BuildingControl_TempControl_i_Bridge_Api api;
  Z id;
};

#define DeclNewbuilding_control_BuildingControl_TempControl_i_Bridge(x) struct building_control_BuildingControl_TempControl_i_Bridge x = { .type = Tbuilding_control_BuildingControl_TempControl_i_Bridge }

#endif