#include <all.h>

// art.Port[building_control.Base_Types.Boolean]

B art_Port_69270F__eq(art_Port_69270F this, art_Port_69270F other) {
  if (Z__ne(this->id, other->id)) return F;
  if (art_PortMode__ne(this->mode, other->mode)) return F;
  return T;
}

void art_Port_69270F_string(String result, StackFrame caller, art_Port_69270F this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Port", "string", 0);
  String_string(result, sf, string("Port("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  art_PortMode_string(result, sf, this->mode);
  String_string(result, sf, string(")"));
}

void art_Port_69270F_cprint(art_Port_69270F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Port("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_PortMode_cprint(this->mode, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Port_69270F_apply(StackFrame caller, art_Port_69270F this, Z id, art_PortMode mode) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Port_69270F", "apply", 0);
  this->id = id;
  this->mode = mode;
}