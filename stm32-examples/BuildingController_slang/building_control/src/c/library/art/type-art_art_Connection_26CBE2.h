#ifndef SIREUM_TYPE_H_art_art_Connection_26CBE2
#define SIREUM_TYPE_H_art_art_Connection_26CBE2
#include <misc.h>

// art.Connection[building_control.Base_Types.Boolean]
#include <type-art_art_Port_69270F.h>
#include <type-art_art_Port_69270F.h>

typedef struct art_Connection_26CBE2 *art_Connection_26CBE2;
struct art_Connection_26CBE2 {
  TYPE type;
  struct art_Port_69270F from;
  struct art_Port_69270F to;
};

#define DeclNewart_Connection_26CBE2(x) struct art_Connection_26CBE2 x = { .type = Tart_Connection_26CBE2 }


#endif