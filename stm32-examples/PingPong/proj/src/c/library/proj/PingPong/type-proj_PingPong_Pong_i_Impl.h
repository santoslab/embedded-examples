#ifndef SIREUM_TYPE_H_proj_PingPong_Pong_i_Impl
#define SIREUM_TYPE_H_proj_PingPong_Pong_i_Impl
#include <misc.h>

// proj.PingPong.Pong_i_Impl
#include <type-proj_PingPong_Pong_i_Bridge_Api.h>
#include <type-org_sireum_Z8.h>

typedef struct proj_PingPong_Pong_i_Impl *proj_PingPong_Pong_i_Impl;
struct proj_PingPong_Pong_i_Impl {
  TYPE type;
  struct proj_PingPong_Pong_i_Bridge_Api api;
  Z8 last;
};

#define DeclNewproj_PingPong_Pong_i_Impl(x) struct proj_PingPong_Pong_i_Impl x = { .type = Tproj_PingPong_Pong_i_Impl }


#endif