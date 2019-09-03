#include <all.h>

// art.Port[building_control.Base_Types.Integer_16]

B art_Port_C61295__eq(art_Port_C61295 this, art_Port_C61295 other) {
  if (Z__ne(this->id, other->id)) return F;
  if (art_PortMode__ne(this->mode, other->mode)) return F;
  return T;
}

B art_Port_C61295__ne(art_Port_C61295 this, art_Port_C61295 other);

void art_Port_C61295_string_(STACK_FRAME String result, art_Port_C61295 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Port", "string", 0);
  String_string_(SF result, string("Port("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_PortMode_string_(SF result, this->mode);
  String_string_(SF result, string(")"));
}

void art_Port_C61295_cprint(art_Port_C61295 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Port("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_PortMode_cprint(this->mode, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Port_C61295__is(STACK_FRAME void* this);
art_Port_C61295 art_Port_C61295__as(STACK_FRAME void *this);

void art_Port_C61295_apply(STACK_FRAME art_Port_C61295 this, Z id, art_PortMode mode) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Port_C61295", "apply", 0);
  this->id = id;
  this->mode = mode;
}