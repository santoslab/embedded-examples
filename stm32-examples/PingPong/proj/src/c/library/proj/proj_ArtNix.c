#include <all.h>

B proj_ArtNix_initialized_ = F;

Z _proj_ArtNix_maxPortIds;
struct MS_2590FE _proj_ArtNix_data;
union Option_8E9F45 _proj_ArtNix_noData;
struct MS_B5E3E6 _proj_ArtNix_connection;
struct MS_2590FE _proj_ArtNix_frozen;
struct MS_2590FE _proj_ArtNix_outgoing;
B _proj_ArtNix_isTimeDispatch;

void proj_ArtNix_init(StackFrame caller) {
  if (proj_ArtNix_initialized_) return;
  proj_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "<init>", 0);
  _proj_ArtNix_maxPortIds = Z__add(proj_IPCPorts_Main(sf), Z_C(1));
  DeclNewNone_964667(t_0);
  None_964667_apply(sf, &t_0);
  DeclNewMS_2590FE(t_1);
  MS_2590FE_create((MS_2590FE) &t_1, sf, proj_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_0));
  Type_assign(&_proj_ArtNix_data, ((MS_2590FE) &t_1), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_2);
  None_964667_apply(sf, &t_2);
  Type_assign(&_proj_ArtNix_noData, (&t_2), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_B5E3E6(_r);
  MS_B5E3E6 r = (MS_B5E3E6) &_r;
  STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_3);
  t_3.size = (int8_t) 0;
  DeclNewMS_B5E3E6(t_4);
  MS_B5E3E6_create((MS_B5E3E6) &t_4, sf, proj_ArtNix_maxPortIds(sf), (IS_AA0F82) (&t_3));
  Type_assign(r, ((MS_B5E3E6) &t_4), sizeof(struct MS_B5E3E6));

  sfUpdateLoc(19);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_5);
  t_5.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_6);
  Tuple2_EC3B57_apply(sf, &t_6, proj_IPCPorts_Pong_i_App(sf), art_Port_B84865_id_(proj_PingPong_Pong_i_Bridge_pong_inn_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf))));
  Type_assign(&t_5.value[0], (&t_6), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)))), (&t_5), sizeof(struct IS_AA0F82));

  sfUpdateLoc(22);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_7);
  t_7.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_8);
  Tuple2_EC3B57_apply(sf, &t_8, proj_IPCPorts_Ping_i_App(sf), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf))));
  Type_assign(&t_7.value[0], (&t_8), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_B84865_id_(proj_PingPong_Pong_i_Bridge_pong_out_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf)))), (&t_7), sizeof(struct IS_AA0F82));
  Type_assign(&_proj_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_9);
  t_9.size = (int8_t) 0;
  Type_assign(&_proj_ArtNix_frozen, (&t_9), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_10);
  None_964667_apply(sf, &t_10);
  DeclNewMS_2590FE(t_11);
  MS_2590FE_create((MS_2590FE) &t_11, sf, proj_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_10));
  Type_assign(&_proj_ArtNix_outgoing, ((MS_2590FE) &t_11), sizeof(struct MS_2590FE));
  _proj_ArtNix_isTimeDispatch = F;
}

Z proj_ArtNix_maxPortIds(StackFrame caller) {
  proj_ArtNix_init(caller);
  return _proj_ArtNix_maxPortIds;
}

MS_2590FE proj_ArtNix_data(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (MS_2590FE) &_proj_ArtNix_data;
}

Option_8E9F45 proj_ArtNix_noData(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (Option_8E9F45) &_proj_ArtNix_noData;
}

MS_B5E3E6 proj_ArtNix_connection(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (MS_B5E3E6) &_proj_ArtNix_connection;
}

MS_2590FE proj_ArtNix_frozen(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (MS_2590FE) &_proj_ArtNix_frozen;
}

void proj_ArtNix_frozen_a(StackFrame caller, MS_2590FE p_frozen) {
  proj_ArtNix_init(caller);
  Type_assign(&_proj_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE proj_ArtNix_outgoing(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (MS_2590FE) &_proj_ArtNix_outgoing;
}

void proj_ArtNix_outgoing_a(StackFrame caller, MS_2590FE p_outgoing) {
  proj_ArtNix_init(caller);
  Type_assign(&_proj_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B proj_ArtNix_isTimeDispatch(StackFrame caller) {
  proj_ArtNix_init(caller);
  return _proj_ArtNix_isTimeDispatch;
}

void proj_ArtNix_isTimeDispatch_a(StackFrame caller, B p_isTimeDispatch) {
  proj_ArtNix_init(caller);
  _proj_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit proj_ArtNix_timeDispatch(StackFrame caller) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(39);
  proj_ArtNix_isTimeDispatch_a(sf, (B) T);
}

Unit proj_ArtNix_updateData(StackFrame caller, Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "updateData", 0);

  sfUpdateLoc(35);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(sf, &t_0, (art_DataContent) d);
  Type_assign(MS_2590FE_at(proj_ArtNix_data(sf), port), (&t_0), sizeof(union Option_8E9F45));
}

Unit proj_ArtNix_run(StackFrame caller) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "run", 0);
}

Unit proj_ArtNix_logInfo(StackFrame caller, String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(98);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(99);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(100);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

Unit proj_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "sendOutput", 0);

  sfUpdateLoc(74);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(75);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(proj_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_75 = F;
      if (!match_75) {
        match_75 = T;
        art_DataContent d_76_19;
        match_75 = match_75 && Some_D29615__is(sf, &t_0);
        if (match_75) {
          d_76_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_0));
        }
        if (match_75) {

          sfUpdateLoc(77);
          Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), p), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(78);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(proj_ArtNix_connection(sf), p);
            int8_t t_3 = (MS_B5E3E6_at(proj_ArtNix_connection(sf), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(79);
              B t_1 = proj_PlatformNix_sendAsync(sf, Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_76_19);                
            }
          }
        }
      }
      if (!match_75) {
        match_75 = T;
        if (match_75) {
        }
      }
      sfAssert(match_75, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(85);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(86);
      DeclNewOption_8E9F45(t_8);
      Type_assign(&t_8, MS_2590FE_at(proj_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_86 = F;
      if (!match_86) {
        match_86 = T;
        art_DataContent d_87_19;
        match_86 = match_86 && Some_D29615__is(sf, &t_8);
        if (match_86) {
          d_87_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_8));
        }
        if (match_86) {

          sfUpdateLoc(88);
          Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), p), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(89);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(proj_ArtNix_connection(sf), p);
            int8_t t_11 = (MS_B5E3E6_at(proj_ArtNix_connection(sf), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(90);
              B t_9 = proj_PlatformNix_sendAsync(sf, Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_87_19);                
            }
          }
        }
      }
      if (!match_86) {
        match_86 = T;
        if (match_86) {
        }
      }
      sfAssert(match_86, "Error when pattern matching.");
    }
  }
}

Unit proj_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "receiveInput", 0);

  sfUpdateLoc(59);
  proj_ArtNix_frozen_a(sf, (MS_2590FE) proj_ArtNix_data(sf));

  sfUpdateLoc(60);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(61);
      Type_assign(MS_2590FE_at(proj_ArtNix_data(sf), i), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));
    }
  }
}

Unit proj_ArtNix_putValue(StackFrame caller, Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "putValue", 0);

  sfUpdateLoc(66);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(sf, &t_0, (art_DataContent) data);
  Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), portId), (&t_0), sizeof(union Option_8E9F45));
}

void proj_ArtNix_getValue(Option_8E9F45 result, StackFrame caller, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(proj_ArtNix_frozen(sf), portId), sizeof(union Option_8E9F45));
}