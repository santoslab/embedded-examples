#ifndef SIREUM_TYPE_H_art_art_Port_69270F
#define SIREUM_TYPE_H_art_art_Port_69270F
#include <misc.h>

// art.Port[building_control.Base_Types.Boolean]
#include <type-art_PortMode.h>

typedef struct art_Port_69270F *art_Port_69270F;
struct art_Port_69270F {
  TYPE type;
  art_PortMode mode;
  Z id;
};

#define DeclNewart_Port_69270F(x) struct art_Port_69270F x = { .type = Tart_Port_69270F }


#endif