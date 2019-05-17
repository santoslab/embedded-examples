#include <all.h>

// art.Port[proj.Base_Types.Integer_8]

B art_Port_B84865__eq(art_Port_B84865 this, art_Port_B84865 other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_PortMode__ne(this->mode, other->mode)) return F;
  return T;
}

void art_Port_B84865_string(String result, StackFrame caller, art_Port_B84865 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Port", "string", 0);
  String_string(result, sf, string("Port("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  String_string(result, sf, (String) &this->name);
  String_string(result, sf, sep);
  art_PortMode_string(result, sf, this->mode);
  String_string(result, sf, string(")"));
}

void art_Port_B84865_cprint(art_Port_B84865 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Port("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_PortMode_cprint(this->mode, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Port_B84865_apply(StackFrame caller, art_Port_B84865 this, Z id, String name, art_PortMode mode) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Port_B84865", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  this->mode = mode;
}