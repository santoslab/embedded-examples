#ifndef SIREUM_TYPE_H_org_sireum_MS_30A5B4
#define SIREUM_TYPE_H_org_sireum_MS_30A5B4
#include <misc.h>

// MS[Z, Z]

#define MaxMS_30A5B4 7
#define MS_30A5B4SizeT int8_t

typedef struct MS_30A5B4 *MS_30A5B4;
struct MS_30A5B4 {
  TYPE type;
  int8_t size;
  Z value[MaxMS_30A5B4];
};

#define DeclNewMS_30A5B4(x) struct MS_30A5B4 x = { .type = TMS_30A5B4 }
#define MS_30A5B4_size(sf, this) ((Z) (this)->size)
#define MS_30A5B4_zize(sf, this) ((Z) (this)->size)
#define MS_30A5B4_at(this, i) ((this)->value[(int8_t) (i)])

#endif