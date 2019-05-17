#include <all.h>

// None[Z]

B None_76463B__eq(None_76463B this, None_76463B other) {
  return T;
}

void None_76463B_string(String result, StackFrame caller, None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(result, sf, string("None("));
  String_string(result, sf, string(")"));
}

void None_76463B_cprint(None_76463B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_76463B_apply(StackFrame caller, None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_76463B", "apply", 0);
}