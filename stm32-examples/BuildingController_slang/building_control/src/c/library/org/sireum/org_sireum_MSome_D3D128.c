#include <all.h>

// MSome[art.Bridge]

B MSome_D3D128__eq(MSome_D3D128 this, MSome_D3D128 other) {
  if (art_Bridge__ne((art_Bridge) &this->value, (art_Bridge) &other->value)) return F;
  return T;
}

B MSome_D3D128__ne(MSome_D3D128 this, MSome_D3D128 other);

void MSome_D3D128_string_(STACK_FRAME String result, MSome_D3D128 this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MSome", "string", 0);
  String_string_(SF result, string("MSome("));
  art_Bridge_string_(SF result, (art_Bridge) &this->value);
  String_string_(SF result, string(")"));
}

void MSome_D3D128_cprint(MSome_D3D128 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MSome("), isOut);
  art_Bridge_cprint((art_Bridge) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MSome_D3D128__is(STACK_FRAME void* this);
MSome_D3D128 MSome_D3D128__as(STACK_FRAME void *this);

void MSome_D3D128_apply(STACK_FRAME MSome_D3D128 this, art_Bridge value) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MSome_D3D128", "apply", 0);
  Type_assign(&this->value, value, sizeof(union art_Bridge));
}