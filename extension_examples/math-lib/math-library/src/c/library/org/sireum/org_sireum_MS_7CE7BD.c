#include <all.h>

// MS[Z, (Z, Z)]

B MS_7CE7BD__eq(MS_7CE7BD this, MS_7CE7BD other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_EC3B57__ne((Tuple2_EC3B57) &this->value[i], (Tuple2_EC3B57) &other->value[i])) return F;
  }
  return T;
}

void MS_7CE7BD_create(MS_7CE7BD result, StackFrame caller, Z size, Tuple2_EC3B57 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert(size <= MaxMS_7CE7BD, "Insufficient maximum for MS[Z, (Z, Z)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_EC3B57));
  }
  result->size = zize;
}

void MS_7CE7BD_zreate(MS_7CE7BD result, StackFrame caller, Z size, Tuple2_EC3B57 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "zreate", 0);
  sfAssert(size <= MaxMS_7CE7BD, "Insufficient maximum for MS[Z, (Z, Z)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_EC3B57));
  }
  result->size = zize;
}

void MS_7CE7BD__append(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_7CE7BD, "Insufficient maximum for MS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_7CE7BD));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) (thisSize + 1);
}

void MS_7CE7BD__prepend(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_7CE7BD, "Insufficient maximum for MS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_EC3B57));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) thisSize + 1;
}

void MS_7CE7BD__appendAll(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, MS_7CE7BD other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_7CE7BD, "Insufficient maximum for MS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_7CE7BD));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) thisSize + otherSize;
}

void MS_7CE7BD__remove(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_EC3B57 o = (Tuple2_EC3B57) &this->value[i];
    if (Tuple2_EC3B57__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_EC3B57));
  }
  result->size = k;
}

void MS_7CE7BD__removeAll(MS_7CE7BD result, StackFrame caller, MS_7CE7BD this, MS_7CE7BD other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_EC3B57 o = (Tuple2_EC3B57) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_EC3B57__eq(o, (Tuple2_EC3B57) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_EC3B57));
  }
  result->size = k;
}

void MS_7CE7BD_cprint(MS_7CE7BD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_EC3B57 *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    Tuple2_EC3B57_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_EC3B57_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_7CE7BD_string(String result, StackFrame caller, MS_7CE7BD this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_EC3B57 *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    Tuple2_EC3B57_string(result, sf, (Tuple2_EC3B57) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      Tuple2_EC3B57_string(result, sf, (Tuple2_EC3B57) &(value[i]));
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}