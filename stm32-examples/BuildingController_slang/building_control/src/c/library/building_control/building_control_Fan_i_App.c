#include <all.h>

B building_control_Fan_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_Fan_i_App_entryPoints;
Z _building_control_Fan_i_App_fanCmdPortId;
union Option_882048 _building_control_Fan_i_App_fanCmdPortIdOpt;

void building_control_Fan_i_App_init(StackFrame caller) {
  if (building_control_Fan_i_App_initialized_) return;
  building_control_Fan_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "<init>", 0);
  Type_assign(&_building_control_Fan_i_App_entryPoints, building_control_BuildingControl_Fan_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_fan(sf)), sizeof(union art_Bridge_EntryPoints));
  _building_control_Fan_i_App_fanCmdPortId = art_Port_69270F_id_(building_control_BuildingControl_Fan_i_Bridge_fanCmd_(building_control_Arch_BuildingControlDemo_i_Instance_fan(sf)));
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(sf, &t_0, building_control_Fan_i_App_fanCmdPortId(sf));
  Type_assign(&_building_control_Fan_i_App_fanCmdPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints building_control_Fan_i_App_entryPoints(StackFrame caller) {
  building_control_Fan_i_App_init(caller);
  return (art_Bridge_EntryPoints) &_building_control_Fan_i_App_entryPoints;
}

Z building_control_Fan_i_App_fanCmdPortId(StackFrame caller) {
  building_control_Fan_i_App_init(caller);
  return _building_control_Fan_i_App_fanCmdPortId;
}

Option_882048 building_control_Fan_i_App_fanCmdPortIdOpt(StackFrame caller) {
  building_control_Fan_i_App_init(caller);
  return (Option_882048) &_building_control_Fan_i_App_fanCmdPortIdOpt;
}

Z building_control_Fan_i_App_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "main", 0);

  sfUpdateLoc(39);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(40);
    DeclNewOption_882048(t_0);
    Z_apply(&t_0, IS_948B60_at(args, Z_C(0)));
    Z n = Option_882048_get_(sf, (&t_0));
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
  Z appPortId = building_control_IPCPorts_Fan_i_App(sf);

  sfUpdateLoc(47);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(sf, &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(48);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(50);
  building_control_Fan_i_App_initialize(sf, seed);

  sfUpdateLoc(52);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_3, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(54);
  art_Bridge_EntryPoints_initialise_(sf, building_control_Fan_i_App_entryPoints(sf));

  sfUpdateLoc(56);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_5, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(58);
  String_cprint(string("Fan_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(60);
  building_control_ArtNix_eventDispatch(sf);

  sfUpdateLoc(62);
  B terminated = F;

  sfUpdateLoc(63);
  B t_63_5 = (!terminated);
  while(t_63_5) {

    sfUpdateLoc(64);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync((Option_02FA6D) &t_7, sf, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(65);
    if (Option_02FA6D_isEmpty_(sf, termOpt)) {

      sfUpdateLoc(66);
      building_control_Fan_i_App_compute(sf);
    } else {

      sfUpdateLoc(68);
      terminated = T;
    }

    sfUpdateLoc(63);
    t_63_5 = (!terminated);
  }

  sfUpdateLoc(71);
  building_control_Fan_i_App_exit(sf);
  return Z_C(0);
}

Unit building_control_Fan_i_App_atExit(StackFrame caller) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "atExit", 0);

  sfUpdateLoc(82);
  building_control_Fan_i_App_exit(sf);
}

Unit building_control_Fan_i_App_initialize(StackFrame caller, Z seed) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "initialize", 0);

  sfUpdateLoc(18);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) building_control_Fan_i_App_fanCmdPortIdOpt(sf));

  sfUpdateLoc(19);
  art_Art_run(sf, (art_ArchitectureDescription) building_control_Arch_ad(sf));
}

Unit building_control_Fan_i_App_compute(StackFrame caller) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "compute", 0);

  sfUpdateLoc(23);
  B dispatch = F;

  sfUpdateLoc(24);
  DeclNewOption_02FA6D(t_0);
  building_control_PlatformNix_receiveAsync((Option_02FA6D) &t_0, sf, (Option_882048) building_control_Fan_i_App_fanCmdPortIdOpt(sf));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_24 = F;
  if (!match_24) {
    match_24 = T;
    building_control_Base_Types_Boolean_Payload v_25_21;
    match_24 = match_24 && Some_E9D1E5__is(sf, &t_1);
    if (match_24) {
      if (match_24) {
        match_24 = match_24 && building_control_Base_Types_Boolean_Payload__is(sf, Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))));
        if (match_24) { v_25_21 = (building_control_Base_Types_Boolean_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))); }
      }
    }
    if (match_24) {

      sfUpdateLoc(25);
      building_control_ArtNix_updateData(sf, building_control_Fan_i_App_fanCmdPortId(sf), (art_DataContent) v_25_21);

      sfUpdateLoc(25);
      dispatch = T;
    }
  }
  if (!match_24) {
    match_24 = T;
    art_DataContent v_26_21;
    match_24 = match_24 && Some_E9D1E5__is(sf, &t_1);
    if (match_24) {
      if (match_24) {
        v_26_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1)));
      }
    }
    if (match_24) {

      sfUpdateLoc(26);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string((String) &t_4, sf, string("Unexpected payload on port "));
      Z_string((String) &t_4, sf, building_control_Fan_i_App_fanCmdPortId(sf));
      String_string((String) &t_4, sf, string(".  Expecting something of type Base_Types.Boolean_Payload but received "));
      art_DataContent_string((String) &t_4, sf, v_26_21);
      String_string((String) &t_4, sf, string(""));
      String_string(t_3, sf, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_24) {
    match_24 = T;
    match_24 = match_24 && None_93AA2B__is(sf, &t_1);
    if (match_24) {
    }
    if (match_24) {
    }
  }
  sfAssert(match_24, "Error when pattern matching.");

  sfUpdateLoc(29);
  if (dispatch) {

    sfUpdateLoc(30);
    art_Bridge_EntryPoints_compute_(sf, building_control_Fan_i_App_entryPoints(sf));

    sfUpdateLoc(31);
    building_control_Process_sleep(sf, Z_C(1000));
  } else {

    sfUpdateLoc(33);
    building_control_Process_sleep(sf, Z_C(10));
  }
}

Unit building_control_Fan_i_App_exit(StackFrame caller) {
  DeclNewStackFrame(caller, "Fan_i_App.scala", "building_control.Fan_i_App", "exit", 0);

  sfUpdateLoc(77);
  art_Bridge_EntryPoints_finalise_(sf, building_control_BuildingControl_Fan_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_fan(sf)));

  sfUpdateLoc(78);
  building_control_PlatformNix_finalise(sf);
}