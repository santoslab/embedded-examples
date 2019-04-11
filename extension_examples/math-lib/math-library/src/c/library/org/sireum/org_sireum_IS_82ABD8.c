#include <all.h>

// IS[Z, Z]

B IS_82ABD8__eq(IS_82ABD8 this, IS_82ABD8 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Z__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

void IS_82ABD8_create(IS_82ABD8 result, StackFrame caller, Z size, Z dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void IS_82ABD8_zreate(IS_82ABD8 result, StackFrame caller, Z size, Z dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void IS_82ABD8__append(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_82ABD8));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void IS_82ABD8__prepend(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void IS_82ABD8__appendAll(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, IS_82ABD8 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(IS_82ABD8));
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
  result->size = (int8_t) (thisSize + otherSize);
}

void IS_82ABD8__remove(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Z o = this->value[i];
    if (Z__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void IS_82ABD8__removeAll(IS_82ABD8 result, StackFrame caller, IS_82ABD8 this, IS_82ABD8 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Z o = this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Z__eq(o, other->value[j])) found = T;
    if (!found) result->value[k++] = o;
  }
  result->size = k;
}

void IS_82ABD8_cprint(IS_82ABD8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    Z *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    Z_cprint(value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Z_cprint(value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_82ABD8_string(String result, StackFrame caller, IS_82ABD8 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(result, sf, string("["));
  int8_t size = this->size;
  if (size > 0) {
    Z *value = this->value;
    String space = string(" ");
    String_string(result, sf, space);
    Z_string(result, sf, value[0]);
    for (int8_t i = 1; i < size; i++) {
      String_string(result, sf, string(", "));
      Z_string(result, sf, value[i]);
    }
    String_string(result, sf, space);
  }
  String_string(result, sf, string("]"));
}