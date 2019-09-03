#ifndef SIREUM_TYPE_H_building_control_BuildingControl_TempSensor_i_Bridge_Api
#define SIREUM_TYPE_H_building_control_BuildingControl_TempSensor_i_Bridge_Api
#include <misc.h>

// building_control.BuildingControl.TempSensor_i_Bridge.Api

typedef struct building_control_BuildingControl_TempSensor_i_Bridge_Api *building_control_BuildingControl_TempSensor_i_Bridge_Api;
struct building_control_BuildingControl_TempSensor_i_Bridge_Api {
  TYPE type;
  Z id;
  Z currentTemp_Id;
};

#define DeclNewbuilding_control_BuildingControl_TempSensor_i_Bridge_Api(x) struct building_control_BuildingControl_TempSensor_i_Bridge_Api x = { .type = Tbuilding_control_BuildingControl_TempSensor_i_Bridge_Api }

#endif