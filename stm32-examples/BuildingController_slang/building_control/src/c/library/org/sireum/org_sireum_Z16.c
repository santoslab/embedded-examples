#include <all.h>

#include <errno.h>

void Z16_string(String result, StackFrame caller, Z16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.Z16", "string", 0);
  int nSize = snprintf(NULL, 0, Z16_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z16_F, this);
  result->size = newSize;
}