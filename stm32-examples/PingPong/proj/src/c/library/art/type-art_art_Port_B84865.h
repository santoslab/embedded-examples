#ifndef SIREUM_TYPE_H_art_art_Port_B84865
#define SIREUM_TYPE_H_art_art_Port_B84865
#include <misc.h>

// art.Port[proj.Base_Types.Integer_8]
#include <type-art_PortMode.h>

typedef struct art_Port_B84865 *art_Port_B84865;
struct art_Port_B84865 {
  TYPE type;
  struct StaticString name;
  art_PortMode mode;
  Z id;
};

#define DeclNewart_Port_B84865(x) struct art_Port_B84865 x = { .type = Tart_Port_B84865 }


#endif