#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge
#include <misc.h>

// art.Bridge

#include <type-proj_PingPong_Pong_i_Bridge.h>
#include <type-proj_PingPong_Ping_i_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct proj_PingPong_Pong_i_Bridge proj_PingPong_Pong_i_Bridge;
  struct proj_PingPong_Ping_i_Bridge proj_PingPong_Ping_i_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#endif