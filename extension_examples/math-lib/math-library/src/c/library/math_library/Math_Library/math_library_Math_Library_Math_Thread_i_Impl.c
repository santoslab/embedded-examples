#include <all.h>

// math_library.Math_Library.Math_Thread_i_Impl

B math_library_Math_Library_Math_Thread_i_Impl__eq(math_library_Math_Library_Math_Thread_i_Impl this, math_library_Math_Library_Math_Thread_i_Impl other) {
  if (math_library_Math_Library_Math_Thread_i_Bridge_Api__ne((math_library_Math_Library_Math_Thread_i_Bridge_Api) &this->api, (math_library_Math_Library_Math_Thread_i_Bridge_Api) &other->api)) return F;
  return T;
}

void math_library_Math_Library_Math_Thread_i_Impl_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Impl.scala", "math_library.Math_Library.Math_Thread_i_Impl", "string", 0);
  String_string(result, sf, string("Math_Thread_i_Impl("));
  math_library_Math_Library_Math_Thread_i_Bridge_Api_string(result, sf, (math_library_Math_Library_Math_Thread_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void math_library_Math_Library_Math_Thread_i_Impl_cprint(math_library_Math_Library_Math_Thread_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Math_Thread_i_Impl("), isOut);
  math_library_Math_Library_Math_Thread_i_Bridge_Api_cprint((math_library_Math_Library_Math_Thread_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void math_library_Math_Library_Math_Thread_i_Impl_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this, math_library_Math_Library_Math_Thread_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "Math_Thread_i_Impl.scala", "math_library.Math_Library.Math_Thread_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct math_library_Math_Library_Math_Thread_i_Bridge_Api));
}

Unit math_library_Math_Library_Math_Thread_i_Impl_timeTriggered_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Impl this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Impl.scala", "math_library.Math_Library.Math_Thread_i_Impl", "timeTriggered", 0);

  sfUpdateLoc(11);
  Z a = math_library_Math_Library_MathLib_randomZ(sf, Z_C(1), Z_C(10));

  sfUpdateLoc(12);
  Z b = math_library_Math_Library_MathLib_randomZ(sf, Z_C(1), Z_C(10));

  sfUpdateLoc(14);
  Z result = math_library_Math_Library_MathLib_pow(sf, a, conversions_Z_toZ32(sf, b));

  sfUpdateLoc(16);
  DeclNewString(t_0);
  String_string((String) &t_0, sf, string(""));
  Z_string((String) &t_0, sf, a);
  String_string((String) &t_0, sf, string(" raised to the "));
  Z_string((String) &t_0, sf, b);
  String_string((String) &t_0, sf, string(" power is "));
  Z_string((String) &t_0, sf, result);
  String_string((String) &t_0, sf, string(""));
  math_library_Math_Library_Math_Thread_i_Bridge_Api_logInfo_(sf, math_library_Math_Library_Math_Thread_i_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(18);
  F32 c = math_library_Math_Library_MathLib_randomF32(sf, 1.0F, 10.0F);

  sfUpdateLoc(20);
  DeclNewString(t_1);
  String_string((String) &t_1, sf, string(""));
  F32_string((String) &t_1, sf, c);
  String_string((String) &t_1, sf, string(" -> "));
  Z32_string((String) &t_1, sf, math_library_Math_Library_MathLib_round(sf, c));
  String_string((String) &t_1, sf, string(""));
  math_library_Math_Library_Math_Thread_i_Bridge_Api_logInfo_(sf, math_library_Math_Library_Math_Thread_i_Impl_api_(this), (String) ((String) &t_1));
}