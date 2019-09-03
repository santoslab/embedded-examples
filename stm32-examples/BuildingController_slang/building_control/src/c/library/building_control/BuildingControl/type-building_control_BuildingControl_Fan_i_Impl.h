#ifndef SIREUM_TYPE_H_building_control_BuildingControl_Fan_i_Impl
#define SIREUM_TYPE_H_building_control_BuildingControl_Fan_i_Impl
#include <misc.h>

// building_control.BuildingControl.Fan_i_Impl
#include <type-building_control_BuildingControl_Fan_i_Bridge_Api.h>

typedef struct building_control_BuildingControl_Fan_i_Impl *building_control_BuildingControl_Fan_i_Impl;
struct building_control_BuildingControl_Fan_i_Impl {
  TYPE type;
  struct building_control_BuildingControl_Fan_i_Bridge_Api api;
};

#define DeclNewbuilding_control_BuildingControl_Fan_i_Impl(x) struct building_control_BuildingControl_Fan_i_Impl x = { .type = Tbuilding_control_BuildingControl_Fan_i_Impl }

#endif