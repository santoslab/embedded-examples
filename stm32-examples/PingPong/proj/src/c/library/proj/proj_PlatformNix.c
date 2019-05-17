#include <all.h>

B proj_PlatformNix_initialized_ = F;

Z _proj_PlatformNix_seed;
struct IS_82ABD8 _proj_PlatformNix_ids;

void proj_PlatformNix_init(StackFrame caller) {
  if (proj_PlatformNix_initialized_) return;
  proj_PlatformNix_initialized_ = T;
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "<init>", 0);
  _proj_PlatformNix_seed = Z_C(0);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&_proj_PlatformNix_ids, (&t_0), sizeof(struct IS_82ABD8));
}

Z proj_PlatformNix_seed(StackFrame caller) {
  proj_PlatformNix_init(caller);
  return _proj_PlatformNix_seed;
}

void proj_PlatformNix_seed_a(StackFrame caller, Z p_seed) {
  proj_PlatformNix_init(caller);
  _proj_PlatformNix_seed = p_seed;
}

IS_82ABD8 proj_PlatformNix_ids(StackFrame caller) {
  proj_PlatformNix_init(caller);
  return (IS_82ABD8) &_proj_PlatformNix_ids;
}

void proj_PlatformNix_ids_a(StackFrame caller, IS_82ABD8 p_ids) {
  proj_PlatformNix_init(caller);
  Type_assign(&_proj_PlatformNix_ids, p_ids, sizeof(struct IS_82ABD8));
}

void proj_PlatformNix_receive(Tuple2_D0E3BB result, StackFrame caller, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "receive", 0);

  sfUpdateLoc(26);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_26 = F;
  if (!match_26) {
    match_26 = T;
    Z port_27_17;
    match_26 = match_26 && Some_488F47__is(sf, &t_0);
    if (match_26) {
      port_27_17 = Some_488F47_value_(Some_488F47__as(sf, &t_0));
    }
    if (match_26) {

      sfUpdateLoc(28);
      DeclNewart_DataContent(t_1);
      proj_SharedMemory_receive((art_DataContent) &t_1, sf, Z__add(proj_PlatformNix_seed(sf), port_27_17));
      art_DataContent d = (art_DataContent) ((art_DataContent) &t_1);
      DeclNewTuple2_D0E3BB(t_2);
      Tuple2_D0E3BB_apply(sf, &t_2, port_27_17, d);
      Type_assign(result, (&t_2), sizeof(struct Tuple2_D0E3BB));
    }
  }
  if (!match_26) {
    match_26 = T;
    if (match_26) {

      sfUpdateLoc(30);
      DeclNewString(t_3);
      String t_4 = (String) &t_3;
      String_string(t_4, sf, string("Unsupported receive operation without port."));
      sfAbort(t_4->value);
      abort();
    }
  }
  sfAssert(match_26, "Error when pattern matching.");
}

void proj_PlatformNix_receiveAsync(Option_02FA6D result, StackFrame caller, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "receiveAsync", 0);

  sfUpdateLoc(44);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_44 = F;
  if (!match_44) {
    match_44 = T;
    Z port_45_17;
    match_44 = match_44 && Some_488F47__is(sf, &t_0);
    if (match_44) {
      port_45_17 = Some_488F47_value_(Some_488F47__as(sf, &t_0));
    }
    if (match_44) {

      sfUpdateLoc(46);
      DeclNewOption_8E9F45(t_1);
      proj_SharedMemory_receiveAsync((Option_8E9F45) &t_1, sf, Z__add(proj_PlatformNix_seed(sf), port_45_17));
      Option_8E9F45 dOpt = (Option_8E9F45) ((Option_8E9F45) &t_1);

      sfUpdateLoc(47);
      DeclNewOption_8E9F45(t_2);
      Type_assign(&t_2, dOpt, sizeof(union Option_8E9F45));
      B match_47 = F;
      if (!match_47) {
        match_47 = T;
        art_DataContent d_48_21;
        match_47 = match_47 && Some_D29615__is(sf, &t_2);
        if (match_47) {
          d_48_21 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_2));
        }
        if (match_47) {
          DeclNewTuple2_D0E3BB(t_4);
          Tuple2_D0E3BB_apply(sf, &t_4, port_45_17, d_48_21);
          DeclNewSome_E9D1E5(t_3);
          Some_E9D1E5_apply(sf, &t_3, (Tuple2_D0E3BB) (&t_4));
          Type_assign(result, (&t_3), sizeof(struct Some_E9D1E5));
        }
      }
      if (!match_47) {
        match_47 = T;
        if (match_47) {
          DeclNewNone_93AA2B(t_5);
          None_93AA2B_apply(sf, &t_5);
          Type_assign(result, (&t_5), sizeof(struct None_93AA2B));
        }
      }
      sfAssert(match_47, "Error when pattern matching.");
    }
  }
  if (!match_44) {
    match_44 = T;
    if (match_44) {

      sfUpdateLoc(51);
      DeclNewString(t_6);
      String t_7 = (String) &t_6;
      String_string(t_7, sf, string("Unsupported receive operation without port."));
      sfAbort(t_7->value);
      abort();
    }
  }
  sfAssert(match_44, "Error when pattern matching.");
}

Unit proj_PlatformNix_initialise(StackFrame caller, Z seed, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "initialise", 0);

  sfUpdateLoc(15);
  proj_PlatformNix_seed_a(sf, (Z) seed);

  sfUpdateLoc(16);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_16 = F;
  if (!match_16) {
    match_16 = T;
    Z port_17_17;
    match_16 = match_16 && Some_488F47__is(sf, &t_0);
    if (match_16) {
      port_17_17 = Some_488F47_value_(Some_488F47__as(sf, &t_0));
    }
    if (match_16) {

      sfUpdateLoc(18);
      Z id = Z__add(seed, port_17_17);

      sfUpdateLoc(19);
      Z t_1 = proj_SharedMemory_create(sf, id);

      sfUpdateLoc(20);
      DeclNewIS_82ABD8(t_2);
      IS_82ABD8__append((IS_82ABD8) &t_2, sf, proj_PlatformNix_ids(sf), id);
      proj_PlatformNix_ids_a(sf, (IS_82ABD8) ((IS_82ABD8) &t_2));
    }
  }
  if (!match_16) {
    match_16 = T;
    if (match_16) {
    }
  }
  sfAssert(match_16, "Error when pattern matching.");
}

B proj_PlatformNix_sendAsync(StackFrame caller, Z app, Z port, art_DataContent data) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "sendAsync", 0);

  sfUpdateLoc(39);
  B r = proj_SharedMemory_sendAsync(sf, port, Z__add(proj_PlatformNix_seed(sf), port), (art_DataContent) data);
  return r;
}

Unit proj_PlatformNix_finalise(StackFrame caller) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "proj.PlatformNix", "finalise", 0);

  sfUpdateLoc(56);
  {
    IS_82ABD8 t_0 = proj_PlatformNix_ids(sf);
    int8_t t_1 = (proj_PlatformNix_ids(sf))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z id = t_0->value[t_2];

      sfUpdateLoc(57);
      proj_SharedMemory_remove(sf, id);
    }
  }
}