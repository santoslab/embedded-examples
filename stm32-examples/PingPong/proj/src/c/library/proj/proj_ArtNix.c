#include <all.h>

B proj_ArtNix_initialized_ = F;

Z _proj_ArtNix_maxPortIds;
struct art_TimeTriggered _proj_ArtNix_timeTriggered;
struct MS_2590FE _proj_ArtNix_data;
union Option_8E9F45 _proj_ArtNix_noData;
struct MS_B5E3E6 _proj_ArtNix_connection;
struct MS_30A5B4 _proj_ArtNix_eventInPorts;
struct MS_2590FE _proj_ArtNix_frozen;
struct MS_2590FE _proj_ArtNix_outgoing;
B _proj_ArtNix_isTimeDispatch;

void proj_ArtNix_init(StackFrame caller) {
  if (proj_ArtNix_initialized_) return;
  proj_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "<init>", 0);
  _proj_ArtNix_maxPortIds = Z__add(proj_IPCPorts_Main(sf), Z_C(1));
  DeclNewart_TimeTriggered(t_0);
  art_TimeTriggered_apply(sf, &t_0);
  Type_assign(&_proj_ArtNix_timeTriggered, (&t_0), sizeof(struct art_TimeTriggered));
  DeclNewNone_964667(t_1);
  None_964667_apply(sf, &t_1);
  DeclNewMS_2590FE(t_2);
  MS_2590FE_create((MS_2590FE) &t_2, sf, proj_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_1));
  Type_assign(&_proj_ArtNix_data, ((MS_2590FE) &t_2), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_3);
  None_964667_apply(sf, &t_3);
  Type_assign(&_proj_ArtNix_noData, (&t_3), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_B5E3E6(_r);
  MS_B5E3E6 r = (MS_B5E3E6) &_r;
  STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_4);
  t_4.size = (int8_t) 0;
  DeclNewMS_B5E3E6(t_5);
  MS_B5E3E6_create((MS_B5E3E6) &t_5, sf, proj_ArtNix_maxPortIds(sf), (IS_AA0F82) (&t_4));
  Type_assign(r, ((MS_B5E3E6) &t_5), sizeof(struct MS_B5E3E6));

  sfUpdateLoc(19);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_6);
  t_6.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_7);
  Tuple2_EC3B57_apply(sf, &t_7, proj_IPCPorts_Pong_i_App(sf), art_Port_B84865_id_(proj_PingPong_Pong_i_Bridge_pong_inn_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf))));
  Type_assign(&t_6.value[0], (&t_7), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)))), (&t_6), sizeof(struct IS_AA0F82));

  sfUpdateLoc(22);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_8);
  t_8.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_9);
  Tuple2_EC3B57_apply(sf, &t_9, proj_IPCPorts_Ping_i_App(sf), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf))));
  Type_assign(&t_8.value[0], (&t_9), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_B84865_id_(proj_PingPong_Pong_i_Bridge_pong_out_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf)))), (&t_8), sizeof(struct IS_AA0F82));
  Type_assign(&_proj_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  STATIC_ASSERT(2 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  DeclNewMS_30A5B4(t_10);
  t_10.size = (int8_t) 2;
  t_10.value[0] = art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));
  t_10.value[1] = art_Port_B84865_id_(proj_PingPong_Pong_i_Bridge_pong_inn_(proj_Arch_PingPongSystem_i_Instance_p_pong(sf)));
  Type_assign(&_proj_ArtNix_eventInPorts, (&t_10), sizeof(struct MS_30A5B4));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_11);
  t_11.size = (int8_t) 0;
  Type_assign(&_proj_ArtNix_frozen, (&t_11), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_12);
  None_964667_apply(sf, &t_12);
  DeclNewMS_2590FE(t_13);
  MS_2590FE_create((MS_2590FE) &t_13, sf, proj_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_12));
  Type_assign(&_proj_ArtNix_outgoing, ((MS_2590FE) &t_13), sizeof(struct MS_2590FE));
  _proj_ArtNix_isTimeDispatch = F;
}

Z proj_ArtNix_maxPortIds(StackFrame caller) {
  proj_ArtNix_init(caller);
  return _proj_ArtNix_maxPortIds;
}

art_TimeTriggered proj_ArtNix_timeTriggered(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (art_TimeTriggered) &_proj_ArtNix_timeTriggered;
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

MS_30A5B4 proj_ArtNix_eventInPorts(StackFrame caller) {
  proj_ArtNix_init(caller);
  return (MS_30A5B4) &_proj_ArtNix_eventInPorts;
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

Unit proj_ArtNix_eventDispatch(StackFrame caller) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "eventDispatch", 0);

  sfUpdateLoc(45);
  proj_ArtNix_isTimeDispatch_a(sf, (B) F);
}

Unit proj_ArtNix_updateData(StackFrame caller, Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "updateData", 0);

  sfUpdateLoc(37);
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

  sfUpdateLoc(100);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(102);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

Unit proj_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "sendOutput", 0);

  sfUpdateLoc(76);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(77);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(proj_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_77 = F;
      if (!match_77) {
        match_77 = T;
        art_DataContent d_78_19;
        match_77 = match_77 && Some_D29615__is(sf, &t_0);
        if (match_77) {
          d_78_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_0));
        }
        if (match_77) {

          sfUpdateLoc(79);
          Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), p), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(80);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(proj_ArtNix_connection(sf), p);
            int8_t t_3 = (MS_B5E3E6_at(proj_ArtNix_connection(sf), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(81);
              B t_1 = proj_PlatformNix_sendAsync(sf, Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_78_19);                
            }
          }
        }
      }
      if (!match_77) {
        match_77 = T;
        if (match_77) {
        }
      }
      sfAssert(match_77, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(87);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(88);
      DeclNewOption_8E9F45(t_8);
      Type_assign(&t_8, MS_2590FE_at(proj_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_88 = F;
      if (!match_88) {
        match_88 = T;
        art_DataContent d_89_19;
        match_88 = match_88 && Some_D29615__is(sf, &t_8);
        if (match_88) {
          d_89_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_8));
        }
        if (match_88) {

          sfUpdateLoc(90);
          Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), p), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(91);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(proj_ArtNix_connection(sf), p);
            int8_t t_11 = (MS_B5E3E6_at(proj_ArtNix_connection(sf), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(92);
              B t_9 = proj_PlatformNix_sendAsync(sf, Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_89_19);                
            }
          }
        }
      }
      if (!match_88) {
        match_88 = T;
        if (match_88) {
        }
      }
      sfAssert(match_88, "Error when pattern matching.");
    }
  }
}

void proj_ArtNix_dispatchStatus(art_DispatchStatus result, StackFrame caller, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "dispatchStatus", 0);

  sfUpdateLoc(49);
  if (proj_ArtNix_isTimeDispatch(sf)) {
    Type_assign(result, proj_ArtNix_timeTriggered(sf), sizeof(struct art_TimeTriggered));
  } else {

    sfUpdateLoc(52);
    DeclNewIS_82ABD8(_r);
    IS_82ABD8 r = (IS_82ABD8) &_r;
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_82ABD8));

    sfUpdateLoc(53);
    {
      MS_30A5B4 t_2 = proj_ArtNix_eventInPorts(sf);
      int8_t t_3 = (proj_ArtNix_eventInPorts(sf))->size;
      for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
        Z i = t_2->value[t_4];
        if (Option_8E9F45_nonEmpty_(sf, MS_2590FE_at(proj_ArtNix_data(sf), i))) {

          sfUpdateLoc(54);
          r = &_r;
          DeclNewIS_82ABD8(t_1);
          IS_82ABD8__append((IS_82ABD8) &t_1, sf, r, i);
          Type_assign(r, ((IS_82ABD8) &t_1), sizeof(struct IS_82ABD8));
        }
      }
    }
    DeclNewart_EventTriggered(t_5);
    art_EventTriggered_apply(sf, &t_5, (IS_82ABD8) r);
    Type_assign(result, (&t_5), sizeof(struct art_EventTriggered));
  }
}

Unit proj_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "receiveInput", 0);

  sfUpdateLoc(61);
  proj_ArtNix_frozen_a(sf, (MS_2590FE) proj_ArtNix_data(sf));

  sfUpdateLoc(62);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(63);
      Type_assign(MS_2590FE_at(proj_ArtNix_data(sf), i), proj_ArtNix_noData(sf), sizeof(union Option_8E9F45));
    }
  }
}

void proj_ArtNix_getValue(Option_8E9F45 result, StackFrame caller, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(proj_ArtNix_frozen(sf), portId), sizeof(union Option_8E9F45));
}

Unit proj_ArtNix_putValue(StackFrame caller, Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "proj.ArtNix", "putValue", 0);

  sfUpdateLoc(68);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(sf, &t_0, (art_DataContent) data);
  Type_assign(MS_2590FE_at(proj_ArtNix_outgoing(sf), portId), (&t_0), sizeof(union Option_8E9F45));
}