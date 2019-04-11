#include <all.h>

B math_library_PlatformNix_initialized_ = F;

Z _math_library_PlatformNix_seed;
union Option_882048 _math_library_PlatformNix_msgidOpt;

void math_library_PlatformNix_init(StackFrame caller) {
  if (math_library_PlatformNix_initialized_) return;
  math_library_PlatformNix_initialized_ = T;
  DeclNewStackFrame(caller, "PlatformNix.scala", "math_library.PlatformNix", "<init>", 0);
  _math_library_PlatformNix_seed = Z_C(0);
  DeclNewNone_76463B(t_0);
  None_76463B_apply(sf, &t_0);
  Type_assign(&_math_library_PlatformNix_msgidOpt, (&t_0), sizeof(struct None_76463B));
}

Z math_library_PlatformNix_seed(StackFrame caller) {
  math_library_PlatformNix_init(caller);
  return _math_library_PlatformNix_seed;
}

void math_library_PlatformNix_seed_a(StackFrame caller, Z p_seed) {
  math_library_PlatformNix_init(caller);
  _math_library_PlatformNix_seed = p_seed;
}

Option_882048 math_library_PlatformNix_msgidOpt(StackFrame caller) {
  math_library_PlatformNix_init(caller);
  return (Option_882048) &_math_library_PlatformNix_msgidOpt;
}

void math_library_PlatformNix_msgidOpt_a(StackFrame caller, Option_882048 p_msgidOpt) {
  math_library_PlatformNix_init(caller);
  Type_assign(&_math_library_PlatformNix_msgidOpt, p_msgidOpt, sizeof(union Option_882048));
}

Unit math_library_PlatformNix_initialise(StackFrame caller, Z seed, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "math_library.PlatformNix", "initialise", 0);

  sfUpdateLoc(15);
  math_library_PlatformNix_seed_a(sf, (Z) seed);

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
      Z msgid = math_library_MessageQueue_create(sf, Z__add(seed, port_17_17));

      sfUpdateLoc(19);
      DeclNewSome_488F47(t_1);
      Some_488F47_apply(sf, &t_1, msgid);
      math_library_PlatformNix_msgidOpt_a(sf, (Option_882048) (&t_1));
    }
  }
  if (!match_16) {
    match_16 = T;
    if (match_16) {
    }
  }
  sfAssert(match_16, "Error when pattern matching.");
}

void math_library_PlatformNix_receive(Tuple2_D0E3BB result, StackFrame caller, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "math_library.PlatformNix", "receive", 0);

  sfUpdateLoc(25);
  DeclNewTuple2_D0E3BB(t_0);
  math_library_MessageQueue_receive((Tuple2_D0E3BB) &t_0, sf);
  Tuple2_D0E3BB p = (Tuple2_D0E3BB) ((Tuple2_D0E3BB) &t_0);

  sfUpdateLoc(26);
  DeclNewOption_882048(t_1);
  Type_assign(&t_1, portOpt, sizeof(union Option_882048));
  B match_26 = F;
  if (!match_26) {
    match_26 = T;
    Z port_27_17;
    match_26 = match_26 && Some_488F47__is(sf, &t_1);
    if (match_26) {
      port_27_17 = Some_488F47_value_(Some_488F47__as(sf, &t_1));
    }
    if (match_26) {

      sfUpdateLoc(27);
      if (!(Z__eq(Tuple2_D0E3BB_1(p), port_27_17))) { sfAbort("Assertion failure"); }
    }
  }
  if (!match_26) {
    match_26 = T;
    if (match_26) {
    }
  }
  sfAssert(match_26, "Error when pattern matching.");
  Type_assign(result, p, sizeof(struct Tuple2_D0E3BB));
}

Unit math_library_PlatformNix_send(StackFrame caller, Z app, Z port, art_DataContent data) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "math_library.PlatformNix", "send", 0);

  sfUpdateLoc(34);
  math_library_MessageQueue_send(sf, Z__add(math_library_PlatformNix_seed(sf), app), port, (art_DataContent) data);
}

Unit math_library_PlatformNix_finalise(StackFrame caller) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "math_library.PlatformNix", "finalise", 0);

  sfUpdateLoc(51);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, math_library_PlatformNix_msgidOpt(sf), sizeof(union Option_882048));
  B match_51 = F;
  if (!match_51) {
    match_51 = T;
    Z msgid_52_17;
    match_51 = match_51 && Some_488F47__is(sf, &t_0);
    if (match_51) {
      msgid_52_17 = Some_488F47_value_(Some_488F47__as(sf, &t_0));
    }
    if (match_51) {

      sfUpdateLoc(52);
      math_library_MessageQueue_remove(sf, msgid_52_17);
    }
  }
  if (!match_51) {
    match_51 = T;
    if (match_51) {
    }
  }
  sfAssert(match_51, "Error when pattern matching.");
}