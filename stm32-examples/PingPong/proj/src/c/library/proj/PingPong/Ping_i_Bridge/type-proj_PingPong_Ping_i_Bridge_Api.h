#ifndef SIREUM_TYPE_H_proj_PingPong_Ping_i_Bridge_Api
#define SIREUM_TYPE_H_proj_PingPong_Ping_i_Bridge_Api
#include <misc.h>

// proj.PingPong.Ping_i_Bridge.Api

typedef struct proj_PingPong_Ping_i_Bridge_Api *proj_PingPong_Ping_i_Bridge_Api;
struct proj_PingPong_Ping_i_Bridge_Api {
  TYPE type;
  Z id;
  Z ping_inn_Id;
  Z ping_out_Id;
};

#define DeclNewproj_PingPong_Ping_i_Bridge_Api(x) struct proj_PingPong_Ping_i_Bridge_Api x = { .type = Tproj_PingPong_Ping_i_Bridge_Api }


#endif