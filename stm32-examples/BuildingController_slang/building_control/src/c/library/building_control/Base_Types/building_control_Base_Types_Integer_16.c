#include <all.h>

// building_control.Base_Types.Integer_16

B building_control_Base_Types_Integer_16__eq(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other) {
  if (Z16__ne(this->value, other->value)) return F;
  return T;
}

void building_control_Base_Types_Integer_16_string(String result, StackFrame caller, building_control_Base_Types_Integer_16 this) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16", "string", 0);
  String_string(result, sf, string("Integer_16("));
  Z16_string(result, sf, this->value);
  String_string(result, sf, string(")"));
}

void building_control_Base_Types_Integer_16_cprint(building_control_Base_Types_Integer_16 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_16("), isOut);
  Z16_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_Base_Types_Integer_16_apply(StackFrame caller, building_control_Base_Types_Integer_16 this, Z16 value) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16", "apply", 0);
  this->value = value;
}