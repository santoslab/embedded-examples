#ifndef SIREUM_H_math_library_Math_Library_MathLib
#define SIREUM_H_math_library_Math_Library_MathLib
#include <types.h>

Z math_library_Math_Library_MathLib_randomZ(StackFrame caller, Z min, Z max);

Z math_library_Math_Library_MathLib_pow(StackFrame caller, Z base, Z32 power);

F32 math_library_Math_Library_MathLib_randomF32(StackFrame caller, F32 min, F32 max);

Z32 math_library_Math_Library_MathLib_round(StackFrame caller, F32 f);

#endif