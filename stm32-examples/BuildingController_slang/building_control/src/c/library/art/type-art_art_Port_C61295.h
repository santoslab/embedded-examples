#ifndef SIREUM_TYPE_H_art_art_Port_C61295
#define SIREUM_TYPE_H_art_art_Port_C61295
#include <misc.h>

// art.Port[building_control.Base_Types.Integer_16]
#include <type-art_PortMode.h>

typedef struct art_Port_C61295 *art_Port_C61295;
struct art_Port_C61295 {
  TYPE type;
  art_PortMode mode;
  Z id;
};

#define DeclNewart_Port_C61295(x) struct art_Port_C61295 x = { .type = Tart_Port_C61295 }

#endif