#include <all.h>

// Some[proj.Base_Types.Integer_8]

B Some_AA0E8F__eq(Some_AA0E8F this, Some_AA0E8F other) {
  if (proj_Base_Types_Integer_8__ne((proj_Base_Types_Integer_8) &this->value, (proj_Base_Types_Integer_8) &other->value)) return F;
  return T;
}

void Some_AA0E8F_string(String result, StackFrame caller, Some_AA0E8F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string(result, sf, string("Some("));
  proj_Base_Types_Integer_8_string(result, sf, (proj_Base_Types_Integer_8) &this->value);
  String_string(result, sf, string(")"));
}

void Some_AA0E8F_cprint(Some_AA0E8F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  proj_Base_Types_Integer_8_cprint((proj_Base_Types_Integer_8) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Some_AA0E8F_apply(StackFrame caller, Some_AA0E8F this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_AA0E8F", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct proj_Base_Types_Integer_8));
}