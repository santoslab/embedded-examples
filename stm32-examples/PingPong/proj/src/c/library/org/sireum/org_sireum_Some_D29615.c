#include <all.h>

// Some[art.DataContent]

B Some_D29615__eq(Some_D29615 this, Some_D29615 other) {
  if (art_DataContent__ne((art_DataContent) &this->value, (art_DataContent) &other->value)) return F;
  return T;
}

void Some_D29615_string(String result, StackFrame caller, Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string(result, sf, string("Some("));
  art_DataContent_string(result, sf, (art_DataContent) &this->value);
  String_string(result, sf, string(")"));
}

void Some_D29615_cprint(Some_D29615 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  art_DataContent_cprint((art_DataContent) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Some_D29615_apply(StackFrame caller, Some_D29615 this, art_DataContent value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_D29615", "apply", 0);
  Type_assign(&this->value, value, sizeof(union art_DataContent));
}