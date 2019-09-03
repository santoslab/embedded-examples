#include <all.h>

B building_control_Fan_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_Fan_i_App_entryPoints;
Z _building_control_Fan_i_App_fanCmdPortId;
union Option_882048 _building_control_Fan_i_App_fanCmdPortIdOpt;

void building_control_Fan_i_App_init(STACK_FRAME_ONLY) {
  if (building_control_Fan_i_App_initialized_) return;
  building_control_Fan_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "<init>", 0);
  Type_assign(&_building_control_Fan_i_App_entryPoints, building_control_BuildingControl_Fan_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_fan(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _building_control_Fan_i_App_fanCmdPortId = art_Port_69270F_id_(building_control_BuildingControl_Fan_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_fan(SF_LAST)));
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, building_control_Fan_i_App_fanCmdPortId(SF_LAST));
  Type_assign(&_building_control_Fan_i_App_fanCmdPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints building_control_Fan_i_App_entryPoints(STACK_FRAME_ONLY) {
  building_control_Fan_i_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_building_control_Fan_i_App_entryPoints;
}

Z building_control_Fan_i_App_fanCmdPortId(STACK_FRAME_ONLY) {
  building_control_Fan_i_App_init(CALLER_LAST);
  return _building_control_Fan_i_App_fanCmdPortId;
}

Option_882048 building_control_Fan_i_App_fanCmdPortIdOpt(STACK_FRAME_ONLY) {
  building_control_Fan_i_App_init(CALLER_LAST);
  return (Option_882048) &_building_control_Fan_i_App_fanCmdPortIdOpt;
}

Z building_control_Fan_i_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "main", 0);

  sfUpdateLoc(39);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(40);
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

  sfUpdateLoc(46);
  Z appPortId = building_control_IPCPorts_Fan_i_App(SF_LAST);

  sfUpdateLoc(47);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(48);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(50);
  building_control_Fan_i_App_initialize(SF seed);

  sfUpdateLoc(52);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_3, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(54);
  art_Bridge_EntryPoints_initialise_(SF building_control_Fan_i_App_entryPoints(SF_LAST));

  sfUpdateLoc(56);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_5, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(58);
  String_cprint(string("Fan_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(60);
  building_control_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(62);
  B terminated = F;

  sfUpdateLoc(63);
  B t_63_5 = (!terminated);
  while(t_63_5) {

    sfUpdateLoc(64);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_7, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(65);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(66);
      building_control_Fan_i_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(68);
      terminated = T;
    }

    sfUpdateLoc(63);
    t_63_5 = (!terminated);
  }

  sfUpdateLoc(71);
  building_control_Fan_i_App_exit(SF_LAST);
  return Z_C(0);
}

Unit building_control_Fan_i_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "atExit", 0);

  sfUpdateLoc(82);
  building_control_Fan_i_App_exit(SF_LAST);
}

Unit building_control_Fan_i_App_initialize(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "initialize", 0);

  sfUpdateLoc(18);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) building_control_Fan_i_App_fanCmdPortIdOpt(SF_LAST));

  sfUpdateLoc(19);
  art_Art_run(SF (art_ArchitectureDescription) building_control_Arch_ad(SF_LAST));
}

static inline B building_control_Fan_i_App_compute_match_25_12(STACK_FRAME Option_02FA6D t_1, building_control_Base_Types_Boolean_Payload *_v_25_21) {
  if (!Some_E9D1E5__is(SF t_1)) return F;
  if (!building_control_Base_Types_Boolean_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1))))) return F;
  *_v_25_21 = (building_control_Base_Types_Boolean_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  return T;
}

static inline B building_control_Fan_i_App_compute_match_26_12(STACK_FRAME Option_02FA6D t_1, art_DataContent *_v_26_21) {
  if (!Some_E9D1E5__is(SF t_1)) return F;
  *_v_26_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_1)));
  return T;
}

static inline B building_control_Fan_i_App_compute_match_27_12(STACK_FRAME Option_02FA6D t_1) {
  if (!None_93AA2B__is(SF t_1)) return F;
  return T;
}

Unit building_control_Fan_i_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "compute", 0);

  sfUpdateLoc(23);
  B dispatch = F;

  sfUpdateLoc(24);
  DeclNewOption_02FA6D(t_0);
  building_control_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_0, (Option_882048) building_control_Fan_i_App_fanCmdPortIdOpt(SF_LAST));
  Option_02FA6D t_1 = ((Option_02FA6D) &t_0);
  B match_24_14 = F;
  if (!match_24_14) {
    building_control_Base_Types_Boolean_Payload v_25_21;
    match_24_14 = building_control_Fan_i_App_compute_match_25_12(SF t_1, &v_25_21);
    if (match_24_14) {

      sfUpdateLoc(25);
      building_control_ArtNix_updateData(SF building_control_Fan_i_App_fanCmdPortId(SF_LAST), (art_DataContent) v_25_21);

      sfUpdateLoc(25);
      dispatch = T;
    }
  }
  if (!match_24_14) {
    art_DataContent v_26_21;
    match_24_14 = building_control_Fan_i_App_compute_match_26_12(SF t_1, &v_26_21);
    if (match_24_14) {

      sfUpdateLoc(26);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string_(SF (String) &t_4, building_control_Fan_i_App_fanCmdPortId(SF_LAST));
      String_string_(SF (String) &t_4, string(".  Expecting something of type Base_Types.Boolean_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_26_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_24_14) {
    match_24_14 = building_control_Fan_i_App_compute_match_27_12(SF t_1);
    if (match_24_14) {
    }
  }
  sfAssert(match_24_14, "Error when pattern matching.");

  sfUpdateLoc(29);
  if (dispatch) {

    sfUpdateLoc(30);
    art_Bridge_EntryPoints_compute_(SF building_control_Fan_i_App_entryPoints(SF_LAST));

    sfUpdateLoc(31);
    building_control_Process_sleep(SF Z_C(1000));
  } else {

    sfUpdateLoc(33);
    building_control_Process_sleep(SF Z_C(10));
  }
}

Unit building_control_Fan_i_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "exit", 0);

  sfUpdateLoc(77);
  art_Bridge_EntryPoints_finalise_(SF building_control_BuildingControl_Fan_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_fan(SF_LAST)));

  sfUpdateLoc(78);
  building_control_PlatformNix_finalise(SF_LAST);
}