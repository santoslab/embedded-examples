#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
Z _art_Art_maxPorts;
struct StaticString _art_Art_logTitle;
struct MS_94FFA9 _art_Art_bridges;
struct MS_E444B2 _art_Art_connections;
struct MS_F55A18 _art_Art_ports;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  _art_Art_maxComponents = Z_C(3);
  _art_Art_maxPorts = Z_C(8);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
  DeclNewMNone_2A2E1D(t_0);
  MNone_2A2E1D_apply(SF &t_0);
  DeclNewMS_94FFA9(t_1);
  MS_94FFA9_create(SF (MS_94FFA9) &t_1, art_Art_maxComponents(SF_LAST), (MOption_EA1D29) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_94FFA9) &t_1), sizeof(struct MS_94FFA9));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  DeclNewMS_E444B2(t_3);
  MS_E444B2_create(SF (MS_E444B2) &t_3, art_Art_maxPorts(SF_LAST), (IS_82ABD8) (&t_2));
  Type_assign(&_art_Art_connections, ((MS_E444B2) &t_3), sizeof(struct MS_E444B2));
  DeclNewNone_39BC5F(t_4);
  None_39BC5F_apply(SF &t_4);
  DeclNewMS_F55A18(t_5);
  MS_F55A18_create(SF (MS_F55A18) &t_5, art_Art_maxPorts(SF_LAST), (Option_6239DB) (&t_4));
  Type_assign(&_art_Art_ports, ((MS_F55A18) &t_5), sizeof(struct MS_F55A18));
}

Z art_Art_maxComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxComponents;
}

Z art_Art_maxPorts(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxPorts;
}

String art_Art_logTitle(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (String) &_art_Art_logTitle;
}

MS_94FFA9 art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_94FFA9) &_art_Art_bridges;
}

MS_E444B2 art_Art_connections(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_E444B2) &_art_Art_connections;
}

MS_F55A18 art_Art_ports(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_F55A18) &_art_Art_ports;
}

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(93);
  {
    MS_852149 t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(94);
      art_Art_m_register(SF (art_Bridge) component);                
    }
  }

  sfUpdateLoc(97);
  {
    IS_08117A t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(98);
      DeclNewart_UPort(t_3);
      art_UConnection_from_(SF (art_UPort) &t_3, connection);
      DeclNewart_UPort(t_4);
      art_UConnection_to_(SF (art_UPort) &t_4, connection);
      art_Art_connect(SF (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));                
    }
  }

  sfUpdateLoc(101);
  building_control_ArtNix_run(SF_LAST);
}

static inline B art_Art_register_match_33_12(STACK_FRAME art_DispatchPropertyProtocol t_2, Z *_period_33_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_2)) return F;
  *_period_33_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_2));
  return T;
}

static inline B art_Art_register_match_35_12(STACK_FRAME art_DispatchPropertyProtocol t_2, Z *_min_35_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_2)) return F;
  *_min_35_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_2));
  return T;
}

static inline B art_Art_register_match_41_14(STACK_FRAME art_PortMode t_4) {
  if (!art_PortMode__eq(t_4, art_PortMode_DataIn)) return F;
  return T;
}

static inline B art_Art_register_match_42_14(STACK_FRAME art_PortMode t_4) {
  if (!art_PortMode__eq(t_4, art_PortMode_DataOut)) return F;
  return T;
}

static inline B art_Art_register_match_43_14(STACK_FRAME art_PortMode t_4) {
  if (!art_PortMode__eq(t_4, art_PortMode_EventIn)) return F;
  return T;
}

static inline B art_Art_register_match_44_14(STACK_FRAME art_PortMode t_4) {
  if (!art_PortMode__eq(t_4, art_PortMode_EventOut)) return F;
  return T;
}

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(31);
  DeclNewMSome_D3D128(t_0);
  MSome_D3D128_apply(SF &t_0, (art_Bridge) bridge);
  MS_94FFA9_up(art_Art_bridges(SF_LAST), art_Bridge_id_(SF bridge), (MOption_EA1D29) (&t_0));

  sfUpdateLoc(32);
  DeclNewart_DispatchPropertyProtocol(t_1);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_1, bridge);
  art_DispatchPropertyProtocol t_2 = ((art_DispatchPropertyProtocol) &t_1);
  B match_32_12 = F;
  if (!match_32_12) {
    Z period_33_46;
    match_32_12 = art_Art_register_match_33_12(SF t_2, &period_33_46);
    if (match_32_12) {
    }
  }
  if (!match_32_12) {
    Z min_35_46;
    match_32_12 = art_Art_register_match_35_12(SF t_2, &min_35_46);
    if (match_32_12) {
    }
  }
  sfAssert(match_32_12, "Error when pattern matching.");

  sfUpdateLoc(38);
  {
    DeclNewart_Bridge_Ports(t_5);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_5, bridge);
    IS_820232 t_6 = art_Bridge_Ports_all_(((art_Bridge_Ports) &t_5));
    int8_t t_7 = (art_Bridge_Ports_all_(((art_Bridge_Ports) &t_5)))->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      art_UPort port = (art_UPort) &(t_6->value[t_8]);

      sfUpdateLoc(39);
      DeclNewSome_3E197E(t_3);
      Some_3E197E_apply(SF &t_3, (art_UPort) port);
      MS_F55A18_up(art_Art_ports(SF_LAST), art_UPort_id_(SF port), (Option_6239DB) (&t_3));

      sfUpdateLoc(40);
      art_PortMode t_4 = art_UPort_mode_(SF port);
      B match_40_12 = F;
      if (!match_40_12) {
        match_40_12 = art_Art_register_match_41_14(SF t_4);
        if (match_40_12) {
        }
      }
      if (!match_40_12) {
        match_40_12 = art_Art_register_match_42_14(SF t_4);
        if (match_40_12) {
        }
      }
      if (!match_40_12) {
        match_40_12 = art_Art_register_match_43_14(SF t_4);
        if (match_40_12) {
        }
      }
      if (!match_40_12) {
        match_40_12 = art_Art_register_match_44_14(SF t_4);
        if (match_40_12) {
        }
      }
      sfAssert(match_40_12, "Error when pattern matching.");                
    }
  }
}

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(86);
  DeclNewIS_82ABD8(t_0);
  IS_82ABD8__append(SF (IS_82ABD8) &t_0, MS_E444B2_at(art_Art_connections(SF_LAST), art_UPort_id_(SF from)), art_UPort_id_(SF to));
  MS_E444B2_up(art_Art_connections(SF_LAST), art_UPort_id_(SF from), (IS_82ABD8) ((IS_82ABD8) &t_0));

  sfUpdateLoc(88);
  DeclNewString(t_1);
  String_string_(SF (String) &t_1, string("Connected ports: "));
  Z_string_(SF (String) &t_1, art_UPort_id_(SF from));
  String_string_(SF (String) &t_1, string(" -> "));
  Z_string_(SF (String) &t_1, art_UPort_id_(SF to));
  String_string_(SF (String) &t_1, string(""));
  building_control_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_1));
}

void art_Art_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "dispatchStatus", 0);
  DeclNewart_DispatchStatus(t_0);
  building_control_ArtNix_dispatchStatus(SF (art_DispatchStatus) &t_0, bridgeId);
  Type_assign(result, ((art_DispatchStatus) &t_0), sizeof(union art_DispatchStatus));
}

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(55);
  building_control_ArtNix_receiveInput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  building_control_ArtNix_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
}

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(67);
  building_control_ArtNix_sendOutput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(59);
  building_control_ArtNix_putValue(SF portId, (art_DataContent) data);
}

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(72);
  building_control_ArtNix_logInfo(SF (String) string(""), (String) msg);
}