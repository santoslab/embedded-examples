#include <all.h>

// IS[Z, String]

B IS_948B60__eq(IS_948B60 this, IS_948B60 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (String__ne((String) &this->value[i], (String) &other->value[i])) return F;
  }
  return T;
}

void IS_948B60_create(IS_948B60 result, StackFrame caller, Z size, String dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct StaticString));
  }
  result->size = zize;
}

void IS_948B60_zreate(IS_948B60 result, StackFrame caller, Z size, String dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct StaticString));
  }
  result->size = zize;
}

void IS_948B60__append(IS_948B60 result, StackFrame caller, IS_948B60 this, String value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_948B60));
  Type_assign(&result->value[thisSize], value, sizeof(struct StaticString));
  result->size = (int8_t) (thisSize + 1);
}

void IS_948B60__prepend(IS_948B60 result, StackFrame caller, IS_948B60 this, String value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct StaticString));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct StaticString));
  result->size = (int8_t) thisSize + 1;
}

void IS_948B60__appendAll(IS_948B60 result, StackFrame caller, IS_948B60 this, IS_948B60 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_948B60));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(struct StaticString));
  result->size = (int8_t) thisSize + otherSize;
}

void IS_948B60__remove(IS_948B60 result, StackFrame caller, IS_948B60 this, String value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    String o = (String) &this->value[i];
    if (String__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct StaticString));
  }
  result->size = k;
}

void IS_948B60__removeAll(IS_948B60 result, StackFrame caller, IS_948B60 this, IS_948B60 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    String o = (String) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (String__eq(o, (String) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct StaticString));
  }
  result->size = k;
}

void IS_948B60_cprint(IS_948B60 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct StaticString *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    String_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      String_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_948B60_string(String result, StackFrame caller, IS_948B60 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct StaticString *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    String_string(result, sf, (String) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      String_string(result, sf, (String) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}