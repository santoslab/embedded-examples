#include <all.h>

B building_control_PlatformNix_initialized_ = F;

Z _building_control_PlatformNix_seed;
struct IS_82ABD8 _building_control_PlatformNix_ids;

void building_control_PlatformNix_init(STACK_FRAME_ONLY) {
  if (building_control_PlatformNix_initialized_) return;
  building_control_PlatformNix_initialized_ = T;
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "<init>", 0);
  _building_control_PlatformNix_seed = Z_C(0);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&_building_control_PlatformNix_ids, (&t_0), sizeof(struct IS_82ABD8));
}

Z building_control_PlatformNix_seed(STACK_FRAME_ONLY) {
  building_control_PlatformNix_init(CALLER_LAST);
  return _building_control_PlatformNix_seed;
}

void building_control_PlatformNix_seed_a(STACK_FRAME Z p_seed) {
  building_control_PlatformNix_init(CALLER_LAST);
  _building_control_PlatformNix_seed = p_seed;
}

IS_82ABD8 building_control_PlatformNix_ids(STACK_FRAME_ONLY) {
  building_control_PlatformNix_init(CALLER_LAST);
  return (IS_82ABD8) &_building_control_PlatformNix_ids;
}

void building_control_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids) {
  building_control_PlatformNix_init(CALLER_LAST);
  Type_assign(&_building_control_PlatformNix_ids, p_ids, sizeof(struct IS_82ABD8));
}

static inline B building_control_PlatformNix_initialise_match_17_12(STACK_FRAME Option_882048 t_0, Z *_port_17_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_17_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B building_control_PlatformNix_initialise_match_21_12(STACK_FRAME Option_882048 t_0) {
  return T;
}

Unit building_control_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "initialise", 0);

  sfUpdateLoc(15);
  building_control_PlatformNix_seed_a(SF (Z) seed);

  sfUpdateLoc(16);
  Option_882048 t_0 = portOpt;
  B match_16_5 = F;
  if (!match_16_5) {
    Z port_17_17;
    match_16_5 = building_control_PlatformNix_initialise_match_17_12(SF t_0, &port_17_17);
    if (match_16_5) {

      sfUpdateLoc(18);
      Z id = Z__add(seed, port_17_17);

      sfUpdateLoc(19);
      Z t_1 = building_control_SharedMemory_create(SF id);

      sfUpdateLoc(20);
      DeclNewIS_82ABD8(t_2);
      IS_82ABD8__append(SF (IS_82ABD8) &t_2, building_control_PlatformNix_ids(SF_LAST), id);
      building_control_PlatformNix_ids_a(SF (IS_82ABD8) ((IS_82ABD8) &t_2));
    }
  }
  if (!match_16_5) {
    match_16_5 = building_control_PlatformNix_initialise_match_21_12(SF t_0);
    if (match_16_5) {
    }
  }
  sfAssert(match_16_5, "Error when pattern matching.");
}

static inline B building_control_PlatformNix_receive_match_27_12(STACK_FRAME Option_882048 t_0, Z *_port_27_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_27_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B building_control_PlatformNix_receive_match_30_12(STACK_FRAME Option_882048 t_0) {
  return T;
}

void building_control_PlatformNix_receive(STACK_FRAME Tuple2_D0E3BB result, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "receive", 0);

  sfUpdateLoc(26);
  Option_882048 t_0 = portOpt;
  B match_26_5 = F;
  if (!match_26_5) {
    Z port_27_17;
    match_26_5 = building_control_PlatformNix_receive_match_27_12(SF t_0, &port_27_17);
    if (match_26_5) {

      sfUpdateLoc(28);
      DeclNewart_DataContent(t_1);
      building_control_SharedMemory_receive(SF (art_DataContent) &t_1, Z__add(building_control_PlatformNix_seed(SF_LAST), port_27_17));
      art_DataContent d = (art_DataContent) ((art_DataContent) &t_1);
      DeclNewTuple2_D0E3BB(t_2);
      Tuple2_D0E3BB_apply(SF &t_2, port_27_17, d);
      Type_assign(result, (&t_2), sizeof(struct Tuple2_D0E3BB));
    }
  }
  if (!match_26_5) {
    match_26_5 = building_control_PlatformNix_receive_match_30_12(SF t_0);
    if (match_26_5) {

      sfUpdateLoc(30);
      DeclNewString(t_3);
      String t_4 = (String) &t_3;
      String_string_(SF t_4, string("Unsupported receive operation without port."));
      sfAbort(t_4->value);
      abort();
    }
  }
  sfAssert(match_26_5, "Error when pattern matching.");
}

static inline B building_control_PlatformNix_receiveAsync_match_48_16(STACK_FRAME Option_8E9F45 t_2, art_DataContent *_d_48_21) {
  if (!Some_D29615__is(SF t_2)) return F;
  *_d_48_21 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_2));
  return T;
}

static inline B building_control_PlatformNix_receiveAsync_match_49_16(STACK_FRAME Option_8E9F45 t_2) {
  return T;
}

static inline B building_control_PlatformNix_receiveAsync_match_45_12(STACK_FRAME Option_882048 t_0, Z *_port_45_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_45_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B building_control_PlatformNix_receiveAsync_match_51_12(STACK_FRAME Option_882048 t_0) {
  return T;
}

void building_control_PlatformNix_receiveAsync(STACK_FRAME Option_02FA6D result, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "receiveAsync", 0);

  sfUpdateLoc(44);
  Option_882048 t_0 = portOpt;
  B match_44_5 = F;
  if (!match_44_5) {
    Z port_45_17;
    match_44_5 = building_control_PlatformNix_receiveAsync_match_45_12(SF t_0, &port_45_17);
    if (match_44_5) {

      sfUpdateLoc(46);
      DeclNewOption_8E9F45(t_1);
      building_control_SharedMemory_receiveAsync(SF (Option_8E9F45) &t_1, Z__add(building_control_PlatformNix_seed(SF_LAST), port_45_17));
      Option_8E9F45 dOpt = (Option_8E9F45) ((Option_8E9F45) &t_1);

      sfUpdateLoc(47);
      Option_8E9F45 t_2 = dOpt;
      B match_47_9 = F;
      if (!match_47_9) {
        art_DataContent d_48_21;
        match_47_9 = building_control_PlatformNix_receiveAsync_match_48_16(SF t_2, &d_48_21);
        if (match_47_9) {
          DeclNewTuple2_D0E3BB(t_4);
          Tuple2_D0E3BB_apply(SF &t_4, port_45_17, d_48_21);
          DeclNewSome_E9D1E5(t_3);
          Some_E9D1E5_apply(SF &t_3, (Tuple2_D0E3BB) (&t_4));
          Type_assign(result, (&t_3), sizeof(struct Some_E9D1E5));
        }
      }
      if (!match_47_9) {
        match_47_9 = building_control_PlatformNix_receiveAsync_match_49_16(SF t_2);
        if (match_47_9) {
          DeclNewNone_93AA2B(t_5);
          None_93AA2B_apply(SF &t_5);
          Type_assign(result, (&t_5), sizeof(struct None_93AA2B));
        }
      }
      sfAssert(match_47_9, "Error when pattern matching.");
    }
  }
  if (!match_44_5) {
    match_44_5 = building_control_PlatformNix_receiveAsync_match_51_12(SF t_0);
    if (match_44_5) {

      sfUpdateLoc(51);
      DeclNewString(t_6);
      String t_7 = (String) &t_6;
      String_string_(SF t_7, string("Unsupported receive operation without port."));
      sfAbort(t_7->value);
      abort();
    }
  }
  sfAssert(match_44_5, "Error when pattern matching.");
}

B building_control_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "sendAsync", 0);

  sfUpdateLoc(39);
  B r = building_control_SharedMemory_sendAsync(SF port, Z__add(building_control_PlatformNix_seed(SF_LAST), port), (art_DataContent) data);
  return r;
}

Unit building_control_PlatformNix_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "building_control.PlatformNix", "finalise", 0);

  sfUpdateLoc(56);
  {
    IS_82ABD8 t_0 = building_control_PlatformNix_ids(SF_LAST);
    int8_t t_1 = (building_control_PlatformNix_ids(SF_LAST))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z id = t_0->value[t_2];

      sfUpdateLoc(57);
      building_control_SharedMemory_remove(SF id);
    }
  }
}