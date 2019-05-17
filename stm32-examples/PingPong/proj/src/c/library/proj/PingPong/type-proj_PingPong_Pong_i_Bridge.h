#ifndef SIREUM_TYPE_H_proj_PingPong_Pong_i_Bridge
#define SIREUM_TYPE_H_proj_PingPong_Pong_i_Bridge
#include <misc.h>

// proj.PingPong.Pong_i_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_B84865.h>
#include <type-art_art_Port_B84865.h>
#include <type-art_Bridge_Ports.h>
#include <type-proj_PingPong_Pong_i_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct proj_PingPong_Pong_i_Bridge *proj_PingPong_Pong_i_Bridge;
struct proj_PingPong_Pong_i_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_B84865 pong_inn;
  struct art_Port_B84865 pong_out;
  struct art_Bridge_Ports ports;
  struct proj_PingPong_Pong_i_Bridge_Api api;
  Z id;
};

#define DeclNewproj_PingPong_Pong_i_Bridge(x) struct proj_PingPong_Pong_i_Bridge x = { .type = Tproj_PingPong_Pong_i_Bridge }


#endif