#ifndef SIREUM_H_org_sireum_Z16
#define SIREUM_H_org_sireum_Z16
#include <types.h>

#include <assert.h>

inline Z16 Z16_range(Z16 n) {
  #ifdef SIREUM_RANGE_CHECK
  assert(Z16_C(-32768) <= n && n <= Z16_C(32767));
  #endif
  return n;
};
inline Z16 Z16__plus(Z16 n) {
  return Z16_range(n);
}

inline Z16 Z16__minus(Z16 n) {
  return Z16_range((Z16) -n);
}

inline Z16 Z16__add(Z16 n1, Z16 n2) {
  return Z16_range((Z16) (n1 + n2));
}

inline Z16 Z16__sub(Z16 n1, Z16 n2) {
  return Z16_range((Z16) (n1 - n2));
}

inline Z16 Z16__mul(Z16 n1, Z16 n2) {
  return Z16_range((Z16) (n1 * n2));
}

inline Z16 Z16__div(Z16 n1, Z16 n2) {
  return Z16_range((Z16) (n1 / n2));
}

inline Z16 Z16__rem(Z16 n1, Z16 n2) {
  return Z16_range((Z16) (n1 % n2));
}

inline B Z16__eq(Z16 n1, Z16 n2) {
  return (B) (n1 == n2);
}

inline B Z16__ne(Z16 n1, Z16 n2) {
  return (B) (n1 != n2);
}

inline B Z16__lt(Z16 n1, Z16 n2) {
  return (B) (n1 < n2);
}

inline B Z16__le(Z16 n1, Z16 n2) {
  return (B) (n1 <= n2);
}

inline B Z16__gt(Z16 n1, Z16 n2) {
  return (B) (n1 > n2);
}

inline B Z16__ge(Z16 n1, Z16 n2) {
  return (B) (n1 >= n2);
}


#ifdef SIREUM_NO_PRINT
#define Z16_cprint(this, isOut)
#else
#define Z16_cprint(this, isOut) { if (isOut) printf(Z16_F, this); else fprintf(stderr, Z16_F, this); }
#endif
void Z16_string_(STACK_FRAME String result, Z16 this);

#endif