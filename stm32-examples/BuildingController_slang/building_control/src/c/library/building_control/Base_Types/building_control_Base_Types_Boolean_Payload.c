#include <all.h>

// building_control.Base_Types.Boolean_Payload

B building_control_Base_Types_Boolean_Payload__eq(building_control_Base_Types_Boolean_Payload this, building_control_Base_Types_Boolean_Payload other) {
  if (building_control_Base_Types_Boolean__ne((building_control_Base_Types_Boolean) &this->value, (building_control_Base_Types_Boolean) &other->value)) return F;
  return T;
}

void building_control_Base_Types_Boolean_Payload_string(String result, StackFrame caller, building_control_Base_Types_Boolean_Payload this) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean_Payload", "string", 0);
  String_string(result, sf, string("Boolean_Payload("));
  building_control_Base_Types_Boolean_string(result, sf, (building_control_Base_Types_Boolean) &this->value);
  String_string(result, sf, string(")"));
}

void building_control_Base_Types_Boolean_Payload_cprint(building_control_Base_Types_Boolean_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean_Payload("), isOut);
  building_control_Base_Types_Boolean_cprint((building_control_Base_Types_Boolean) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_Base_Types_Boolean_Payload_apply(StackFrame caller, building_control_Base_Types_Boolean_Payload this, building_control_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "Boolean.scala", "building_control.Base_Types.Boolean_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct building_control_Base_Types_Boolean));
}