#include <all.h>

// art.Connection[building_control.Base_Types.Integer_16]

B art_Connection_2385F4__eq(art_Connection_2385F4 this, art_Connection_2385F4 other) {
  if (art_Port_C61295__ne((art_Port_C61295) &this->from, (art_Port_C61295) &other->from)) return F;
  if (art_Port_C61295__ne((art_Port_C61295) &this->to, (art_Port_C61295) &other->to)) return F;
  return T;
}

void art_Connection_2385F4_string(String result, StackFrame caller, art_Connection_2385F4 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(result, sf, string("Connection("));
  String sep = string(", ");
  art_Port_C61295_string(result, sf, (art_Port_C61295) &this->from);
  String_string(result, sf, sep);
  art_Port_C61295_string(result, sf, (art_Port_C61295) &this->to);
  String_string(result, sf, string(")"));
}

void art_Connection_2385F4_cprint(art_Connection_2385F4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_C61295_cprint((art_Port_C61295) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_C61295_cprint((art_Port_C61295) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_2385F4_apply(StackFrame caller, art_Connection_2385F4 this, art_Port_C61295 from, art_Port_C61295 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_2385F4", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_C61295));
  Type_assign(&this->to, to, sizeof(struct art_Port_C61295));
}