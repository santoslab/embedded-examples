#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge
#include <misc.h>

// art.Bridge

#include <type-building_control_BuildingControl_TempControl_i_Bridge.h>
#include <type-building_control_BuildingControl_TempSensor_i_Bridge.h>
#include <type-building_control_BuildingControl_Fan_i_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct building_control_BuildingControl_TempControl_i_Bridge building_control_BuildingControl_TempControl_i_Bridge;
  struct building_control_BuildingControl_TempSensor_i_Bridge building_control_BuildingControl_TempSensor_i_Bridge;
  struct building_control_BuildingControl_Fan_i_Bridge building_control_BuildingControl_Fan_i_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#endif