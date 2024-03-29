#include <all.h>

// MS[Z, MOption[art.Bridge]]

B MS_94FFA9__eq(MS_94FFA9 this, MS_94FFA9 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (MOption_EA1D29__ne((MOption_EA1D29) &this->value[i], (MOption_EA1D29) &other->value[i])) return F;
  }
  return T;
}

void MS_94FFA9_create(MS_94FFA9 result, StackFrame caller, Z size, MOption_EA1D29 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert(size <= MaxMS_94FFA9, "Insufficient maximum for MS[Z, MOption[art.Bridge]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union MOption_EA1D29));
  }
  result->size = zize;
}

void MS_94FFA9_zreate(MS_94FFA9 result, StackFrame caller, Z size, MOption_EA1D29 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "zreate", 0);
  sfAssert(size <= MaxMS_94FFA9, "Insufficient maximum for MS[Z, MOption[art.Bridge]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union MOption_EA1D29));
  }
  result->size = zize;
}

void MS_94FFA9__append(MS_94FFA9 result, StackFrame caller, MS_94FFA9 this, MOption_EA1D29 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_94FFA9, "Insufficient maximum for MS[Z, MOption[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_94FFA9));
  Type_assign(&result->value[thisSize], value, sizeof(union MOption_EA1D29));
  result->size = (int8_t) (thisSize + 1);
}

void MS_94FFA9__prepend(MS_94FFA9 result, StackFrame caller, MS_94FFA9 this, MOption_EA1D29 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_94FFA9, "Insufficient maximum for MS[Z, MOption[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union MOption_EA1D29));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union MOption_EA1D29));
  result->size = (int8_t) thisSize + 1;
}

void MS_94FFA9__appendAll(MS_94FFA9 result, StackFrame caller, MS_94FFA9 this, MS_94FFA9 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_94FFA9, "Insufficient maximum for MS[Z, MOption[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_94FFA9));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(union MOption_EA1D29));
  result->size = (int8_t) thisSize + otherSize;
}

void MS_94FFA9__remove(MS_94FFA9 result, StackFrame caller, MS_94FFA9 this, MOption_EA1D29 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    MOption_EA1D29 o = (MOption_EA1D29) &this->value[i];
    if (MOption_EA1D29__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union MOption_EA1D29));
  }
  result->size = k;
}

void MS_94FFA9__removeAll(MS_94FFA9 result, StackFrame caller, MS_94FFA9 this, MS_94FFA9 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    MOption_EA1D29 o = (MOption_EA1D29) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (MOption_EA1D29__eq(o, (MOption_EA1D29) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union MOption_EA1D29));
  }
  result->size = k;
}

void MS_94FFA9_cprint(MS_94FFA9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union MOption_EA1D29 *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    MOption_EA1D29_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      MOption_EA1D29_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_94FFA9_string(String result, StackFrame caller, MS_94FFA9 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union MOption_EA1D29 *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    MOption_EA1D29_string(result, sf, (MOption_EA1D29) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      MOption_EA1D29_string(result, sf, (MOption_EA1D29) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}