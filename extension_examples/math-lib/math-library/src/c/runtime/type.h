#ifndef SIREUM_TYPE_H
#define SIREUM_TYPE_H

#include <stdbool.h>
#include <math.h>

typedef void Unit;

typedef bool B;

#define T true

#define F false

static inline B B__eq(B b1, B b2) {
  return b1 == b2;
}

static inline B B__ne(B b1, B b2) {
  return b1 != b2;
}

static inline B B__complement(B b) {
  return (B) ~b;
}

static inline B B__and(B b1, B b2) {
  return b1 & b2;
}

static inline B B__or(B b1, B b2) {
  return b1 | b2;
}

static inline B B__xor(B b1, B b2) {
  return b1 ^ b2;
}


typedef char C;

static inline C C__complement(C c) {
  unsigned char uc = (unsigned char) c;
  return (C) ~uc;
}

static inline C C__add(C c1, C c2) {
  return (C) (c1 + c2);
}

static inline C C__sub(C c1, C c2) {
  return (C) (c1 - c2);
}

static inline C C__mul(C c1, C c2) {
  return (C) (c1 * c2);
}

static inline C C__div(C c1, C c2) {
  return (C) (c1 / c2);
}

static inline C C__rem(C c1, C c2) {
  return (C) (c1 % c2);
}

static inline B C__eq(C c1, C c2) {
  return (B) (c1 == c2);
}

static inline B C__ne(C c1, C c2) {
  return (B) (c1 != c2);
}

static inline B C__lt(C c1, C c2) {
  return (B) (c1 < c2);
}

static inline B C__le(C c1, C c2) {
  return (B) (c1 <= c2);
}

static inline B C__gt(C c1, C c2) {
  return (B) (c1 > c2);
}

static inline B C__ge(C c1, C c2) {
  return (B) (c1 >= c2);
}

static inline C C__shl(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 << uc2);
}

static inline C C__shr(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 >> uc2);
}

static inline C C__ushr(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 >> uc2);
}

static inline C C__and(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 & uc2);
}

static inline C C__or(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 | uc2);
}

static inline C C__xor(C c1, C c2) {
  unsigned char uc1 = (unsigned char) c1;
  unsigned char uc2 = (unsigned char) c2;
  return (C) (uc1 ^ uc2);
}


typedef float F32;

static inline F32 F32__add(F32 n1, F32 n2) {
  return (F32) (n1 + n2);
}

static inline F32 F32__sub(F32 n1, F32 n2) {
  return (F32) (n1 - n2);
}

static inline F32 F32__mul(F32 n1, F32 n2) {
  return (F32) (n1 * n2);
}

static inline F32 F32__div(F32 n1, F32 n2) {
  return (F32) (n1 / n2);
}

static inline F32 F32__rem(F32 n1, F32 n2) {
  return (F32) fmod(n1, n2);
}

static inline B F32__eq(F32 n1, F32 n2) {
  return (B) (n1 == n2);
}

static inline B F32__ne(F32 n1, F32 n2) {
  return (B) (n1 != n2);
}

static inline B F32__lt(F32 n1, F32 n2) {
  return (B) (n1 < n2);
}

static inline B F32__le(F32 n1, F32 n2) {
  return (B) (n1 <= n2);
}

static inline B F32__gt(F32 n1, F32 n2) {
  return (B) (n1 > n2);
}

static inline B F32__ge(F32 n1, F32 n2) {
  return (B) (n1 >= n2);
}


typedef double F64;

static inline F64 F64__add(F64 n1, F64 n2) {
  return (F64) (n1 + n2);
}

static inline F64 F64__sub(F64 n1, F64 n2) {
  return (F64) (n1 - n2);
}

static inline F64 F64__mul(F64 n1, F64 n2) {
  return (F64) (n1 * n2);
}

static inline F64 F64__div(F64 n1, F64 n2) {
  return (F64) (n1 / n2);
}

static inline F64 F64__rem(F64 n1, F64 n2) {
  return (F64) fmod(n1, n2);
}

static inline B F64__eq(F64 n1, F64 n2) {
  return (B) (n1 == n2);
}

static inline B F64__ne(F64 n1, F64 n2) {
  return (B) (n1 != n2);
}

static inline B F64__lt(F64 n1, F64 n2) {
  return (B) (n1 < n2);
}

static inline B F64__le(F64 n1, F64 n2) {
  return (B) (n1 <= n2);
}

static inline B F64__gt(F64 n1, F64 n2) {
  return (B) (n1 > n2);
}

static inline B F64__ge(F64 n1, F64 n2) {
  return (B) (n1 >= n2);
}


typedef long double R;

static inline R R__add(R n1, R n2) {
  return (R) (n1 + n2);
}

static inline R R__sub(R n1, R n2) {
  return (R) (n1 - n2);
}

static inline R R__mul(R n1, R n2) {
  return (R) (n1 * n2);
}

static inline R R__div(R n1, R n2) {
  return (R) (n1 / n2);
}

static inline R R__rem(R n1, R n2) {
  return (R) fmodl(n1, n2);
}

static inline B R__eq(R n1, R n2) {
  return (B) (n1 == n2);
}

static inline B R__ne(R n1, R n2) {
  return (B) (n1 != n2);
}

static inline B R__lt(R n1, R n2) {
  return (B) (n1 < n2);
}

static inline B R__le(R n1, R n2) {
  return (B) (n1 <= n2);
}

static inline B R__gt(R n1, R n2) {
  return (B) (n1 > n2);
}

static inline B R__ge(R n1, R n2) {
  return (B) (n1 >= n2);
}

#define F32_F "%f"
#define F64_F "%lf"
#define R_F "%Lf"

#endif