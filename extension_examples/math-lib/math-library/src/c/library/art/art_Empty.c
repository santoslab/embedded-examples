#include <all.h>

// art.Empty

B art_Empty__eq(art_Empty this, art_Empty other) {
  return T;
}

void art_Empty_string(String result, StackFrame caller, art_Empty this) {
  DeclNewStackFrame(caller, "DataContent.scala", "art.Empty", "string", 0);
  String_string(result, sf, string("Empty("));
  String_string(result, sf, string(")"));
}

void art_Empty_cprint(art_Empty this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Empty("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Empty_apply(StackFrame caller, art_Empty this) {
  DeclNewStackFrame(caller, "DataContent.scala", "art.Empty", "apply", 0);
}