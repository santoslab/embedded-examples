#ifndef SIREUM_H_org_sireum_Z8
#define SIREUM_H_org_sireum_Z8
#include <types.h>

#ifdef SIREUM_NO_PRINT
#define Z8_cprint(this, isOut)
#else
#define Z8_cprint(this, isOut) { if (isOut) printf(Z8_F, this); else fprintf(stderr, Z8_F, this); }
#endif
void Z8_string(String result, StackFrame caller, Z8 this);

#endif