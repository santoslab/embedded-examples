#include <all.h>

// IS[Z, art.UPort]

B IS_820232__eq(IS_820232 this, IS_820232 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UPort__ne((art_UPort) &this->value[i], (art_UPort) &other->value[i])) return F;
  }
  return T;
}

void IS_820232_create(IS_820232 result, StackFrame caller, Z size, art_UPort dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UPort));
  }
  result->size = zize;
}

void IS_820232_zreate(IS_820232 result, StackFrame caller, Z size, art_UPort dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UPort));
  }
  result->size = zize;
}

void IS_820232__append(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_820232));
  Type_assign(&result->value[thisSize], value, sizeof(union art_UPort));
  result->size = (int8_t) (thisSize + 1);
}

void IS_820232__prepend(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_UPort));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_UPort));
  result->size = (int8_t) thisSize + 1;
}

void IS_820232__appendAll(IS_820232 result, StackFrame caller, IS_820232 this, IS_820232 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_820232));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(union art_UPort));
  result->size = (int8_t) thisSize + otherSize;
}

void IS_820232__remove(IS_820232 result, StackFrame caller, IS_820232 this, art_UPort value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_UPort o = (art_UPort) &this->value[i];
    if (art_UPort__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_UPort));
  }
  result->size = k;
}

void IS_820232__removeAll(IS_820232 result, StackFrame caller, IS_820232 this, IS_820232 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_UPort o = (art_UPort) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_UPort__eq(o, (art_UPort) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_UPort));
  }
  result->size = k;
}

void IS_820232_cprint(IS_820232 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_UPort *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    art_UPort_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_UPort_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_820232_string(String result, StackFrame caller, IS_820232 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_UPort *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    art_UPort_string(result, sf, (art_UPort) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      art_UPort_string(result, sf, (art_UPort) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}