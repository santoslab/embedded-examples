#ifndef SIREUM_H_org_sireum_Z16
#define SIREUM_H_org_sireum_Z16
#include <types.h>

#ifdef SIREUM_NO_PRINT
#define Z16_cprint(this, isOut)
#else
#define Z16_cprint(this, isOut) { if (isOut) printf(Z16_F, this); else fprintf(stderr, Z16_F, this); }
#endif
void Z16_string(String result, StackFrame caller, Z16 this);

#endif