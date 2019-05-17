#include <all.h>

// proj.Base_Types.Integer_8

B proj_Base_Types_Integer_8__eq(proj_Base_Types_Integer_8 this, proj_Base_Types_Integer_8 other) {
  if (Z8__ne(this->value, other->value)) return F;
  return T;
}

void proj_Base_Types_Integer_8_string(String result, StackFrame caller, proj_Base_Types_Integer_8 this) {
  DeclNewStackFrame(caller, "Integer_8.scala", "proj.Base_Types.Integer_8", "string", 0);
  String_string(result, sf, string("Integer_8("));
  Z8_string(result, sf, this->value);
  String_string(result, sf, string(")"));
}

void proj_Base_Types_Integer_8_cprint(proj_Base_Types_Integer_8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_8("), isOut);
  Z8_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_Base_Types_Integer_8_apply(StackFrame caller, proj_Base_Types_Integer_8 this, Z8 value) {
  DeclNewStackFrame(caller, "Integer_8.scala", "proj.Base_Types.Integer_8", "apply", 0);
  this->value = value;
}