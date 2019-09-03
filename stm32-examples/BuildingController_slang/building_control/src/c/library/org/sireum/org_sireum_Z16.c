#include <all.h>

#include <errno.h>

Z16 Z16_range(Z16 n);

Z16 Z16__plus(Z16 n);
Z16 Z16__minus(Z16 n);
Z16 Z16__add(Z16 n1, Z16 n2);
Z16 Z16__sub(Z16 n1, Z16 n2);
Z16 Z16__mul(Z16 n1, Z16 n2);
Z16 Z16__div(Z16 n1, Z16 n2);
Z16 Z16__rem(Z16 n1, Z16 n2);
B Z16__eq(Z16 n1, Z16 n2);
B Z16__ne(Z16 n1, Z16 n2);
B Z16__lt(Z16 n1, Z16 n2);
B Z16__le(Z16 n1, Z16 n2);
B Z16__gt(Z16 n1, Z16 n2);
B Z16__ge(Z16 n1, Z16 n2);


void Z16_string_(STACK_FRAME String result, Z16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.Z16", "string", 0);
  int nSize = snprintf(NULL, 0, Z16_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z16_F, this);
  result->size = newSize;
}