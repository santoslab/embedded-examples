#include <math.h>
#include <all.h>
#include <assert.h>

Z math_library_Math_Library_MathLib_randomZ(StackFrame caller, Z low, Z high){
  Z ret = low + (rand() % (high - low + 1));
  return ret;
}

Z math_library_Math_Library_MathLib_pow(StackFrame caller, Z base, Z32 power){
  Z ret = (Z) (pow(base, power) + 0.5);
  return ret;
}

F32 math_library_Math_Library_MathLib_randomF32(StackFrame caller, F32 min, F32 max){
    assert(max > min);
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;
    return (random * range) + min;
}

Z32 math_library_Math_Library_MathLib_round(StackFrame caller, F32 f){
    return round(f);
}
