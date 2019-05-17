#ifndef SIREUM_TYPE_H_art_UConnection
#define SIREUM_TYPE_H_art_UConnection
#include <misc.h>

// art.UConnection

#include <type-art_art_Connection_4C277C.h>

typedef union art_UConnection *art_UConnection;
union art_UConnection {
  TYPE type;
  struct art_Connection_4C277C art_Connection_4C277C;
};

#define DeclNewart_UConnection(x) union art_UConnection x = { 0 }

#endif