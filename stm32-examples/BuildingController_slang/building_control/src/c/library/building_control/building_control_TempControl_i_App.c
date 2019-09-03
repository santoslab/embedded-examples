#include <all.h>

B building_control_TempControl_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_TempControl_i_App_entryPoints;
Z _building_control_TempControl_i_App_currentTempPortId;
union Option_882048 _building_control_TempControl_i_App_currentTempPortIdOpt;

void building_control_TempControl_i_App_init(STACK_FRAME_ONLY) {
  if (building_control_TempControl_i_App_initialized_) return;
  building_control_TempControl_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "<init>", 0);
  Type_assign(&_building_control_TempControl_i_App_entryPoints, building_control_BuildingControl_TempControl_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _building_control_TempControl_i_App_currentTempPortId = art_Port_C61295_id_(building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST)));
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, building_control_TempControl_i_App_currentTempPortId(SF_LAST));
  Type_assign(&_building_control_TempControl_i_App_currentTempPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints building_control_TempControl_i_App_entryPoints(STACK_FRAME_ONLY) {
  building_control_TempControl_i_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_building_control_TempControl_i_App_entryPoints;
}

Z building_control_TempControl_i_App_currentTempPortId(STACK_FRAME_ONLY) {
  building_control_TempControl_i_App_init(CALLER_LAST);
  return _building_control_TempControl_i_App_currentTempPortId;
}

Option_882048 building_control_TempControl_i_App_currentTempPortIdOpt(STACK_FRAME_ONLY) {
  building_control_TempControl_i_App_init(CALLER_LAST);
  return (Option_882048) &_building_control_TempControl_i_App_currentTempPortIdOpt;
}

Z building_control_TempControl_i_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "main", 0);

  sfUpdateLoc(38);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(39);
    DeclNewOption_882048(t_0);
    Z_apply(&t_0, IS_948B60_at(args, Z_C(0)));
    Z n = Option_882048_get_(SF (&t_0));
    Z t_1;
    if (Z__eq(n, Z_C(0))) {
      t_1 = Z_C(1);
    } else {
      t_1 = n;
    }
    seed = t_1;
  } else {
    seed = Z_C(1);
  }

  sfUpdateLoc(45);
  Z appPortId = building_control_IPCPorts_TempControl_i_App(SF_LAST);

  sfUpdateLoc(46);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(47);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(49);
  building_control_TempControl_i_App_initialize(SF seed);

  sfUpdateLoc(51);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_3, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(53);
  art_Bridge_EntryPoints_initialise_(SF building_control_TempControl_i_App_entryPoints(SF_LAST));

  sfUpdateLoc(55);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_5, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(57);
  String_cprint(string("TempControl_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(59);
  building_control_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(61);
  B terminated = F;

  sfUpdateLoc(62);
  B t_62_5 = (!terminated);
  while(t_62_5) {

    sfUpdateLoc(63);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_7, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(64);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(65);
      building_control_TempControl_i_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(67);
      terminated = T;
    }

    sfUpdateLoc(62);
    t_62_5 = (!terminated);
  }

  sfUpdateLoc(70);
  building_control_TempControl_i_App_exit(SF_LAST);
  return Z_C(0);
}

Unit building_control_TempControl_i_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "atExit", 0);

  sfUpdateLoc(81);
  building_control_TempControl_i_App_exit(SF_LAST);
}

Unit building_control_TempControl_i_App_initialize(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "initialize", 0);

  sfUpdateLoc(17);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) building_control_TempControl_i_App_currentTempPortIdOpt(SF_LAST));

  sfUpdateLoc(18);
  art_Art_run(SF (art_ArchitectureDescription) building_control_Arch_ad(SF_LAST));
}

static inline B building_control_TempControl_i_App_compute_match_24_12(STACK_FRAME Option_02FA6D t_1, Z *_portId_24_18, building_control_Base_Types_Integer_16_Payload *_v_24_26) {
  if (!Some_E9D1E5__is(SF t_1)) return F;
  *_portId_24_18 = Tuple2_D0E3BB_1(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  if (!building_control_Base_Types_Integer_16_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1))))) return F;
  *_v_24_26 = (building_control_Base_Types_Integer_16_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  return T;
}

static inline B building_control_TempControl_i_App_compute_match_25_12(STACK_FRAME Option_02FA6D t_1, Z *_portId_25_18, art_DataContent *_v_25_26) {
  if (!Some_E9D1E5__is(SF t_1)) return F;
  *_portId_25_18 = Tuple2_D0E3BB_1(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  *_v_25_26 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  return T;
}

static inline B building_control_TempControl_i_App_compute_match_26_12(STACK_FRAME Option_02FA6D t_1) {
  if (!None_93AA2B__is(SF t_1)) return F;
  return T;
}

Unit building_control_TempControl_i_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "compute", 0);

  sfUpdateLoc(22);
  B dispatch = F;

  sfUpdateLoc(23);
  DeclNewOption_02FA6D(t_0);
  building_control_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_0, (Option_882048) building_control_TempControl_i_App_currentTempPortIdOpt(SF_LAST));
  Option_02FA6D t_1 = ((Option_02FA6D) &t_0);
  B match_23_14 = F;
  if (!match_23_14) {
    Z portId_24_18;
    building_control_Base_Types_Integer_16_Payload v_24_26;
    match_23_14 = building_control_TempControl_i_App_compute_match_24_12(SF t_1, &portId_24_18, &v_24_26);
    if (match_23_14) {

      sfUpdateLoc(24);
      building_control_ArtNix_updateData(SF building_control_TempControl_i_App_currentTempPortId(SF_LAST), (art_DataContent) v_24_26);

      sfUpdateLoc(24);
      dispatch = T;
    }
  }
  if (!match_23_14) {
    Z portId_25_18;
    art_DataContent v_25_26;
    match_23_14 = building_control_TempControl_i_App_compute_match_25_12(SF t_1, &portId_25_18, &v_25_26);
    if (match_23_14) {

      sfUpdateLoc(25);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string_(SF (String) &t_4, building_control_TempControl_i_App_currentTempPortId(SF_LAST));
      String_string_(SF (String) &t_4, string(".  Expecting something of type Base_Types.Integer_16_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_25_26);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_23_14) {
    match_23_14 = building_control_TempControl_i_App_compute_match_26_12(SF t_1);
    if (match_23_14) {
    }
  }
  sfAssert(match_23_14, "Error when pattern matching.");

  sfUpdateLoc(28);
  if (dispatch) {

    sfUpdateLoc(29);
    art_Bridge_EntryPoints_compute_(SF building_control_TempControl_i_App_entryPoints(SF_LAST));

    sfUpdateLoc(30);
    building_control_Process_sleep(SF Z_C(1000));
  } else {

    sfUpdateLoc(32);
    building_control_Process_sleep(SF Z_C(10));
  }
}

Unit building_control_TempControl_i_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "exit", 0);

  sfUpdateLoc(76);
  art_Bridge_EntryPoints_finalise_(SF building_control_BuildingControl_TempControl_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(SF_LAST)));

  sfUpdateLoc(77);
  building_control_PlatformNix_finalise(SF_LAST);
}