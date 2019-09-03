#ifndef SIREUM_TYPE_H_building_control_BuildingControl_TempControl_i_Impl
#define SIREUM_TYPE_H_building_control_BuildingControl_TempControl_i_Impl
#include <misc.h>

// building_control.BuildingControl.TempControl_i_Impl
#include <type-building_control_BuildingControl_TempControl_i_Bridge_Api.h>
#include <type-org_sireum_Z16.h>
#include <type-org_sireum_Z16.h>
#include <type-building_control_Base_Types_Boolean.h>
#include <type-building_control_Base_Types_Boolean.h>

typedef struct building_control_BuildingControl_TempControl_i_Impl *building_control_BuildingControl_TempControl_i_Impl;
struct building_control_BuildingControl_TempControl_i_Impl {
  TYPE type;
  struct building_control_Base_Types_Boolean on;
  struct building_control_Base_Types_Boolean off;
  struct building_control_BuildingControl_TempControl_i_Bridge_Api api;
  Z16 lowTemp;
  Z16 highTemp;
};

#define DeclNewbuilding_control_BuildingControl_TempControl_i_Impl(x) struct building_control_BuildingControl_TempControl_i_Impl x = { .type = Tbuilding_control_BuildingControl_TempControl_i_Impl }

#endif