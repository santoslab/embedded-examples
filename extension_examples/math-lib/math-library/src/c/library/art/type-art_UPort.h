#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort
#include <misc.h>

// art.UPort


typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#endif