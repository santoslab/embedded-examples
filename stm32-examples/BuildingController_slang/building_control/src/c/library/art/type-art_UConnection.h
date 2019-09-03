#ifndef SIREUM_TYPE_H_art_UConnection
#define SIREUM_TYPE_H_art_UConnection
#include <misc.h>

// art.UConnection

#include <type-art_art_Connection_2385F4.h>
#include <type-art_art_Connection_26CBE2.h>

typedef union art_UConnection *art_UConnection;
union art_UConnection {
  TYPE type;
  struct art_Connection_2385F4 art_Connection_2385F4;
  struct art_Connection_26CBE2 art_Connection_26CBE2;
};

#define DeclNewart_UConnection(x) union art_UConnection x = { 0 }

#endif