#include <all.h>

// art.Connection[building_control.Base_Types.Boolean]

B art_Connection_26CBE2__eq(art_Connection_26CBE2 this, art_Connection_26CBE2 other) {
  if (art_Port_69270F__ne((art_Port_69270F) &this->from, (art_Port_69270F) &other->from)) return F;
  if (art_Port_69270F__ne((art_Port_69270F) &this->to, (art_Port_69270F) &other->to)) return F;
  return T;
}

void art_Connection_26CBE2_string(String result, StackFrame caller, art_Connection_26CBE2 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(result, sf, string("Connection("));
  String sep = string(", ");
  art_Port_69270F_string(result, sf, (art_Port_69270F) &this->from);
  String_string(result, sf, sep);
  art_Port_69270F_string(result, sf, (art_Port_69270F) &this->to);
  String_string(result, sf, string(")"));
}

void art_Connection_26CBE2_cprint(art_Connection_26CBE2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_69270F_cprint((art_Port_69270F) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_69270F_cprint((art_Port_69270F) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_26CBE2_apply(StackFrame caller, art_Connection_26CBE2 this, art_Port_69270F from, art_Port_69270F to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_26CBE2", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_69270F));
  Type_assign(&this->to, to, sizeof(struct art_Port_69270F));
}