#include <all.h>

// math_library.Math_Library.Math_Thread_i_Bridge.Api

B math_library_Math_Library_Math_Thread_i_Bridge_Api__eq(math_library_Math_Library_Math_Thread_i_Bridge_Api this, math_library_Math_Library_Math_Thread_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  return T;
}

void math_library_Math_Library_Math_Thread_i_Bridge_Api_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  Z_string(result, sf, this->id);
  String_string(result, sf, string(")"));
}

void math_library_Math_Library_Math_Thread_i_Bridge_Api_cprint(math_library_Math_Library_Math_Thread_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  Z_cprint(this->id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void math_library_Math_Library_Math_Thread_i_Bridge_Api_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this, Z id) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.Api", "apply", 0);
  this->id = id;
}

Unit math_library_Math_Library_Math_Thread_i_Bridge_Api_logInfo_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(51);
  art_Art_logInfo(sf, math_library_Math_Library_Math_Thread_i_Bridge_Api_id_(this), (String) msg);
}