#include <all.h>

// art.Connection[proj.Base_Types.Integer_8]

B art_Connection_4C277C__eq(art_Connection_4C277C this, art_Connection_4C277C other) {
  if (art_Port_B84865__ne((art_Port_B84865) &this->from, (art_Port_B84865) &other->from)) return F;
  if (art_Port_B84865__ne((art_Port_B84865) &this->to, (art_Port_B84865) &other->to)) return F;
  return T;
}

void art_Connection_4C277C_string(String result, StackFrame caller, art_Connection_4C277C this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(result, sf, string("Connection("));
  String sep = string(", ");
  art_Port_B84865_string(result, sf, (art_Port_B84865) &this->from);
  String_string(result, sf, sep);
  art_Port_B84865_string(result, sf, (art_Port_B84865) &this->to);
  String_string(result, sf, string(")"));
}

void art_Connection_4C277C_cprint(art_Connection_4C277C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_B84865_cprint((art_Port_B84865) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_B84865_cprint((art_Port_B84865) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_4C277C_apply(StackFrame caller, art_Connection_4C277C this, art_Port_B84865 from, art_Port_B84865 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_4C277C", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_B84865));
  Type_assign(&this->to, to, sizeof(struct art_Port_B84865));
}