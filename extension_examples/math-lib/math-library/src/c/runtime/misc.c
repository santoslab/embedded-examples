#include "misc.h"

void String__append(String dest, StackFrame sf, String src) {
  Z srcSize = src->size;
  Z destSize = dest->size;
  Z size = srcSize + destSize;
  sfAssert(size <= MaxString, "Insufficient maximum for String characters.");
  for (Z i = Z_C(0); i < srcSize; i++) {
    dest->value[destSize + i] = src->value[i];
  }
  dest->value[size] = '\0';
  dest->size = size;
}

void B_string(String result, StackFrame caller, B this) {
  DeclNewStackFrame(caller, "B.scala", "org.sireum.B", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this? (char) 'T' : (char) 'F';
  result->value[newSize] = '\0';
  result->size = newSize;
}

void C_string(String result, StackFrame caller, C this) {
  DeclNewStackFrame(caller, "C.scala", "org.sireum.C", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this;
  result->value[newSize] = '\0';
  result->size = newSize;
}

void Z_string(String result, StackFrame caller, Z this) {
  DeclNewStackFrame(caller, "Z.scala", "org.sireum.Z", "string", 0);
  int nSize = snprintf(NULL, 0, Z_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z_F, this);
  result->size = newSize;
}

void F32_string(String result, StackFrame caller, F32 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F32", "string", 0);
  int nSize = snprintf(NULL, 0, F32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F32_F, this);
  result->size = newSize;
}

void F64_string(String result, StackFrame caller, F64 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F64", "string", 0);
  int nSize = snprintf(NULL, 0, F64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F64_F, this);
  result->size = newSize;
}

void R_string(String result, StackFrame caller, R this) {
  DeclNewStackFrame(caller, "R.scala", "org.sireum.R", "string", 0);
  int nSize = snprintf(NULL, 0, R_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, R_F, this);
  result->size = newSize;
}

void String_string(String result, StackFrame caller, String this) {
  DeclNewStackFrame(caller, "String.scala", "org.sireum.String", "string", 0);
  String__append(result, sf, this);
}
