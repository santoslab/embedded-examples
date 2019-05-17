#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort
#include <misc.h>

// art.UPort

#include <type-art_art_Port_B84865.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_B84865 art_Port_B84865;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#endif