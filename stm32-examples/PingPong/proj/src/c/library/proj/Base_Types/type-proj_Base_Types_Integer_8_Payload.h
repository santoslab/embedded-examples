#ifndef SIREUM_TYPE_H_proj_Base_Types_Integer_8_Payload
#define SIREUM_TYPE_H_proj_Base_Types_Integer_8_Payload
#include <misc.h>

// proj.Base_Types.Integer_8_Payload
#include <type-proj_Base_Types_Integer_8.h>

typedef struct proj_Base_Types_Integer_8_Payload *proj_Base_Types_Integer_8_Payload;
struct proj_Base_Types_Integer_8_Payload {
  TYPE type;
  struct proj_Base_Types_Integer_8 value;
};

#define DeclNewproj_Base_Types_Integer_8_Payload(x) struct proj_Base_Types_Integer_8_Payload x = { .type = Tproj_Base_Types_Integer_8_Payload }


#endif