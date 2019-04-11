#ifndef SIREUM_TYPE_H_org_sireum_MS_852149
#define SIREUM_TYPE_H_org_sireum_MS_852149
#include <misc.h>

// MS[Z, art.Bridge]
#include <type-art_Bridge.h>

#define MaxMS_852149 16
#define MS_852149SizeT int8_t

typedef struct MS_852149 *MS_852149;
struct MS_852149 {
  TYPE type;
  int8_t size;
  union art_Bridge value[MaxMS_852149];
};

#define DeclNewMS_852149(x) struct MS_852149 x = { .type = TMS_852149 }
#define MS_852149_size(sf, this) ((Z) (this)->size)
#define MS_852149_zize(sf, this) ((Z) (this)->size)
#define MS_852149_at(this, i) ((art_Bridge) &((this)->value[(int8_t) (i)]))

#endif