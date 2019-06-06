#include <all.h>

// MS[Z, Option[art.DataContent]]

B MS_2590FE__eq(MS_2590FE this, MS_2590FE other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Option_8E9F45__ne((Option_8E9F45) &this->value[i], (Option_8E9F45) &other->value[i])) return F;
  }
  return T;
}

void MS_2590FE_create(MS_2590FE result, StackFrame caller, Z size, Option_8E9F45 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert(size <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union Option_8E9F45));
  }
  result->size = zize;
}

void MS_2590FE_zreate(MS_2590FE result, StackFrame caller, Z size, Option_8E9F45 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "zreate", 0);
  sfAssert(size <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union Option_8E9F45));
  }
  result->size = zize;
}

void MS_2590FE__append(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_2590FE));
  Type_assign(&result->value[thisSize], value, sizeof(union Option_8E9F45));
  result->size = (int8_t) (thisSize + 1);
}

void MS_2590FE__prepend(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union Option_8E9F45));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union Option_8E9F45));
  result->size = (int8_t) thisSize + 1;
}

void MS_2590FE__appendAll(MS_2590FE result, StackFrame caller, MS_2590FE this, MS_2590FE other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_2590FE));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(union Option_8E9F45));
  result->size = (int8_t) thisSize + otherSize;
}

void MS_2590FE__remove(MS_2590FE result, StackFrame caller, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Option_8E9F45 o = (Option_8E9F45) &this->value[i];
    if (Option_8E9F45__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union Option_8E9F45));
  }
  result->size = k;
}

void MS_2590FE__removeAll(MS_2590FE result, StackFrame caller, MS_2590FE this, MS_2590FE other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Option_8E9F45 o = (Option_8E9F45) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Option_8E9F45__eq(o, (Option_8E9F45) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union Option_8E9F45));
  }
  result->size = k;
}

void MS_2590FE_cprint(MS_2590FE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union Option_8E9F45 *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    Option_8E9F45_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Option_8E9F45_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_2590FE_string(String result, StackFrame caller, MS_2590FE this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union Option_8E9F45 *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    Option_8E9F45_string(result, sf, (Option_8E9F45) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      Option_8E9F45_string(result, sf, (Option_8E9F45) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}