#include <all.h>

// proj.Base_Types.Integer_8_Payload

B proj_Base_Types_Integer_8_Payload__eq(proj_Base_Types_Integer_8_Payload this, proj_Base_Types_Integer_8_Payload other) {
  if (proj_Base_Types_Integer_8__ne((proj_Base_Types_Integer_8) &this->value, (proj_Base_Types_Integer_8) &other->value)) return F;
  return T;
}

void proj_Base_Types_Integer_8_Payload_string(String result, StackFrame caller, proj_Base_Types_Integer_8_Payload this) {
  DeclNewStackFrame(caller, "Integer_8.scala", "proj.Base_Types.Integer_8_Payload", "string", 0);
  String_string(result, sf, string("Integer_8_Payload("));
  proj_Base_Types_Integer_8_string(result, sf, (proj_Base_Types_Integer_8) &this->value);
  String_string(result, sf, string(")"));
}

void proj_Base_Types_Integer_8_Payload_cprint(proj_Base_Types_Integer_8_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_8_Payload("), isOut);
  proj_Base_Types_Integer_8_cprint((proj_Base_Types_Integer_8) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_Base_Types_Integer_8_Payload_apply(StackFrame caller, proj_Base_Types_Integer_8_Payload this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Integer_8.scala", "proj.Base_Types.Integer_8_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct proj_Base_Types_Integer_8));
}