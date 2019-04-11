#ifndef SIREUM_TYPE_H_org_sireum_Z32
#define SIREUM_TYPE_H_org_sireum_Z32
#include <misc.h>

typedef int64_t Z32;

#define Z32_C(n) INT64_C(n)

#define Z32_Min INT64_MIN
#define Z32_Max INT64_MAX

#define Z32_F "%" PRId64 ""

#define Z32__plus(n) n

static inline Z32 Z32__minus(Z32 n) {
  return (Z32) -n;
}

static inline Z32 Z32__add(Z32 n1, Z32 n2) {
  return (Z32) (n1 + n2);
}

static inline Z32 Z32__sub(Z32 n1, Z32 n2) {
  return (Z32) (n1 - n2);
}

static inline Z32 Z32__mul(Z32 n1, Z32 n2) {
  return (Z32) (n1 * n2);
}

static inline Z32 Z32__div(Z32 n1, Z32 n2) {
  return (Z32) (n1 / n2);
}

static inline Z32 Z32__rem(Z32 n1, Z32 n2) {
  return (Z32) (n1 % n2);
}

static inline B Z32__eq(Z32 n1, Z32 n2) {
  return (B) (n1 == n2);
}

static inline B Z32__ne(Z32 n1, Z32 n2) {
  return (B) (n1 != n2);
}

static inline B Z32__lt(Z32 n1, Z32 n2) {
  return (B) (n1 < n2);
}

static inline B Z32__le(Z32 n1, Z32 n2) {
  return (B) (n1 == n2);
}

static inline B Z32__gt(Z32 n1, Z32 n2) {
  return (B) (n1 > n2);
}

static inline B Z32__ge(Z32 n1, Z32 n2) {
  return (B) (n1 >= n2);
}


#endif