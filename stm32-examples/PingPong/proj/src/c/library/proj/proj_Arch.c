#include <all.h>

B proj_Arch_initialized_ = F;

struct proj_PingPong_Ping_i_Bridge _proj_Arch_PingPongSystem_i_Instance_p_ping;
struct proj_PingPong_Pong_i_Bridge _proj_Arch_PingPongSystem_i_Instance_p_pong;
struct art_ArchitectureDescription _proj_Arch_ad;

void proj_Arch_init(StackFrame caller) {
  if (proj_Arch_initialized_) return;
  proj_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "proj.Arch", "<init>", 0);
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_1);
  art_DispatchPropertyProtocol_Sporadic_apply(sf, &t_1, Z_C(1000));
  DeclNewart_Port_B84865(t_2);
  art_Port_B84865_apply(sf, &t_2, Z_C(0), (String) string("PingPongSystem_i_Instance_p_ping_ping_inn"), art_PortMode_EventIn);
  DeclNewart_Port_B84865(t_3);
  art_Port_B84865_apply(sf, &t_3, Z_C(1), (String) string("PingPongSystem_i_Instance_p_ping_ping_out"), art_PortMode_EventOut);
  DeclNewproj_PingPong_Ping_i_Bridge(t_0);
  proj_PingPong_Ping_i_Bridge_apply(sf, &t_0, Z_C(0), (String) string("PingPongSystem_i_Instance_p_ping"), (art_DispatchPropertyProtocol) (&t_1), (art_Port_B84865) (&t_2), (art_Port_B84865) (&t_3));
  Type_assign(&_proj_Arch_PingPongSystem_i_Instance_p_ping, (&t_0), sizeof(struct proj_PingPong_Ping_i_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_5);
  art_DispatchPropertyProtocol_Sporadic_apply(sf, &t_5, Z_C(1000));
  DeclNewart_Port_B84865(t_6);
  art_Port_B84865_apply(sf, &t_6, Z_C(2), (String) string("PingPongSystem_i_Instance_p_pong_pong_inn"), art_PortMode_EventIn);
  DeclNewart_Port_B84865(t_7);
  art_Port_B84865_apply(sf, &t_7, Z_C(3), (String) string("PingPongSystem_i_Instance_p_pong_pong_out"), art_PortMode_EventOut);
  DeclNewproj_PingPong_Pong_i_Bridge(t_4);
  proj_PingPong_Pong_i_Bridge_apply(sf, &t_4, Z_C(1), (String) string("PingPongSystem_i_Instance_p_pong"), (art_DispatchPropertyProtocol) (&t_5), (art_Port_B84865) (&t_6), (art_Port_B84865) (&t_7));
  Type_assign(&_proj_Arch_PingPongSystem_i_Instance_p_pong, (&t_4), sizeof(struct proj_PingPong_Pong_i_Bridge));
  STATIC_ASSERT(2 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  DeclNewMS_852149(t_9);
  t_9.size = (int8_t) 2;
  Type_assign(&t_9.value[0], proj_Arch_PingPongSystem_i_Instance_p_ping(sf), sizeof(union art_Bridge));
  Type_assign(&t_9.value[1], proj_Arch_PingPongSystem_i_Instance_p_pong(sf), sizeof(union art_Bridge));
  STATIC_ASSERT(2 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_10);
  t_10.size = (int8_t) 2;
  DeclNewart_Connection_4C277C(t_11);
  art_Connection_4C277C_apply(sf, &t_11, (art_Port_B84865) proj_PingPong_Ping_i_Bridge_ping_out_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)), (art_Port_B84865) proj_PingPong_Pong_i_Bridge_pong_inn_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf)));
  Type_assign(&t_10.value[0], (&t_11), sizeof(union art_UConnection));
  DeclNewart_Connection_4C277C(t_12);
  art_Connection_4C277C_apply(sf, &t_12, (art_Port_B84865) proj_PingPong_Pong_i_Bridge_pong_out_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf)), (art_Port_B84865) proj_PingPong_Ping_i_Bridge_ping_inn_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));
  Type_assign(&t_10.value[1], (&t_12), sizeof(union art_UConnection));
  DeclNewart_ArchitectureDescription(t_8);
  art_ArchitectureDescription_apply(sf, &t_8, (MS_852149) (&t_9), (IS_08117A) (&t_10));
  Type_assign(&_proj_Arch_ad, (&t_8), sizeof(struct art_ArchitectureDescription));
}

proj_PingPong_Ping_i_Bridge proj_Arch_PingPongSystem_i_Instance_p_ping(StackFrame caller) {
  proj_Arch_init(caller);
  return (proj_PingPong_Ping_i_Bridge) &_proj_Arch_PingPongSystem_i_Instance_p_ping;
}

proj_PingPong_Pong_i_Bridge proj_Arch_PingPongSystem_i_Instance_p_pong(StackFrame caller) {
  proj_Arch_init(caller);
  return (proj_PingPong_Pong_i_Bridge) &_proj_Arch_PingPongSystem_i_Instance_p_pong;
}

art_ArchitectureDescription proj_Arch_ad(StackFrame caller) {
  proj_Arch_init(caller);
  return (art_ArchitectureDescription) &_proj_Arch_ad;
}