#include <all.h>

// building_control.Base_Types.Integer_16_Payload

B building_control_Base_Types_Integer_16_Payload__eq(building_control_Base_Types_Integer_16_Payload this, building_control_Base_Types_Integer_16_Payload other) {
  if (building_control_Base_Types_Integer_16__ne((building_control_Base_Types_Integer_16) &this->value, (building_control_Base_Types_Integer_16) &other->value)) return F;
  return T;
}

void building_control_Base_Types_Integer_16_Payload_string(String result, StackFrame caller, building_control_Base_Types_Integer_16_Payload this) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16_Payload", "string", 0);
  String_string(result, sf, string("Integer_16_Payload("));
  building_control_Base_Types_Integer_16_string(result, sf, (building_control_Base_Types_Integer_16) &this->value);
  String_string(result, sf, string(")"));
}

void building_control_Base_Types_Integer_16_Payload_cprint(building_control_Base_Types_Integer_16_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_16_Payload("), isOut);
  building_control_Base_Types_Integer_16_cprint((building_control_Base_Types_Integer_16) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_Base_Types_Integer_16_Payload_apply(StackFrame caller, building_control_Base_Types_Integer_16_Payload this, building_control_Base_Types_Integer_16 value) {
  DeclNewStackFrame(caller, "Integer_16.scala", "building_control.Base_Types.Integer_16_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct building_control_Base_Types_Integer_16));
}