#ifndef SIREUM_TYPE_H_org_sireum_MS_7CE7BD
#define SIREUM_TYPE_H_org_sireum_MS_7CE7BD
#include <misc.h>

// MS[Z, (Z, Z)]
#include <type-org_sireum_Tuple2_EC3B57.h>

#define MaxMS_7CE7BD 16
#define MS_7CE7BDSizeT int8_t

typedef struct MS_7CE7BD *MS_7CE7BD;
struct MS_7CE7BD {
  TYPE type;
  int8_t size;
  struct Tuple2_EC3B57 value[MaxMS_7CE7BD];
};

#define DeclNewMS_7CE7BD(x) struct MS_7CE7BD x = { .type = TMS_7CE7BD }
#define MS_7CE7BD_size(sf, this) ((Z) (this)->size)
#define MS_7CE7BD_zize(sf, this) ((Z) (this)->size)
#define MS_7CE7BD_at(this, i) ((Tuple2_EC3B57) &((this)->value[(int8_t) (i)]))

#endif