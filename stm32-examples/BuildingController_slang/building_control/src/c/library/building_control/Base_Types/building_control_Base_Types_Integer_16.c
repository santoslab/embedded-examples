#include <all.h>

// building_control.Base_Types.Integer_16

B building_control_Base_Types_Integer_16__eq(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other) {
  if (Z16__ne(this->value, other->value)) return F;
  return T;
}

B building_control_Base_Types_Integer_16__ne(building_control_Base_Types_Integer_16 this, building_control_Base_Types_Integer_16 other);

void building_control_Base_Types_Integer_16_string_(STACK_FRAME String result, building_control_Base_Types_Integer_16 this) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16", "string", 0);
  String_string_(SF result, string("Integer_16("));
  Z16_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void building_control_Base_Types_Integer_16_cprint(building_control_Base_Types_Integer_16 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_16("), isOut);
  Z16_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B building_control_Base_Types_Integer_16__is(STACK_FRAME void* this);
building_control_Base_Types_Integer_16 building_control_Base_Types_Integer_16__as(STACK_FRAME void *this);

void building_control_Base_Types_Integer_16_apply(STACK_FRAME building_control_Base_Types_Integer_16 this, Z16 value) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16", "apply", 0);
  this->value = value;
}