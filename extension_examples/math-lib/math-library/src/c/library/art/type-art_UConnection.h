#ifndef SIREUM_TYPE_H_art_UConnection
#define SIREUM_TYPE_H_art_UConnection
#include <misc.h>

// art.UConnection


typedef union art_UConnection *art_UConnection;
union art_UConnection {
  TYPE type;
};

#define DeclNewart_UConnection(x) union art_UConnection x = { 0 }

#endif