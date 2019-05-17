#ifndef SIREUM_TYPE_H_org_sireum_IS_08117A
#define SIREUM_TYPE_H_org_sireum_IS_08117A
#include <misc.h>

// IS[Z, art.UConnection]
#include <type-art_UConnection.h>

#define MaxIS_08117A 7
#define IS_08117ASizeT int8_t

typedef struct IS_08117A *IS_08117A;
struct IS_08117A {
  TYPE type;
  int8_t size;
  union art_UConnection value[MaxIS_08117A];
};

#define DeclNewIS_08117A(x) struct IS_08117A x = { .type = TIS_08117A }
#define IS_08117A_size(sf, this) ((Z) (this)->size)
#define IS_08117A_zize(sf, this) ((Z) (this)->size)
#define IS_08117A_at(this, i) ((art_UConnection) &((this)->value[(int8_t) (i)]))

#endif