#include <all.h>

// None[(Z, art.DataContent)]

B None_93AA2B__eq(None_93AA2B this, None_93AA2B other) {
  return T;
}

void None_93AA2B_string(String result, StackFrame caller, None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(result, sf, string("None("));
  String_string(result, sf, string(")"));
}

void None_93AA2B_cprint(None_93AA2B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_93AA2B_apply(StackFrame caller, None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_93AA2B", "apply", 0);
}