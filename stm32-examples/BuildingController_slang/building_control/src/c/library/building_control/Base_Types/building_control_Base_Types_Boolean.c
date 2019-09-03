#include <all.h>

// building_control.Base_Types.Boolean

B building_control_Base_Types_Boolean__eq(building_control_Base_Types_Boolean this, building_control_Base_Types_Boolean other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

B building_control_Base_Types_Boolean__ne(building_control_Base_Types_Boolean this, building_control_Base_Types_Boolean other);

void building_control_Base_Types_Boolean_string_(STACK_FRAME String result, building_control_Base_Types_Boolean this) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean", "string", 0);
  String_string_(SF result, string("Boolean("));
  B_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void building_control_Base_Types_Boolean_cprint(building_control_Base_Types_Boolean this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B building_control_Base_Types_Boolean__is(STACK_FRAME void* this);
building_control_Base_Types_Boolean building_control_Base_Types_Boolean__as(STACK_FRAME void *this);

void building_control_Base_Types_Boolean_apply(STACK_FRAME building_control_Base_Types_Boolean this, B value) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean", "apply", 0);
  this->value = value;
}