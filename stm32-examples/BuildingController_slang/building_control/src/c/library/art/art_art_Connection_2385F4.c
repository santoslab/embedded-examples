#include <all.h>

// art.Connection[building_control.Base_Types.Integer_16]

B art_Connection_2385F4__eq(art_Connection_2385F4 this, art_Connection_2385F4 other) {
  if (art_Port_C61295__ne((art_Port_C61295) &this->from, (art_Port_C61295) &other->from)) return F;
  if (art_Port_C61295__ne((art_Port_C61295) &this->to, (art_Port_C61295) &other->to)) return F;
  return T;
}

B art_Connection_2385F4__ne(art_Connection_2385F4 this, art_Connection_2385F4 other);

void art_Connection_2385F4_string_(STACK_FRAME String result, art_Connection_2385F4 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_C61295_string_(SF result, (art_Port_C61295) &this->from);
  String_string_(SF result, sep);
  art_Port_C61295_string_(SF result, (art_Port_C61295) &this->to);
  String_string_(SF result, string(")"));
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

B art_Connection_2385F4__is(STACK_FRAME void* this);
art_Connection_2385F4 art_Connection_2385F4__as(STACK_FRAME void *this);

void art_Connection_2385F4_apply(STACK_FRAME art_Connection_2385F4 this, art_Port_C61295 from, art_Port_C61295 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_2385F4", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_C61295));
  Type_assign(&this->to, to, sizeof(struct art_Port_C61295));
}