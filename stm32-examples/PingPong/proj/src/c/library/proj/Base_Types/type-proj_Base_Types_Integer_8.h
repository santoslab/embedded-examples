#ifndef SIREUM_TYPE_H_proj_Base_Types_Integer_8
#define SIREUM_TYPE_H_proj_Base_Types_Integer_8
#include <misc.h>

// proj.Base_Types.Integer_8
#include <type-org_sireum_Z8.h>

typedef struct proj_Base_Types_Integer_8 *proj_Base_Types_Integer_8;
struct proj_Base_Types_Integer_8 {
  TYPE type;
  Z8 value;
};

#define DeclNewproj_Base_Types_Integer_8(x) struct proj_Base_Types_Integer_8 x = { .type = Tproj_Base_Types_Integer_8 }


#endif