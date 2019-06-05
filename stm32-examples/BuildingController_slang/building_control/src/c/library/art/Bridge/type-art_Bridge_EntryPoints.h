#ifndef SIREUM_TYPE_H_art_Bridge_EntryPoints
#define SIREUM_TYPE_H_art_Bridge_EntryPoints
#include <misc.h>

// art.Bridge.EntryPoints

#include <type-building_control_BuildingControl_TempControl_i_Bridge_EntryPoints.h>
#include <type-building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints.h>
#include <type-building_control_BuildingControl_Fan_i_Bridge_EntryPoints.h>

typedef union art_Bridge_EntryPoints *art_Bridge_EntryPoints;
union art_Bridge_EntryPoints {
  TYPE type;
  struct building_control_BuildingControl_TempControl_i_Bridge_EntryPoints building_control_BuildingControl_TempControl_i_Bridge_EntryPoints;
  struct building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints building_control_BuildingControl_TempSensor_i_Bridge_EntryPoints;
  struct building_control_BuildingControl_Fan_i_Bridge_EntryPoints building_control_BuildingControl_Fan_i_Bridge_EntryPoints;
};

#define DeclNewart_Bridge_EntryPoints(x) union art_Bridge_EntryPoints x = { 0 }

#endif