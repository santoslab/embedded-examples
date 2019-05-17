#include <all.h>

// MS[Z, IS[Z, (Z, Z)]]

B MS_B5E3E6__eq(MS_B5E3E6 this, MS_B5E3E6 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (IS_AA0F82__ne((IS_AA0F82) &this->value[i], (IS_AA0F82) &other->value[i])) return F;
  }
  return T;
}

void MS_B5E3E6_create(MS_B5E3E6 result, StackFrame caller, Z size, IS_AA0F82 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert(size <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct IS_AA0F82));
  }
  result->size = zize;
}

void MS_B5E3E6_zreate(MS_B5E3E6 result, StackFrame caller, Z size, IS_AA0F82 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "zreate", 0);
  sfAssert(size <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct IS_AA0F82));
  }
  result->size = zize;
}

void MS_B5E3E6__append(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_B5E3E6));
  Type_assign(&result->value[thisSize], value, sizeof(struct IS_AA0F82));
  result->size = (int8_t) (thisSize + 1);
}

void MS_B5E3E6__prepend(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct IS_AA0F82));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct IS_AA0F82));
  result->size = (int8_t) thisSize + 1;
}

void MS_B5E3E6__appendAll(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, MS_B5E3E6 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_B5E3E6));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(struct IS_AA0F82));
  result->size = (int8_t) thisSize + otherSize;
}

void MS_B5E3E6__remove(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    IS_AA0F82 o = (IS_AA0F82) &this->value[i];
    if (IS_AA0F82__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct IS_AA0F82));
  }
  result->size = k;
}

void MS_B5E3E6__removeAll(MS_B5E3E6 result, StackFrame caller, MS_B5E3E6 this, MS_B5E3E6 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    IS_AA0F82 o = (IS_AA0F82) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (IS_AA0F82__eq(o, (IS_AA0F82) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct IS_AA0F82));
  }
  result->size = k;
}

void MS_B5E3E6_cprint(MS_B5E3E6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct IS_AA0F82 *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    IS_AA0F82_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      IS_AA0F82_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_B5E3E6_string(String result, StackFrame caller, MS_B5E3E6 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct IS_AA0F82 *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    IS_AA0F82_string(result, sf, (IS_AA0F82) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      IS_AA0F82_string(result, sf, (IS_AA0F82) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}