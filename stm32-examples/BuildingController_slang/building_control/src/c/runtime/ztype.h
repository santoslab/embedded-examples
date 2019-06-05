#ifndef SIREUM_ZN_TYPE_H
#define SIREUM_ZN_TYPE_H

#include <inttypes.h>
#include <type.h>

typedef int16_t Z;

#define Z_C(n) INT16_C(n)

#define Z_Min Z_C(INT16_MIN)
#define Z_Max Z_C(INT16_MAX)

#define Z_F "%" PRId16 ""

#define Z__plus(n) n

static inline Z Z__minus(Z n) {
  return (Z) -n;
}

static inline Z Z__add(Z n1, Z n2) {
  return (Z) (n1 + n2);
}

static inline Z Z__sub(Z n1, Z n2) {
  return (Z) (n1 - n2);
}

static inline Z Z__mul(Z n1, Z n2) {
  return (Z) (n1 * n2);
}

static inline Z Z__div(Z n1, Z n2) {
  return (Z) (n1 / n2);
}

static inline Z Z__rem(Z n1, Z n2) {
  return (Z) (n1 % n2);
}

static inline B Z__eq(Z n1, Z n2) {
  return (B) (n1 == n2);
}

static inline B Z__ne(Z n1, Z n2) {
  return (B) (n1 != n2);
}

static inline B Z__lt(Z n1, Z n2) {
  return (B) (n1 < n2);
}

static inline B Z__le(Z n1, Z n2) {
  return (B) (n1 <= n2);
}

static inline B Z__gt(Z n1, Z n2) {
  return (B) (n1 > n2);
}

static inline B Z__ge(Z n1, Z n2) {
  return (B) (n1 >= n2);
}

#endif