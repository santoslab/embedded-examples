#ifndef SIREUM_PRINT_H
#define SIREUM_PRINT_H

#include <memory.h>
#include <stdio.h>
#include <type-composite.h>

static inline void String_assign(String dest, String src) {
  dest->type = src->type;
  Z srcSize = src->size;
  dest->size = srcSize;
  memcpy(dest->value, src->value, srcSize + 1);
}

void String__append(String dest, StackFrame sf, String src);

#ifdef SIREUM_NO_PRINT

#define cprint(isOut, s)

#define cprintln(isOut)

#define cflush(isOut)

#define B_cprint(this, isOut)

#define C_cprint(this, isOut)

#define Z_cprint(this, isOut)

#define F32_cprint(this, isOut)

#define F64_cprint(this, isOut)

#define R_cprint(this, isOut)

#define String_cprint(this, isOut)

#else

#define cprint(isOut, s) { if (isOut) printf("%s", s); else fprintf(stderr, "%s", s); }

#define cprintln(isOut) { if (isOut) printf("\n"); else fprintf(stderr, "\n"); }

#define cflush(isOut) { if (isOut) fflush(stdout); else fflush(stderr); }

#define B_cprint(this, isOut) cprint(isOut, (this)? "T" : "F")

#define C_cprint(this, isOut) { if (isOut) printf("%c", this); else fprintf(stderr, "%c", this); }

#define Z_cprint(this, isOut) { if (isOut) printf(Z_F, this); else fprintf(stderr, Z_F, this); }

#define F32_cprint(this, isOut) { if (isOut) printf(F32_F, this); else fprintf(stderr, F32_F, this); }

#define F64_cprint(this, isOut) { if (isOut) printf(F64_F, this); else fprintf(stderr, F64_F, this); }

#define R_cprint(this, isOut) { if (isOut) printf(R_F, this); else fprintf(stderr, R_F, this); }

#define String_cprint(this, isOut) cprint(isOut, (this)->value)

#endif

void B_string(String result, StackFrame caller, B this);
void C_string(String result, StackFrame caller, C this);
void Z_string(String result, StackFrame caller, Z this);
void F32_string(String result, StackFrame caller, F32 this);
void F64_string(String result, StackFrame caller, F64 this);
void R_string(String result, StackFrame caller, R this);
void String_string(String result, StackFrame caller, String this);

#endif