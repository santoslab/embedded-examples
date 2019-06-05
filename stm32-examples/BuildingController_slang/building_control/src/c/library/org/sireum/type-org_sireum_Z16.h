#ifndef SIREUM_TYPE_H_org_sireum_Z16
#define SIREUM_TYPE_H_org_sireum_Z16
#include <misc.h>

typedef int16_t Z16;

#define Z16_C(n) INT16_C(n)

#define Z16_Min INT16_MIN
#define Z16_Max INT16_MAX

#define Z16_F "%" PRId16 ""

#define Z16__plus(n) n

static inline Z16 Z16__minus(Z16 n) {
  return (Z16) -n;
}

static inline Z16 Z16__add(Z16 n1, Z16 n2) {
  return (Z16) (n1 + n2);
}

static inline Z16 Z16__sub(Z16 n1, Z16 n2) {
  return (Z16) (n1 - n2);
}

static inline Z16 Z16__mul(Z16 n1, Z16 n2) {
  return (Z16) (n1 * n2);
}

static inline Z16 Z16__div(Z16 n1, Z16 n2) {
  return (Z16) (n1 / n2);
}

static inline Z16 Z16__rem(Z16 n1, Z16 n2) {
  return (Z16) (n1 % n2);
}

static inline B Z16__eq(Z16 n1, Z16 n2) {
  return (B) (n1 == n2);
}

static inline B Z16__ne(Z16 n1, Z16 n2) {
  return (B) (n1 != n2);
}

static inline B Z16__lt(Z16 n1, Z16 n2) {
  return (B) (n1 < n2);
}

static inline B Z16__le(Z16 n1, Z16 n2) {
  return (B) (n1 == n2);
}

static inline B Z16__gt(Z16 n1, Z16 n2) {
  return (B) (n1 > n2);
}

static inline B Z16__ge(Z16 n1, Z16 n2) {
  return (B) (n1 >= n2);
}


#endif