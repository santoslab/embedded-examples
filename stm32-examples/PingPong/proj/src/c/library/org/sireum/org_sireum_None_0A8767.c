#include <all.h>

// None[proj.Base_Types.Integer_8]

B None_0A8767__eq(None_0A8767 this, None_0A8767 other) {
  return T;
}

void None_0A8767_string(String result, StackFrame caller, None_0A8767 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(result, sf, string("None("));
  String_string(result, sf, string(")"));
}

void None_0A8767_cprint(None_0A8767 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_0A8767_apply(StackFrame caller, None_0A8767 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_0A8767", "apply", 0);
}