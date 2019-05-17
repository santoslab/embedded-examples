#ifndef SIREUM_TYPE_H_proj_PingPong_Ping_i_Bridge_EntryPoints
#define SIREUM_TYPE_H_proj_PingPong_Ping_i_Bridge_EntryPoints
#include <misc.h>

// proj.PingPong.Ping_i_Bridge.EntryPoints
#include <type-proj_PingPong_Ping_i_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct proj_PingPong_Ping_i_Bridge_EntryPoints *proj_PingPong_Ping_i_Bridge_EntryPoints;
struct proj_PingPong_Ping_i_Bridge_EntryPoints {
  TYPE type;
  struct proj_PingPong_Ping_i_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Ping_i_BridgeId;
  Z ping_inn_Id;
  Z ping_out_Id;
};

#define DeclNewproj_PingPong_Ping_i_Bridge_EntryPoints(x) struct proj_PingPong_Ping_i_Bridge_EntryPoints x = { .type = Tproj_PingPong_Ping_i_Bridge_EntryPoints }


#endif