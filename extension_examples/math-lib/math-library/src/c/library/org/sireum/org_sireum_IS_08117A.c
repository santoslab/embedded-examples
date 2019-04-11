#include <all.h>

// IS[Z, art.UConnection]

B IS_08117A__eq(IS_08117A this, IS_08117A other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UConnection__ne((art_UConnection) &this->value[i], (art_UConnection) &other->value[i])) return F;
  }
  return T;
}

void IS_08117A_create(IS_08117A result, StackFrame caller, Z size, art_UConnection dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UConnection));
  }
  result->size = zize;
}

void IS_08117A_zreate(IS_08117A result, StackFrame caller, Z size, art_UConnection dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UConnection));
  }
  result->size = zize;
}

void IS_08117A__append(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_08117A));
  Type_assign(&result->value[thisSize], value, sizeof(union art_UConnection));
  result->size = (int8_t) (thisSize + 1);
}

void IS_08117A__prepend(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_UConnection));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_UConnection));
  result->size = (int8_t) thisSize + 1;
}

void IS_08117A__appendAll(IS_08117A result, StackFrame caller, IS_08117A this, IS_08117A other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_08117A));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(union art_UConnection));
  result->size = (int8_t) thisSize + otherSize;
}

void IS_08117A__remove(IS_08117A result, StackFrame caller, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_UConnection o = (art_UConnection) &this->value[i];
    if (art_UConnection__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_08117A__removeAll(IS_08117A result, StackFrame caller, IS_08117A this, IS_08117A other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_UConnection o = (art_UConnection) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_UConnection__eq(o, (art_UConnection) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_08117A_cprint(IS_08117A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    art_UConnection_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_UConnection_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_08117A_string(String result, StackFrame caller, IS_08117A this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    art_UConnection_string(result, sf, (art_UConnection) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      art_UConnection_string(result, sf, (art_UConnection) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}