#include <all.h>

// art.Bridge

B art_Bridge__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tproj_PingPong_Pong_i_Bridge: return T;
    case Tproj_PingPong_Ping_i_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tproj_PingPong_Pong_i_Bridge: break;
    case Tproj_PingPong_Ping_i_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_Bridge) this;
}

Z art_Bridge_id_(StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge: return proj_PingPong_Pong_i_Bridge_id_((proj_PingPong_Pong_i_Bridge) this);
    case Tproj_PingPong_Ping_i_Bridge: return proj_PingPong_Ping_i_Bridge_id_((proj_PingPong_Ping_i_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(art_DispatchPropertyProtocol result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge: Type_assign(result, proj_PingPong_Pong_i_Bridge_dispatchProtocol_((proj_PingPong_Pong_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Tproj_PingPong_Ping_i_Bridge: Type_assign(result, proj_PingPong_Ping_i_Bridge_dispatchProtocol_((proj_PingPong_Ping_i_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_name_(String result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge: Type_assign(result, proj_PingPong_Pong_i_Bridge_name_((proj_PingPong_Pong_i_Bridge) this), sizeof(struct StaticString)); return;
    case Tproj_PingPong_Ping_i_Bridge: Type_assign(result, proj_PingPong_Ping_i_Bridge_name_((proj_PingPong_Ping_i_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_Bridge_ports_(art_Bridge_Ports result, StackFrame caller, art_Bridge this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge: Type_assign(result, proj_PingPong_Pong_i_Bridge_ports_((proj_PingPong_Pong_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Tproj_PingPong_Ping_i_Bridge: Type_assign(result, proj_PingPong_Ping_i_Bridge_ports_((proj_PingPong_Ping_i_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}