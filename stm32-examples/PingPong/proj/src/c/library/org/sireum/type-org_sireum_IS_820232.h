#ifndef SIREUM_TYPE_H_org_sireum_IS_820232
#define SIREUM_TYPE_H_org_sireum_IS_820232
#include <misc.h>

// IS[Z, art.UPort]
#include <type-art_UPort.h>

#define MaxIS_820232 7
#define IS_820232SizeT int8_t

typedef struct IS_820232 *IS_820232;
struct IS_820232 {
  TYPE type;
  int8_t size;
  union art_UPort value[MaxIS_820232];
};

#define DeclNewIS_820232(x) struct IS_820232 x = { .type = TIS_820232 }
#define IS_820232_size(sf, this) ((Z) (this)->size)
#define IS_820232_zize(sf, this) ((Z) (this)->size)
#define IS_820232_at(this, i) ((art_UPort) &((this)->value[(int8_t) (i)]))

#endif