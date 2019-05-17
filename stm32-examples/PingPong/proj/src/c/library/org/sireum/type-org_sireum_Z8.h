#ifndef SIREUM_TYPE_H_org_sireum_Z8
#define SIREUM_TYPE_H_org_sireum_Z8
#include <misc.h>

typedef int16_t Z8;

#define Z8_C(n) INT16_C(n)

#define Z8_Min INT16_MIN
#define Z8_Max INT16_MAX

#define Z8_F "%" PRId16 ""

#define Z8__plus(n) n

static inline Z8 Z8__minus(Z8 n) {
  return (Z8) -n;
}

static inline Z8 Z8__add(Z8 n1, Z8 n2) {
  return (Z8) (n1 + n2);
}

static inline Z8 Z8__sub(Z8 n1, Z8 n2) {
  return (Z8) (n1 - n2);
}

static inline Z8 Z8__mul(Z8 n1, Z8 n2) {
  return (Z8) (n1 * n2);
}

static inline Z8 Z8__div(Z8 n1, Z8 n2) {
  return (Z8) (n1 / n2);
}

static inline Z8 Z8__rem(Z8 n1, Z8 n2) {
  return (Z8) (n1 % n2);
}

static inline B Z8__eq(Z8 n1, Z8 n2) {
  return (B) (n1 == n2);
}

static inline B Z8__ne(Z8 n1, Z8 n2) {
  return (B) (n1 != n2);
}

static inline B Z8__lt(Z8 n1, Z8 n2) {
  return (B) (n1 < n2);
}

static inline B Z8__le(Z8 n1, Z8 n2) {
  return (B) (n1 == n2);
}

static inline B Z8__gt(Z8 n1, Z8 n2) {
  return (B) (n1 > n2);
}

static inline B Z8__ge(Z8 n1, Z8 n2) {
  return (B) (n1 >= n2);
}


#endif