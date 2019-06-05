#ifndef SIREUM_TYPE_H_art_art_Connection_2385F4
#define SIREUM_TYPE_H_art_art_Connection_2385F4
#include <misc.h>

// art.Connection[building_control.Base_Types.Integer_16]
#include <type-art_art_Port_C61295.h>
#include <type-art_art_Port_C61295.h>

typedef struct art_Connection_2385F4 *art_Connection_2385F4;
struct art_Connection_2385F4 {
  TYPE type;
  struct art_Port_C61295 from;
  struct art_Port_C61295 to;
};

#define DeclNewart_Connection_2385F4(x) struct art_Connection_2385F4 x = { .type = Tart_Connection_2385F4 }


#endif