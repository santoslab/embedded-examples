#include <all.h>

// art.Bridge.Ports

B art_Bridge_Ports__eq(art_Bridge_Ports this, art_Bridge_Ports other) {
  if (IS_820232__ne((IS_820232) &this->all, (IS_820232) &other->all)) return F;
  if (IS_820232__ne((IS_820232) &this->dataIns, (IS_820232) &other->dataIns)) return F;
  if (IS_820232__ne((IS_820232) &this->dataOuts, (IS_820232) &other->dataOuts)) return F;
  if (IS_820232__ne((IS_820232) &this->eventIns, (IS_820232) &other->eventIns)) return F;
  if (IS_820232__ne((IS_820232) &this->eventOuts, (IS_820232) &other->eventOuts)) return F;
  return T;
}

void art_Bridge_Ports_string(String result, StackFrame caller, art_Bridge_Ports this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Bridge.Ports", "string", 0);
  String_string(result, sf, string("Ports("));
  String sep = string(", ");
  IS_820232_string(result, sf, (IS_820232) &this->all);
  String_string(result, sf, sep);
  IS_820232_string(result, sf, (IS_820232) &this->dataIns);
  String_string(result, sf, sep);
  IS_820232_string(result, sf, (IS_820232) &this->dataOuts);
  String_string(result, sf, sep);
  IS_820232_string(result, sf, (IS_820232) &this->eventIns);
  String_string(result, sf, sep);
  IS_820232_string(result, sf, (IS_820232) &this->eventOuts);
  String_string(result, sf, string(")"));
}

void art_Bridge_Ports_cprint(art_Bridge_Ports this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Ports("), isOut);
  String sep = string(", ");
  IS_820232_cprint((IS_820232) &this->all, isOut);
  String_cprint(sep, isOut);
  IS_820232_cprint((IS_820232) &this->dataIns, isOut);
  String_cprint(sep, isOut);
  IS_820232_cprint((IS_820232) &this->dataOuts, isOut);
  String_cprint(sep, isOut);
  IS_820232_cprint((IS_820232) &this->eventIns, isOut);
  String_cprint(sep, isOut);
  IS_820232_cprint((IS_820232) &this->eventOuts, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Bridge_Ports_apply(StackFrame caller, art_Bridge_Ports this, IS_820232 all, IS_820232 dataIns, IS_820232 dataOuts, IS_820232 eventIns, IS_820232 eventOuts) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Bridge.Ports", "apply", 0);
  Type_assign(&this->all, all, sizeof(struct IS_820232));
  Type_assign(&this->dataIns, dataIns, sizeof(struct IS_820232));
  Type_assign(&this->dataOuts, dataOuts, sizeof(struct IS_820232));
  Type_assign(&this->eventIns, eventIns, sizeof(struct IS_820232));
  Type_assign(&this->eventOuts, eventOuts, sizeof(struct IS_820232));
}