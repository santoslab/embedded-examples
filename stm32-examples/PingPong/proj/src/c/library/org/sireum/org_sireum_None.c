#include <all.h>

Z None_76463B_get_(StackFrame caller, None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  DeclNewString(t_0);
  String t_1 = (String) &t_0;
  String_string(t_1, sf, string("Invalid \'None\' operation \'get\'."));
  sfAbort(t_1->value);
  abort();
}

B None_93AA2B_isEmpty_(StackFrame caller, None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "isEmpty", 0);
  return T;
}