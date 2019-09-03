#include <all.h>

// building_control.BuildingControl.TempControl_i_Bridge.EntryPoints

B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints__eq(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints other) {
  if (Z__ne(this->TempControl_i_BridgeId, other->TempControl_i_BridgeId)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (building_control_BuildingControl_TempControl_i_Impl__ne((building_control_BuildingControl_TempControl_i_Impl) &this->component, (building_control_BuildingControl_TempControl_i_Impl) &other->component)) return F;
  return T;
}

B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints__ne(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints other);

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_string_(STACK_FRAME String result, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->TempControl_i_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  building_control_BuildingControl_TempControl_i_Impl_string_(SF result, (building_control_BuildingControl_TempControl_i_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_cprint(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->TempControl_i_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  building_control_BuildingControl_TempControl_i_Impl_cprint((building_control_BuildingControl_TempControl_i_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints__is(STACK_FRAME void* this);
building_control_BuildingControl_TempControl_i_Bridge_EntryPoints building_control_BuildingControl_TempControl_i_Bridge_EntryPoints__as(STACK_FRAME void *this);

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_apply(STACK_FRAME building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, Z TempControl_i_BridgeId, Z currentTemp_Id, Z fanCmd_Id, building_control_BuildingControl_TempControl_i_Impl component) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "apply", 0);
  this->TempControl_i_BridgeId = TempControl_i_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  this->fanCmd_Id = fanCmd_Id;
  Type_assign(&this->component, component, sizeof(struct building_control_BuildingControl_TempControl_i_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 1;
  IS_82ABD8_up(&t_1, 0, (Z) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this));
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  IS_82ABD8_up(&t_3, 0, (Z) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_fanCmd_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_initialise_(STACK_FRAME building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(101);
  building_control_BuildingControl_TempControl_i_Impl_initialise_(SF building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this));
}

static inline B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_match_105_11(STACK_FRAME art_DispatchStatus t_0, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, IS_82ABD8 *_portIds) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

static inline B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_match_111_15(STACK_FRAME Option_8E9F45 t_2, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, building_control_Base_Types_Integer_16 *_value) {
  if (!Some_D29615__is(SF t_2)) return F;
  if (!building_control_Base_Types_Integer_16_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_2)))) return F;
  *_value = (building_control_Base_Types_Integer_16) building_control_Base_Types_Integer_16_Payload_value_(building_control_Base_Types_Integer_16_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_2))));
  return T;
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_(STACK_FRAME building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(105);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_TempControl_i_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 portIds;
  sfAssert(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_match_105_11(SF t_0, this, &portIds), "Error during var pattern matching.");

  sfUpdateLoc(106);
  art_Art_receiveInput(SF (IS_82ABD8) portIds, (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(108);
  {
    IS_82ABD8 t_4 = portIds;
    int8_t t_5 = (portIds)->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      Z portId = t_4->value[t_6];

      sfUpdateLoc(110);
      if (Z__eq(portId, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this))) {

        sfUpdateLoc(111);
        Option_8E9F45 t_2;
        DeclNewOption_8E9F45(t_3);
        art_Art_getValue(SF (Option_8E9F45) &t_3, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this));
        t_2 = (Option_8E9F45) ((Option_8E9F45) &t_3);
        building_control_Base_Types_Integer_16 value;
        sfAssert(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_match_111_15(SF t_2, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(112);
        building_control_BuildingControl_TempControl_i_Impl_handlecurrentTemp_(SF building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this), (building_control_Base_Types_Integer_16) value);
      }
    }
  }

  sfUpdateLoc(116);
  art_Art_sendOutput(SF (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_finalise_(STACK_FRAME building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(132);
  building_control_BuildingControl_TempControl_i_Impl_finalise_(SF building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this));
}