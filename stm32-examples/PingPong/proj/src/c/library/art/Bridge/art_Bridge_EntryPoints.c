#include <all.h>

// art.Bridge.EntryPoints

B art_Bridge_EntryPoints__is(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: return T;
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: return T;
    default: return F;
  }
}

art_Bridge_EntryPoints art_Bridge_EntryPoints__as(StackFrame caller, void *this) {
  switch(((Type) this)->type) {
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: break;
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.EntryPoints.", TYPE_string(this));
      sfAbortImpl(caller, "");
  }
  return (art_Bridge_EntryPoints) this;
}

Unit art_Bridge_EntryPoints_initialise_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: proj_PingPong_Pong_i_Bridge_EntryPoints_initialise_(caller, (proj_PingPong_Pong_i_Bridge_EntryPoints) this); return;
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: proj_PingPong_Ping_i_Bridge_EntryPoints_initialise_(caller, (proj_PingPong_Ping_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_compute_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: proj_PingPong_Pong_i_Bridge_EntryPoints_compute_(caller, (proj_PingPong_Pong_i_Bridge_EntryPoints) this); return;
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: proj_PingPong_Ping_i_Bridge_EntryPoints_compute_(caller, (proj_PingPong_Ping_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_finalise_(StackFrame caller, art_Bridge_EntryPoints this) {
  switch (this->type) {
    case Tproj_PingPong_Pong_i_Bridge_EntryPoints: proj_PingPong_Pong_i_Bridge_EntryPoints_finalise_(caller, (proj_PingPong_Pong_i_Bridge_EntryPoints) this); return;
    case Tproj_PingPong_Ping_i_Bridge_EntryPoints: proj_PingPong_Ping_i_Bridge_EntryPoints_finalise_(caller, (proj_PingPong_Ping_i_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}