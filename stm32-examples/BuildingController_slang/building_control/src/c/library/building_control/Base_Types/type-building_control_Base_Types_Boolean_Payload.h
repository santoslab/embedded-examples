#ifndef SIREUM_TYPE_H_building_control_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_building_control_Base_Types_Boolean_Payload
#include <misc.h>

// building_control.Base_Types.Boolean_Payload
#include <type-building_control_Base_Types_Boolean.h>

typedef struct building_control_Base_Types_Boolean_Payload *building_control_Base_Types_Boolean_Payload;
struct building_control_Base_Types_Boolean_Payload {
  TYPE type;
  struct building_control_Base_Types_Boolean value;
};

#define DeclNewbuilding_control_Base_Types_Boolean_Payload(x) struct building_control_Base_Types_Boolean_Payload x = { .type = Tbuilding_control_Base_Types_Boolean_Payload }


#endif