#ifndef SIREUM_TYPE_H_org_sireum_Option_56AFA0
#define SIREUM_TYPE_H_org_sireum_Option_56AFA0
#include <misc.h>

// Option[proj.Base_Types.Integer_8]

#include <type-org_sireum_None_0A8767.h>
#include <type-org_sireum_Some_AA0E8F.h>

typedef union Option_56AFA0 *Option_56AFA0;
union Option_56AFA0 {
  TYPE type;
  struct None_0A8767 None_0A8767;
  struct Some_AA0E8F Some_AA0E8F;
};

#define DeclNewOption_56AFA0(x) union Option_56AFA0 x = { 0 }

#endif