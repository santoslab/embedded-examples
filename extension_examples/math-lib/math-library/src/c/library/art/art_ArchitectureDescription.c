#include <all.h>

// art.ArchitectureDescription

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  if (MS_852149__ne((MS_852149) &this->components, (MS_852149) &other->components)) return F;
  if (IS_08117A__ne((IS_08117A) &this->connections, (IS_08117A) &other->connections)) return F;
  return T;
}

void art_ArchitectureDescription_string(String result, StackFrame caller, art_ArchitectureDescription this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "string", 0);
  String_string(result, sf, string("ArchitectureDescription("));
  String sep = string(", ");
  MS_852149_string(result, sf, (MS_852149) &this->components);
  String_string(result, sf, sep);
  IS_08117A_string(result, sf, (IS_08117A) &this->connections);
  String_string(result, sf, string(")"));
}

void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ArchitectureDescription("), isOut);
  String sep = string(", ");
  MS_852149_cprint((MS_852149) &this->components, isOut);
  String_cprint(sep, isOut);
  IS_08117A_cprint((IS_08117A) &this->connections, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_ArchitectureDescription_apply(StackFrame caller, art_ArchitectureDescription this, MS_852149 components, IS_08117A connections) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "apply", 0);
  Type_assign(&this->components, components, sizeof(struct MS_852149));
  Type_assign(&this->connections, connections, sizeof(struct IS_08117A));
}