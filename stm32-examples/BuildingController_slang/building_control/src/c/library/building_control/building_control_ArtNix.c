#include <all.h>

B building_control_ArtNix_initialized_ = F;

Z _building_control_ArtNix_maxPortIds;
struct art_TimeTriggered _building_control_ArtNix_timeTriggered;
struct MS_2590FE _building_control_ArtNix_data;
union Option_8E9F45 _building_control_ArtNix_noData;
struct MS_B5E3E6 _building_control_ArtNix_connection;
struct MS_30A5B4 _building_control_ArtNix_eventInPorts;
struct MS_2590FE _building_control_ArtNix_frozen;
struct MS_2590FE _building_control_ArtNix_outgoing;
B _building_control_ArtNix_isTimeDispatch;

void building_control_ArtNix_init(STACK_FRAME_ONLY) {
  if (building_control_ArtNix_initialized_) return;
  building_control_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "<init>", 0);
  _building_control_ArtNix_maxPortIds = Z__add(building_control_IPCPorts_Main(SF_LAST), Z_C(1));
  DeclNewart_TimeTriggered(t_0);
  art_TimeTriggered_apply(SF &t_0);
  Type_assign(&_building_control_ArtNix_timeTriggered, (&t_0), sizeof(struct art_TimeTriggered));
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMS_2590FE(t_2);
  MS_2590FE_create(SF (MS_2590FE) &t_2, building_control_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_1));
  Type_assign(&_building_control_ArtNix_data, ((MS_2590FE) &t_2), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_3);
  None_964667_apply(SF &t_3);
  Type_assign(&_building_control_ArtNix_noData, (&t_3), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_B5E3E6(_r);
  MS_B5E3E6 r = (MS_B5E3E6) &_r;
  STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_4);
  t_4.size = (int8_t) 0;
  DeclNewMS_B5E3E6(t_5);
  MS_B5E3E6_create(SF (MS_B5E3E6) &t_5, building_control_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_4));
  Type_assign(r, ((MS_B5E3E6) &t_5), sizeof(struct MS_B5E3E6));

  sfUpdateLoc(19);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_6);
  t_6.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_7);
  Tuple2_EC3B57_apply(SF &t_7, building_control_IPCPorts_TempControl_i_App(SF_LAST), art_Port_C61295_id_(building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST))));
  IS_AA0F82_up(&t_6, 0, (Tuple2_EC3B57) (&t_7));
  MS_B5E3E6_up(r, art_Port_C61295_id_(building_control_BuildingControl_TempSensor_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(SF_LAST))), (IS_AA0F82) (&t_6));

  sfUpdateLoc(22);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_8);
  t_8.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_9);
  Tuple2_EC3B57_apply(SF &t_9, building_control_IPCPorts_Fan_i_App(SF_LAST), art_Port_69270F_id_(building_control_BuildingControl_Fan_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_fan(SF_LAST))));
  IS_AA0F82_up(&t_8, 0, (Tuple2_EC3B57) (&t_9));
  MS_B5E3E6_up(r, art_Port_69270F_id_(building_control_BuildingControl_TempControl_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST))), (IS_AA0F82) (&t_8));
  Type_assign(&_building_control_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  STATIC_ASSERT(2 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  DeclNewMS_30A5B4(t_10);
  t_10.size = (int8_t) 2;
  MS_30A5B4_up(&t_10, 0, (Z) art_Port_69270F_id_(building_control_BuildingControl_Fan_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_fan(SF_LAST))));
  MS_30A5B4_up(&t_10, 1, (Z) art_Port_C61295_id_(building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST))));
  Type_assign(&_building_control_ArtNix_eventInPorts, (&t_10), sizeof(struct MS_30A5B4));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_11);
  t_11.size = (int8_t) 0;
  Type_assign(&_building_control_ArtNix_frozen, (&t_11), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_12);
  None_964667_apply(SF &t_12);
  DeclNewMS_2590FE(t_13);
  MS_2590FE_create(SF (MS_2590FE) &t_13, building_control_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_12));
  Type_assign(&_building_control_ArtNix_outgoing, ((MS_2590FE) &t_13), sizeof(struct MS_2590FE));
  _building_control_ArtNix_isTimeDispatch = F;
}

Z building_control_ArtNix_maxPortIds(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return _building_control_ArtNix_maxPortIds;
}

art_TimeTriggered building_control_ArtNix_timeTriggered(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (art_TimeTriggered) &_building_control_ArtNix_timeTriggered;
}

MS_2590FE building_control_ArtNix_data(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_building_control_ArtNix_data;
}

Option_8E9F45 building_control_ArtNix_noData(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_building_control_ArtNix_noData;
}

MS_B5E3E6 building_control_ArtNix_connection(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_building_control_ArtNix_connection;
}

MS_30A5B4 building_control_ArtNix_eventInPorts(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (MS_30A5B4) &_building_control_ArtNix_eventInPorts;
}

MS_2590FE building_control_ArtNix_frozen(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_building_control_ArtNix_frozen;
}

void building_control_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  building_control_ArtNix_init(CALLER_LAST);
  Type_assign(&_building_control_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE building_control_ArtNix_outgoing(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_building_control_ArtNix_outgoing;
}

void building_control_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  building_control_ArtNix_init(CALLER_LAST);
  Type_assign(&_building_control_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B building_control_ArtNix_isTimeDispatch(STACK_FRAME_ONLY) {
  building_control_ArtNix_init(CALLER_LAST);
  return _building_control_ArtNix_isTimeDispatch;
}

void building_control_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  building_control_ArtNix_init(CALLER_LAST);
  _building_control_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit building_control_ArtNix_timeDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(41);
  building_control_ArtNix_isTimeDispatch_a(SF (B) T);
}

Unit building_control_ArtNix_eventDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "eventDispatch", 0);

  sfUpdateLoc(45);
  building_control_ArtNix_isTimeDispatch_a(SF (B) F);
}

Unit building_control_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "updateData", 0);

  sfUpdateLoc(37);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) d);
  MS_2590FE_up(building_control_ArtNix_data(SF_LAST), port, (Option_8E9F45) (&t_0));
}

Unit building_control_ArtNix_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "run", 0);
}

Unit building_control_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "logInfo", 0);

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

void building_control_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "dispatchStatus", 0);

  sfUpdateLoc(49);
  if (building_control_ArtNix_isTimeDispatch(SF_LAST)) {
    Type_assign(result, building_control_ArtNix_timeTriggered(SF_LAST), sizeof(struct art_TimeTriggered));
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
      MS_30A5B4 t_2 = building_control_ArtNix_eventInPorts(SF_LAST);
      int8_t t_3 = (building_control_ArtNix_eventInPorts(SF_LAST))->size;
      for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
        Z i = t_2->value[t_4];
        if (Option_8E9F45_nonEmpty_(SF MS_2590FE_at(building_control_ArtNix_data(SF_LAST), i))) {

          sfUpdateLoc(54);
          r = &_r;
          DeclNewIS_82ABD8(t_1);
          IS_82ABD8__append(SF (IS_82ABD8) &t_1, r, i);
          Type_assign(r, ((IS_82ABD8) &t_1), sizeof(struct IS_82ABD8));
        }
      }
    }
    DeclNewart_EventTriggered(t_5);
    art_EventTriggered_apply(SF &t_5, (IS_82ABD8) r);
    Type_assign(result, (&t_5), sizeof(struct art_EventTriggered));
  }
}

Unit building_control_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "receiveInput", 0);

  sfUpdateLoc(61);
  building_control_ArtNix_frozen_a(SF (MS_2590FE) building_control_ArtNix_data(SF_LAST));

  sfUpdateLoc(62);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(63);
      MS_2590FE_up(building_control_ArtNix_data(SF_LAST), i, (Option_8E9F45) building_control_ArtNix_noData(SF_LAST));
    }
  }
}

void building_control_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(building_control_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
}

static inline B building_control_ArtNix_sendOutput_match_78_14(STACK_FRAME Option_8E9F45 t_0, art_DataContent *_d_78_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_d_78_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B building_control_ArtNix_sendOutput_match_83_14(STACK_FRAME Option_8E9F45 t_0) {
  return T;
}

static inline B building_control_ArtNix_sendOutput_match_89_14(STACK_FRAME Option_8E9F45 t_8, art_DataContent *_d_89_19) {
  if (!Some_D29615__is(SF t_8)) return F;
  *_d_89_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_8));
  return T;
}

static inline B building_control_ArtNix_sendOutput_match_94_14(STACK_FRAME Option_8E9F45 t_8) {
  return T;
}

Unit building_control_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "sendOutput", 0);

  sfUpdateLoc(76);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(77);
      Option_8E9F45 t_0 = MS_2590FE_at(building_control_ArtNix_outgoing(SF_LAST), p);
      B match_77_7 = F;
      if (!match_77_7) {
        art_DataContent d_78_19;
        match_77_7 = building_control_ArtNix_sendOutput_match_78_14(SF t_0, &d_78_19);
        if (match_77_7) {

          sfUpdateLoc(79);
          MS_2590FE_up(building_control_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) building_control_ArtNix_noData(SF_LAST));

          sfUpdateLoc(80);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(building_control_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(building_control_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(81);
              B t_1 = building_control_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_78_19);                
            }
          }
        }
      }
      if (!match_77_7) {
        match_77_7 = building_control_ArtNix_sendOutput_match_83_14(SF t_0);
        if (match_77_7) {
        }
      }
      sfAssert(match_77_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(87);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(88);
      Option_8E9F45 t_8 = MS_2590FE_at(building_control_ArtNix_outgoing(SF_LAST), p);
      B match_88_7 = F;
      if (!match_88_7) {
        art_DataContent d_89_19;
        match_88_7 = building_control_ArtNix_sendOutput_match_89_14(SF t_8, &d_89_19);
        if (match_88_7) {

          sfUpdateLoc(90);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(building_control_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(building_control_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(91);
              B t_9 = building_control_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_89_19);                
            }
          }

          sfUpdateLoc(93);
          MS_2590FE_up(building_control_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) building_control_ArtNix_noData(SF_LAST));
        }
      }
      if (!match_88_7) {
        match_88_7 = building_control_ArtNix_sendOutput_match_94_14(SF t_8);
        if (match_88_7) {
        }
      }
      sfAssert(match_88_7, "Error when pattern matching.");
    }
  }
}

Unit building_control_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "building_control.ArtNix", "putValue", 0);

  sfUpdateLoc(68);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) data);
  MS_2590FE_up(building_control_ArtNix_outgoing(SF_LAST), portId, (Option_8E9F45) (&t_0));
}