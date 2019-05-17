#include <all.h>

// art.DispatchPropertyProtocol.Periodic

B art_DispatchPropertyProtocol_Periodic__eq(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other) {
  if (Z__ne(this->period, other->period)) return F;
  return T;
}

void art_DispatchPropertyProtocol_Periodic_string(String result, StackFrame caller, art_DispatchPropertyProtocol_Periodic this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Periodic", "string", 0);
  String_string(result, sf, string("Periodic("));
  Z_string(result, sf, this->period);
  String_string(result, sf, string(")"));
}

void art_DispatchPropertyProtocol_Periodic_cprint(art_DispatchPropertyProtocol_Periodic this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Periodic("), isOut);
  Z_cprint(this->period, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_DispatchPropertyProtocol_Periodic_apply(StackFrame caller, art_DispatchPropertyProtocol_Periodic this, Z period) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Periodic", "apply", 0);
  this->period = period;
}