#include <all.h>

// art.TimeTriggered

B art_TimeTriggered__eq(art_TimeTriggered this, art_TimeTriggered other) {
  return T;
}

void art_TimeTriggered_string(String result, StackFrame caller, art_TimeTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.TimeTriggered", "string", 0);
  String_string(result, sf, string("TimeTriggered("));
  String_string(result, sf, string(")"));
}

void art_TimeTriggered_cprint(art_TimeTriggered this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TimeTriggered("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_TimeTriggered_apply(StackFrame caller, art_TimeTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.TimeTriggered", "apply", 0);
}