#ifndef SIREUM_TYPE_H_building_control_Base_Types_Boolean
#define SIREUM_TYPE_H_building_control_Base_Types_Boolean
#include <misc.h>

// building_control.Base_Types.Boolean

typedef struct building_control_Base_Types_Boolean *building_control_Base_Types_Boolean;
struct building_control_Base_Types_Boolean {
  TYPE type;
  B value;
};

#define DeclNewbuilding_control_Base_Types_Boolean(x) struct building_control_Base_Types_Boolean x = { .type = Tbuilding_control_Base_Types_Boolean }

#endif