#include <all.h>

// building_control.Base_Types.Boolean

B building_control_Base_Types_Boolean__eq(building_control_Base_Types_Boolean this, building_control_Base_Types_Boolean other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

void building_control_Base_Types_Boolean_string(String result, StackFrame caller, building_control_Base_Types_Boolean this) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean", "string", 0);
  String_string(result, sf, string("Boolean("));
  B_string(result, sf, this->value);
  String_string(result, sf, string(")"));
}

void building_control_Base_Types_Boolean_cprint(building_control_Base_Types_Boolean this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_Base_Types_Boolean_apply(StackFrame caller, building_control_Base_Types_Boolean this, B value) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean", "apply", 0);
  this->value = value;
}