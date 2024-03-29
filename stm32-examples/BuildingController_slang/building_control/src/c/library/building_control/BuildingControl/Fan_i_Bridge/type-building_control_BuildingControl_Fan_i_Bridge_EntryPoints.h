#ifndef SIREUM_TYPE_H_building_control_BuildingControl_Fan_i_Bridge_EntryPoints
#define SIREUM_TYPE_H_building_control_BuildingControl_Fan_i_Bridge_EntryPoints
#include <misc.h>

// building_control.BuildingControl.Fan_i_Bridge.EntryPoints
#include <type-building_control_BuildingControl_Fan_i_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct building_control_BuildingControl_Fan_i_Bridge_EntryPoints *building_control_BuildingControl_Fan_i_Bridge_EntryPoints;
struct building_control_BuildingControl_Fan_i_Bridge_EntryPoints {
  TYPE type;
  struct building_control_BuildingControl_Fan_i_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Fan_i_BridgeId;
  Z fanCmd_Id;
};

#define DeclNewbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints(x) struct building_control_BuildingControl_Fan_i_Bridge_EntryPoints x = { .type = Tbuilding_control_BuildingControl_Fan_i_Bridge_EntryPoints }

#endif