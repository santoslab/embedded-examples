#include <all.h>

// art.EventTriggered

B art_EventTriggered__eq(art_EventTriggered this, art_EventTriggered other) {
  if (IS_82ABD8__ne((IS_82ABD8) &this->portIds, (IS_82ABD8) &other->portIds)) return F;
  return T;
}

void art_EventTriggered_string(String result, StackFrame caller, art_EventTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.EventTriggered", "string", 0);
  String_string(result, sf, string("EventTriggered("));
  IS_82ABD8_string(result, sf, (IS_82ABD8) &this->portIds);
  String_string(result, sf, string(")"));
}

void art_EventTriggered_cprint(art_EventTriggered this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EventTriggered("), isOut);
  IS_82ABD8_cprint((IS_82ABD8) &this->portIds, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_EventTriggered_apply(StackFrame caller, art_EventTriggered this, IS_82ABD8 portIds) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.EventTriggered", "apply", 0);
  Type_assign(&this->portIds, portIds, sizeof(struct IS_82ABD8));
}