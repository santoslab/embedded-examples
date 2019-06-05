#ifndef SIREUM_TYPE_H_building_control_Base_Types_Integer_16
#define SIREUM_TYPE_H_building_control_Base_Types_Integer_16
#include <misc.h>

// building_control.Base_Types.Integer_16
#include <type-org_sireum_Z16.h>

typedef struct building_control_Base_Types_Integer_16 *building_control_Base_Types_Integer_16;
struct building_control_Base_Types_Integer_16 {
  TYPE type;
  Z16 value;
};

#define DeclNewbuilding_control_Base_Types_Integer_16(x) struct building_control_Base_Types_Integer_16 x = { .type = Tbuilding_control_Base_Types_Integer_16 }


#endif