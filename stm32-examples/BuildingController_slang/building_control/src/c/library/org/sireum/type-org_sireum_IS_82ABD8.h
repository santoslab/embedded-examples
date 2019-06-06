#ifndef SIREUM_TYPE_H_org_sireum_IS_82ABD8
#define SIREUM_TYPE_H_org_sireum_IS_82ABD8
#include <misc.h>

// IS[Z, Z]

#define MaxIS_82ABD8 8
#define IS_82ABD8SizeT int8_t

typedef struct IS_82ABD8 *IS_82ABD8;
struct IS_82ABD8 {
  TYPE type;
  int8_t size;
  Z value[MaxIS_82ABD8];
};

#define DeclNewIS_82ABD8(x) struct IS_82ABD8 x = { .type = TIS_82ABD8 }
#define IS_82ABD8_size(sf, this) ((Z) (this)->size)
#define IS_82ABD8_zize(sf, this) ((Z) (this)->size)
#define IS_82ABD8_at(this, i) ((this)->value[(int8_t) (i)])

#endif