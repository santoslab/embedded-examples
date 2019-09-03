#ifndef SIREUM_TYPE_H_building_control_Base_Types_Integer_16_Payload
#define SIREUM_TYPE_H_building_control_Base_Types_Integer_16_Payload
#include <misc.h>

// building_control.Base_Types.Integer_16_Payload
#include <type-building_control_Base_Types_Integer_16.h>

typedef struct building_control_Base_Types_Integer_16_Payload *building_control_Base_Types_Integer_16_Payload;
struct building_control_Base_Types_Integer_16_Payload {
  TYPE type;
  struct building_control_Base_Types_Integer_16 value;
};

#define DeclNewbuilding_control_Base_Types_Integer_16_Payload(x) struct building_control_Base_Types_Integer_16_Payload x = { .type = Tbuilding_control_Base_Types_Integer_16_Payload }

#endif