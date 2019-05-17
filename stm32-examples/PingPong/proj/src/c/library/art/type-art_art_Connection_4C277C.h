#ifndef SIREUM_TYPE_H_art_art_Connection_4C277C
#define SIREUM_TYPE_H_art_art_Connection_4C277C
#include <misc.h>

// art.Connection[proj.Base_Types.Integer_8]
#include <type-art_art_Port_B84865.h>
#include <type-art_art_Port_B84865.h>

typedef struct art_Connection_4C277C *art_Connection_4C277C;
struct art_Connection_4C277C {
  TYPE type;
  struct art_Port_B84865 from;
  struct art_Port_B84865 to;
};

#define DeclNewart_Connection_4C277C(x) struct art_Connection_4C277C x = { .type = Tart_Connection_4C277C }


#endif