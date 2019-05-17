#ifndef SIREUM_TYPE_H_org_sireum_Some_AA0E8F
#define SIREUM_TYPE_H_org_sireum_Some_AA0E8F
#include <misc.h>

// Some[proj.Base_Types.Integer_8]
#include <type-proj_Base_Types_Integer_8.h>

typedef struct Some_AA0E8F *Some_AA0E8F;
struct Some_AA0E8F {
  TYPE type;
  struct proj_Base_Types_Integer_8 value;
};

#define DeclNewSome_AA0E8F(x) struct Some_AA0E8F x = { .type = TSome_AA0E8F }


#endif