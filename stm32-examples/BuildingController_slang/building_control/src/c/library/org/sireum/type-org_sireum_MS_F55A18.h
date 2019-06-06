#ifndef SIREUM_TYPE_H_org_sireum_MS_F55A18
#define SIREUM_TYPE_H_org_sireum_MS_F55A18
#include <misc.h>

// MS[Z, Option[art.UPort]]
#include <type-org_sireum_Option_6239DB.h>

#define MaxMS_F55A18 8
#define MS_F55A18SizeT int8_t

typedef struct MS_F55A18 *MS_F55A18;
struct MS_F55A18 {
  TYPE type;
  int8_t size;
  union Option_6239DB value[MaxMS_F55A18];
};

#define DeclNewMS_F55A18(x) struct MS_F55A18 x = { .type = TMS_F55A18 }
#define MS_F55A18_size(sf, this) ((Z) (this)->size)
#define MS_F55A18_zize(sf, this) ((Z) (this)->size)
#define MS_F55A18_at(this, i) ((Option_6239DB) &((this)->value[(int8_t) (i)]))

#endif