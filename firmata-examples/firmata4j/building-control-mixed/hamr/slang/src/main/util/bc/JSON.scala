// #Sireum
// @formatter:off

// This file is auto-generated from TempUnit.scala, Temperature_i.scala, SetPoint_i.scala, FanAck.scala, FanCmd.scala, Base_Types.scala, TempSensor_i_tcp_tempSensor__Containers.scala, TempControl_i_tcp_tempControl__Containers.scala, Fan_i_tcp_fan__Containers.scala, ObservationKind.scala, DataContent.scala, Aux_Types.scala

package bc

import org.sireum._
import org.sireum.Json.Printer._

object JSON {

  object Printer {

    @pure def printBuildingControlTempUnitType(o: BuildingControl.TempUnit.Type): ST = {
      val value: String = o match {
        case BuildingControl.TempUnit.Fahrenheit => "Fahrenheit"
        case BuildingControl.TempUnit.Celsius => "Celsius"
        case BuildingControl.TempUnit.Kelvin => "Kelvin"
      }
      return printObject(ISZ(
        ("type", printString("BuildingControl.TempUnit")),
        ("value", printString(value))
      ))
    }

    @pure def printBuildingControlTempUnit_Payload(o: BuildingControl.TempUnit_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempUnit_Payload""""),
        ("value", printBuildingControlTempUnitType(o.value))
      ))
    }

    @pure def printBuildingControlTemperature_i(o: BuildingControl.Temperature_i): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Temperature_i""""),
        ("degrees", printF32(o.degrees)),
        ("unit", printBuildingControlTempUnitType(o.unit))
      ))
    }

    @pure def printBuildingControlTemperature_i_Payload(o: BuildingControl.Temperature_i_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Temperature_i_Payload""""),
        ("value", printBuildingControlTemperature_i(o.value))
      ))
    }

    @pure def printBuildingControlSetPoint_i(o: BuildingControl.SetPoint_i): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.SetPoint_i""""),
        ("low", printBuildingControlTemperature_i(o.low)),
        ("high", printBuildingControlTemperature_i(o.high))
      ))
    }

    @pure def printBuildingControlSetPoint_i_Payload(o: BuildingControl.SetPoint_i_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.SetPoint_i_Payload""""),
        ("value", printBuildingControlSetPoint_i(o.value))
      ))
    }

    @pure def printBuildingControlFanAckType(o: BuildingControl.FanAck.Type): ST = {
      val value: String = o match {
        case BuildingControl.FanAck.Ok => "Ok"
        case BuildingControl.FanAck.Error => "Error"
      }
      return printObject(ISZ(
        ("type", printString("BuildingControl.FanAck")),
        ("value", printString(value))
      ))
    }

    @pure def printBuildingControlFanAck_Payload(o: BuildingControl.FanAck_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.FanAck_Payload""""),
        ("value", printBuildingControlFanAckType(o.value))
      ))
    }

    @pure def printBuildingControlFanCmdType(o: BuildingControl.FanCmd.Type): ST = {
      val value: String = o match {
        case BuildingControl.FanCmd.On => "On"
        case BuildingControl.FanCmd.Off => "Off"
      }
      return printObject(ISZ(
        ("type", printString("BuildingControl.FanCmd")),
        ("value", printString(value))
      ))
    }

    @pure def printBuildingControlFanCmd_Payload(o: BuildingControl.FanCmd_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.FanCmd_Payload""""),
        ("value", printBuildingControlFanCmdType(o.value))
      ))
    }

    @pure def printBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Boolean_Payload""""),
        ("value", printB(o.value))
      ))
    }

    @pure def printBase_TypesInteger_Payload(o: Base_Types.Integer_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_Payload""""),
        ("value", printZ(o.value))
      ))
    }

    @pure def printBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_8_Payload""""),
        ("value", printS8(o.value))
      ))
    }

    @pure def printBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_16_Payload""""),
        ("value", printS16(o.value))
      ))
    }

    @pure def printBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_32_Payload""""),
        ("value", printS32(o.value))
      ))
    }

    @pure def printBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_64_Payload""""),
        ("value", printS64(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_8_Payload""""),
        ("value", printU8(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_16_Payload""""),
        ("value", printU16(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_32_Payload""""),
        ("value", printU32(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_64_Payload""""),
        ("value", printU64(o.value))
      ))
    }

    @pure def printBase_TypesFloat_Payload(o: Base_Types.Float_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_Payload""""),
        ("value", printR(o.value))
      ))
    }

    @pure def printBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_32_Payload""""),
        ("value", printF32(o.value))
      ))
    }

    @pure def printBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_64_Payload""""),
        ("value", printF64(o.value))
      ))
    }

    @pure def printBase_TypesCharacter_Payload(o: Base_Types.Character_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Character_Payload""""),
        ("value", printC(o.value))
      ))
    }

    @pure def printBase_TypesString_Payload(o: Base_Types.String_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.String_Payload""""),
        ("value", printString(o.value))
      ))
    }

    @pure def printBase_TypesBits_Payload(o: Base_Types.Bits_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Bits_Payload""""),
        ("value", printISZ(T, o.value, printB _))
      ))
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container): ST = {
      o match {
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P => return printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS => return printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
      }
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P"""")
      ))
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS"""")
      ))
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container): ST = {
      o match {
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P => return printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS => return printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
      }
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_currentTemp", printBuildingControlTemperature_i(o.api_currentTemp))
      ))
    }

    @pure def printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_currentTemp", printBuildingControlTemperature_i(o.api_currentTemp))
      ))
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container): ST = {
      o match {
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P => return printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS => return printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
      }
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_fanAck", printOption(F, o.api_fanAck, printBuildingControlFanAckType _)),
        ("api_setPoint", printOption(F, o.api_setPoint, printBuildingControlSetPoint_i _)),
        ("api_currentTemp", printBuildingControlTemperature_i(o.api_currentTemp))
      ))
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_fanAck", printOption(F, o.api_fanAck, printBuildingControlFanAckType _)),
        ("api_setPoint", printOption(F, o.api_setPoint, printBuildingControlSetPoint_i _)),
        ("api_currentTemp", printBuildingControlTemperature_i(o.api_currentTemp))
      ))
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container): ST = {
      o match {
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P => return printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS => return printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
      }
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printBuildingControlFanCmdType _))
      ))
    }

    @pure def printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printBuildingControlFanCmdType _))
      ))
    }

    @pure def printBuildingControlFan_i_tcp_fan_PreState_Container(o: BuildingControl.Fan_i_tcp_fan_PreState_Container): ST = {
      o match {
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P => return printBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS => return printBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
      }
    }

    @pure def printBuildingControlFan_i_tcp_fan_PreState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Fan_i_tcp_fan_PreState_Container_P""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printBuildingControlFanCmdType _))
      ))
    }

    @pure def printBuildingControlFan_i_tcp_fan_PreState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Fan_i_tcp_fan_PreState_Container_PS""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printBuildingControlFanCmdType _))
      ))
    }

    @pure def printBuildingControlFan_i_tcp_fan_PostState_Container(o: BuildingControl.Fan_i_tcp_fan_PostState_Container): ST = {
      o match {
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P => return printBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS => return printBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
      }
    }

    @pure def printBuildingControlFan_i_tcp_fan_PostState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Fan_i_tcp_fan_PostState_Container_P""""),
        ("api_fanAck", printOption(F, o.api_fanAck, printBuildingControlFanAckType _))
      ))
    }

    @pure def printBuildingControlFan_i_tcp_fan_PostState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""BuildingControl.Fan_i_tcp_fan_PostState_Container_PS""""),
        ("api_fanAck", printOption(F, o.api_fanAck, printBuildingControlFanAckType _))
      ))
    }

    @pure def printruntimemonitorObservationKindType(o: runtimemonitor.ObservationKind.Type): ST = {
      val value: String = o match {
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempSensor_postInit => "BuildingControlDemo_i_Instance_tcp_tempSensor_postInit"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempSensor_preCompute => "BuildingControlDemo_i_Instance_tcp_tempSensor_preCompute"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempSensor_postCompute => "BuildingControlDemo_i_Instance_tcp_tempSensor_postCompute"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_postInit => "BuildingControlDemo_i_Instance_tcp_tempControl_postInit"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_preCompute => "BuildingControlDemo_i_Instance_tcp_tempControl_preCompute"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_postCompute => "BuildingControlDemo_i_Instance_tcp_tempControl_postCompute"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_fan_postInit => "BuildingControlDemo_i_Instance_tcp_fan_postInit"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_fan_preCompute => "BuildingControlDemo_i_Instance_tcp_fan_preCompute"
        case runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_fan_postCompute => "BuildingControlDemo_i_Instance_tcp_fan_postCompute"
      }
      return printObject(ISZ(
        ("type", printString("runtimemonitor.ObservationKind")),
        ("value", printString(value))
      ))
    }

    @pure def print_artDataContent(o: art.DataContent): ST = {
      o match {
        case o: Base_Types.Boolean_Payload => return printBase_TypesBoolean_Payload(o)
        case o: Base_Types.Integer_Payload => return printBase_TypesInteger_Payload(o)
        case o: Base_Types.Integer_8_Payload => return printBase_TypesInteger_8_Payload(o)
        case o: Base_Types.Integer_16_Payload => return printBase_TypesInteger_16_Payload(o)
        case o: Base_Types.Integer_32_Payload => return printBase_TypesInteger_32_Payload(o)
        case o: Base_Types.Integer_64_Payload => return printBase_TypesInteger_64_Payload(o)
        case o: Base_Types.Unsigned_8_Payload => return printBase_TypesUnsigned_8_Payload(o)
        case o: Base_Types.Unsigned_16_Payload => return printBase_TypesUnsigned_16_Payload(o)
        case o: Base_Types.Unsigned_32_Payload => return printBase_TypesUnsigned_32_Payload(o)
        case o: Base_Types.Unsigned_64_Payload => return printBase_TypesUnsigned_64_Payload(o)
        case o: Base_Types.Float_Payload => return printBase_TypesFloat_Payload(o)
        case o: Base_Types.Float_32_Payload => return printBase_TypesFloat_32_Payload(o)
        case o: Base_Types.Float_64_Payload => return printBase_TypesFloat_64_Payload(o)
        case o: Base_Types.Character_Payload => return printBase_TypesCharacter_Payload(o)
        case o: Base_Types.String_Payload => return printBase_TypesString_Payload(o)
        case o: Base_Types.Bits_Payload => return printBase_TypesBits_Payload(o)
        case o: art.Empty => return print_artEmpty(o)
        case o: BuildingControl.FanCmd_Payload => return printBuildingControlFanCmd_Payload(o)
        case o: BuildingControl.FanAck_Payload => return printBuildingControlFanAck_Payload(o)
        case o: BuildingControl.TempUnit_Payload => return printBuildingControlTempUnit_Payload(o)
        case o: BuildingControl.SetPoint_i_Payload => return printBuildingControlSetPoint_i_Payload(o)
        case o: BuildingControl.Temperature_i_Payload => return printBuildingControlTemperature_i_Payload(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P => return printBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS => return printBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P => return printBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS => return printBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P => return printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS => return printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P => return printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS => return printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P => return printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS => return printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P => return printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS => return printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
      }
    }

    @pure def print_artEmpty(o: art.Empty): ST = {
      return printObject(ISZ(
        ("type", st""""art.Empty"""")
      ))
    }

  }

  @record class Parser(val input: String) {
    val parser: Json.Parser = Json.Parser.create(input)

    def errorOpt: Option[Json.ErrorMsg] = {
      return parser.errorOpt
    }

    def parseBuildingControlTempUnitType(): BuildingControl.TempUnit.Type = {
      val r = parseBuildingControlTempUnitT(F)
      return r
    }

    def parseBuildingControlTempUnitT(typeParsed: B): BuildingControl.TempUnit.Type = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempUnit")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      BuildingControl.TempUnit.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for BuildingControl.TempUnit.")
          return BuildingControl.TempUnit.byOrdinal(0).get
      }
    }

    def parseBuildingControlTempUnit_Payload(): BuildingControl.TempUnit_Payload = {
      val r = parseBuildingControlTempUnit_PayloadT(F)
      return r
    }

    def parseBuildingControlTempUnit_PayloadT(typeParsed: B): BuildingControl.TempUnit_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempUnit_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseBuildingControlTempUnitType()
      parser.parseObjectNext()
      return BuildingControl.TempUnit_Payload(value)
    }

    def parseBuildingControlTemperature_i(): BuildingControl.Temperature_i = {
      val r = parseBuildingControlTemperature_iT(F)
      return r
    }

    def parseBuildingControlTemperature_iT(typeParsed: B): BuildingControl.Temperature_i = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Temperature_i")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      parser.parseObjectKey("unit")
      val unit = parseBuildingControlTempUnitType()
      parser.parseObjectNext()
      return BuildingControl.Temperature_i(degrees, unit)
    }

    def parseBuildingControlTemperature_i_Payload(): BuildingControl.Temperature_i_Payload = {
      val r = parseBuildingControlTemperature_i_PayloadT(F)
      return r
    }

    def parseBuildingControlTemperature_i_PayloadT(typeParsed: B): BuildingControl.Temperature_i_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Temperature_i_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.Temperature_i_Payload(value)
    }

    def parseBuildingControlSetPoint_i(): BuildingControl.SetPoint_i = {
      val r = parseBuildingControlSetPoint_iT(F)
      return r
    }

    def parseBuildingControlSetPoint_iT(typeParsed: B): BuildingControl.SetPoint_i = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.SetPoint_i")
      }
      parser.parseObjectKey("low")
      val low = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      parser.parseObjectKey("high")
      val high = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.SetPoint_i(low, high)
    }

    def parseBuildingControlSetPoint_i_Payload(): BuildingControl.SetPoint_i_Payload = {
      val r = parseBuildingControlSetPoint_i_PayloadT(F)
      return r
    }

    def parseBuildingControlSetPoint_i_PayloadT(typeParsed: B): BuildingControl.SetPoint_i_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.SetPoint_i_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseBuildingControlSetPoint_i()
      parser.parseObjectNext()
      return BuildingControl.SetPoint_i_Payload(value)
    }

    def parseBuildingControlFanAckType(): BuildingControl.FanAck.Type = {
      val r = parseBuildingControlFanAckT(F)
      return r
    }

    def parseBuildingControlFanAckT(typeParsed: B): BuildingControl.FanAck.Type = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.FanAck")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      BuildingControl.FanAck.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for BuildingControl.FanAck.")
          return BuildingControl.FanAck.byOrdinal(0).get
      }
    }

    def parseBuildingControlFanAck_Payload(): BuildingControl.FanAck_Payload = {
      val r = parseBuildingControlFanAck_PayloadT(F)
      return r
    }

    def parseBuildingControlFanAck_PayloadT(typeParsed: B): BuildingControl.FanAck_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.FanAck_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseBuildingControlFanAckType()
      parser.parseObjectNext()
      return BuildingControl.FanAck_Payload(value)
    }

    def parseBuildingControlFanCmdType(): BuildingControl.FanCmd.Type = {
      val r = parseBuildingControlFanCmdT(F)
      return r
    }

    def parseBuildingControlFanCmdT(typeParsed: B): BuildingControl.FanCmd.Type = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.FanCmd")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      BuildingControl.FanCmd.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for BuildingControl.FanCmd.")
          return BuildingControl.FanCmd.byOrdinal(0).get
      }
    }

    def parseBuildingControlFanCmd_Payload(): BuildingControl.FanCmd_Payload = {
      val r = parseBuildingControlFanCmd_PayloadT(F)
      return r
    }

    def parseBuildingControlFanCmd_PayloadT(typeParsed: B): BuildingControl.FanCmd_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.FanCmd_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseBuildingControlFanCmdType()
      parser.parseObjectNext()
      return BuildingControl.FanCmd_Payload(value)
    }

    def parseBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
      val r = parseBase_TypesBoolean_PayloadT(F)
      return r
    }

    def parseBase_TypesBoolean_PayloadT(typeParsed: B): Base_Types.Boolean_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Boolean_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseB()
      parser.parseObjectNext()
      return Base_Types.Boolean_Payload(value)
    }

    def parseBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
      val r = parseBase_TypesInteger_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_PayloadT(typeParsed: B): Base_Types.Integer_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseZ()
      parser.parseObjectNext()
      return Base_Types.Integer_Payload(value)
    }

    def parseBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
      val r = parseBase_TypesInteger_8_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_8_PayloadT(typeParsed: B): Base_Types.Integer_8_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_8_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS8()
      parser.parseObjectNext()
      return Base_Types.Integer_8_Payload(value)
    }

    def parseBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
      val r = parseBase_TypesInteger_16_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_16_PayloadT(typeParsed: B): Base_Types.Integer_16_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_16_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS16()
      parser.parseObjectNext()
      return Base_Types.Integer_16_Payload(value)
    }

    def parseBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
      val r = parseBase_TypesInteger_32_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_32_PayloadT(typeParsed: B): Base_Types.Integer_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS32()
      parser.parseObjectNext()
      return Base_Types.Integer_32_Payload(value)
    }

    def parseBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
      val r = parseBase_TypesInteger_64_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_64_PayloadT(typeParsed: B): Base_Types.Integer_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS64()
      parser.parseObjectNext()
      return Base_Types.Integer_64_Payload(value)
    }

    def parseBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
      val r = parseBase_TypesUnsigned_8_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_8_PayloadT(typeParsed: B): Base_Types.Unsigned_8_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_8_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU8()
      parser.parseObjectNext()
      return Base_Types.Unsigned_8_Payload(value)
    }

    def parseBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
      val r = parseBase_TypesUnsigned_16_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_16_PayloadT(typeParsed: B): Base_Types.Unsigned_16_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_16_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU16()
      parser.parseObjectNext()
      return Base_Types.Unsigned_16_Payload(value)
    }

    def parseBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
      val r = parseBase_TypesUnsigned_32_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_32_PayloadT(typeParsed: B): Base_Types.Unsigned_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU32()
      parser.parseObjectNext()
      return Base_Types.Unsigned_32_Payload(value)
    }

    def parseBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
      val r = parseBase_TypesUnsigned_64_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_64_PayloadT(typeParsed: B): Base_Types.Unsigned_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU64()
      parser.parseObjectNext()
      return Base_Types.Unsigned_64_Payload(value)
    }

    def parseBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
      val r = parseBase_TypesFloat_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_PayloadT(typeParsed: B): Base_Types.Float_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseR()
      parser.parseObjectNext()
      return Base_Types.Float_Payload(value)
    }

    def parseBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
      val r = parseBase_TypesFloat_32_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_32_PayloadT(typeParsed: B): Base_Types.Float_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseF32()
      parser.parseObjectNext()
      return Base_Types.Float_32_Payload(value)
    }

    def parseBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
      val r = parseBase_TypesFloat_64_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_64_PayloadT(typeParsed: B): Base_Types.Float_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseF64()
      parser.parseObjectNext()
      return Base_Types.Float_64_Payload(value)
    }

    def parseBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
      val r = parseBase_TypesCharacter_PayloadT(F)
      return r
    }

    def parseBase_TypesCharacter_PayloadT(typeParsed: B): Base_Types.Character_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Character_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseC()
      parser.parseObjectNext()
      return Base_Types.Character_Payload(value)
    }

    def parseBase_TypesString_Payload(): Base_Types.String_Payload = {
      val r = parseBase_TypesString_PayloadT(F)
      return r
    }

    def parseBase_TypesString_PayloadT(typeParsed: B): Base_Types.String_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.String_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseString()
      parser.parseObjectNext()
      return Base_Types.String_Payload(value)
    }

    def parseBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
      val r = parseBase_TypesBits_PayloadT(F)
      return r
    }

    def parseBase_TypesBits_PayloadT(typeParsed: B): Base_Types.Bits_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Bits_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseISZ(parser.parseB _)
      parser.parseObjectNext()
      return Base_Types.Bits_Payload(value)
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P", "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS"))
      t.native match {
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T); return r
        case _ => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T); return r
      }
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(F)
      return r
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P")
      }
      return BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P()
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(F)
      return r
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS")
      }
      return BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS()
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P", "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS"))
      t.native match {
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T); return r
        case _ => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T); return r
      }
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(F)
      return r
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P(api_tempChanged, api_currentTemp)
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(F)
      return r
    }

    def parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS(api_tempChanged, api_currentTemp)
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P", "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS"))
      t.native match {
        case "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T); return r
        case _ => val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T); return r
      }
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(F)
      return r
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseBuildingControlFanAckType _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_setPoint")
      val api_setPoint = parser.parseOption(parseBuildingControlSetPoint_i _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(F)
      return r
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseBuildingControlFanAckType _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_setPoint")
      val api_setPoint = parser.parseOption(parseBuildingControlSetPoint_i _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseBuildingControlTemperature_i()
      parser.parseObjectNext()
      return BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P", "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS"))
      t.native match {
        case "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
        case _ => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
      }
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(F)
      return r
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseBuildingControlFanCmdType _)
      parser.parseObjectNext()
      return BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P(api_fanCmd)
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(F)
      return r
    }

    def parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseBuildingControlFanCmdType _)
      parser.parseObjectNext()
      return BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS(api_fanCmd)
    }

    def parseBuildingControlFan_i_tcp_fan_PreState_Container(): BuildingControl.Fan_i_tcp_fan_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.Fan_i_tcp_fan_PreState_Container_P", "BuildingControl.Fan_i_tcp_fan_PreState_Container_PS"))
      t.native match {
        case "BuildingControl.Fan_i_tcp_fan_PreState_Container_P" => val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PT(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PreState_Container_PS" => val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PST(T); return r
        case _ => val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PST(T); return r
      }
    }

    def parseBuildingControlFan_i_tcp_fan_PreState_Container_P(): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PT(F)
      return r
    }

    def parseBuildingControlFan_i_tcp_fan_PreState_Container_PT(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Fan_i_tcp_fan_PreState_Container_P")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseBuildingControlFanCmdType _)
      parser.parseObjectNext()
      return BuildingControl.Fan_i_tcp_fan_PreState_Container_P(api_fanCmd)
    }

    def parseBuildingControlFan_i_tcp_fan_PreState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PST(F)
      return r
    }

    def parseBuildingControlFan_i_tcp_fan_PreState_Container_PST(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Fan_i_tcp_fan_PreState_Container_PS")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseBuildingControlFanCmdType _)
      parser.parseObjectNext()
      return BuildingControl.Fan_i_tcp_fan_PreState_Container_PS(api_fanCmd)
    }

    def parseBuildingControlFan_i_tcp_fan_PostState_Container(): BuildingControl.Fan_i_tcp_fan_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("BuildingControl.Fan_i_tcp_fan_PostState_Container_P", "BuildingControl.Fan_i_tcp_fan_PostState_Container_PS"))
      t.native match {
        case "BuildingControl.Fan_i_tcp_fan_PostState_Container_P" => val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PT(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PostState_Container_PS" => val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PST(T); return r
        case _ => val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PST(T); return r
      }
    }

    def parseBuildingControlFan_i_tcp_fan_PostState_Container_P(): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PT(F)
      return r
    }

    def parseBuildingControlFan_i_tcp_fan_PostState_Container_PT(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Fan_i_tcp_fan_PostState_Container_P")
      }
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseBuildingControlFanAckType _)
      parser.parseObjectNext()
      return BuildingControl.Fan_i_tcp_fan_PostState_Container_P(api_fanAck)
    }

    def parseBuildingControlFan_i_tcp_fan_PostState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PST(F)
      return r
    }

    def parseBuildingControlFan_i_tcp_fan_PostState_Container_PST(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("BuildingControl.Fan_i_tcp_fan_PostState_Container_PS")
      }
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseBuildingControlFanAckType _)
      parser.parseObjectNext()
      return BuildingControl.Fan_i_tcp_fan_PostState_Container_PS(api_fanAck)
    }

    def parseruntimemonitorObservationKindType(): runtimemonitor.ObservationKind.Type = {
      val r = parseruntimemonitorObservationKindT(F)
      return r
    }

    def parseruntimemonitorObservationKindT(typeParsed: B): runtimemonitor.ObservationKind.Type = {
      if (!typeParsed) {
        parser.parseObjectType("runtimemonitor.ObservationKind")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      runtimemonitor.ObservationKind.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for runtimemonitor.ObservationKind.")
          return runtimemonitor.ObservationKind.byOrdinal(0).get
      }
    }

    def parse_artDataContent(): art.DataContent = {
      val t = parser.parseObjectTypes(ISZ("Base_Types.Boolean_Payload", "Base_Types.Integer_Payload", "Base_Types.Integer_8_Payload", "Base_Types.Integer_16_Payload", "Base_Types.Integer_32_Payload", "Base_Types.Integer_64_Payload", "Base_Types.Unsigned_8_Payload", "Base_Types.Unsigned_16_Payload", "Base_Types.Unsigned_32_Payload", "Base_Types.Unsigned_64_Payload", "Base_Types.Float_Payload", "Base_Types.Float_32_Payload", "Base_Types.Float_64_Payload", "Base_Types.Character_Payload", "Base_Types.String_Payload", "Base_Types.Bits_Payload", "art.Empty", "BuildingControl.FanCmd_Payload", "BuildingControl.FanAck_Payload", "BuildingControl.TempUnit_Payload", "BuildingControl.SetPoint_i_Payload", "BuildingControl.Temperature_i_Payload", "BuildingControl.Fan_i_tcp_fan_PreState_Container_P", "BuildingControl.Fan_i_tcp_fan_PreState_Container_PS", "BuildingControl.Fan_i_tcp_fan_PostState_Container_P", "BuildingControl.Fan_i_tcp_fan_PostState_Container_PS", "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P", "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS", "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P", "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS", "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P", "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS", "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P", "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS"))
      t.native match {
        case "Base_Types.Boolean_Payload" => val r = parseBase_TypesBoolean_PayloadT(T); return r
        case "Base_Types.Integer_Payload" => val r = parseBase_TypesInteger_PayloadT(T); return r
        case "Base_Types.Integer_8_Payload" => val r = parseBase_TypesInteger_8_PayloadT(T); return r
        case "Base_Types.Integer_16_Payload" => val r = parseBase_TypesInteger_16_PayloadT(T); return r
        case "Base_Types.Integer_32_Payload" => val r = parseBase_TypesInteger_32_PayloadT(T); return r
        case "Base_Types.Integer_64_Payload" => val r = parseBase_TypesInteger_64_PayloadT(T); return r
        case "Base_Types.Unsigned_8_Payload" => val r = parseBase_TypesUnsigned_8_PayloadT(T); return r
        case "Base_Types.Unsigned_16_Payload" => val r = parseBase_TypesUnsigned_16_PayloadT(T); return r
        case "Base_Types.Unsigned_32_Payload" => val r = parseBase_TypesUnsigned_32_PayloadT(T); return r
        case "Base_Types.Unsigned_64_Payload" => val r = parseBase_TypesUnsigned_64_PayloadT(T); return r
        case "Base_Types.Float_Payload" => val r = parseBase_TypesFloat_PayloadT(T); return r
        case "Base_Types.Float_32_Payload" => val r = parseBase_TypesFloat_32_PayloadT(T); return r
        case "Base_Types.Float_64_Payload" => val r = parseBase_TypesFloat_64_PayloadT(T); return r
        case "Base_Types.Character_Payload" => val r = parseBase_TypesCharacter_PayloadT(T); return r
        case "Base_Types.String_Payload" => val r = parseBase_TypesString_PayloadT(T); return r
        case "Base_Types.Bits_Payload" => val r = parseBase_TypesBits_PayloadT(T); return r
        case "art.Empty" => val r = parse_artEmptyT(T); return r
        case "BuildingControl.FanCmd_Payload" => val r = parseBuildingControlFanCmd_PayloadT(T); return r
        case "BuildingControl.FanAck_Payload" => val r = parseBuildingControlFanAck_PayloadT(T); return r
        case "BuildingControl.TempUnit_Payload" => val r = parseBuildingControlTempUnit_PayloadT(T); return r
        case "BuildingControl.SetPoint_i_Payload" => val r = parseBuildingControlSetPoint_i_PayloadT(T); return r
        case "BuildingControl.Temperature_i_Payload" => val r = parseBuildingControlTemperature_i_PayloadT(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PreState_Container_P" => val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PT(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PreState_Container_PS" => val r = parseBuildingControlFan_i_tcp_fan_PreState_Container_PST(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PostState_Container_P" => val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PT(T); return r
        case "BuildingControl.Fan_i_tcp_fan_PostState_Container_PS" => val r = parseBuildingControlFan_i_tcp_fan_PostState_Container_PST(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(T); return r
        case "BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS" => val r = parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(T); return r
        case "BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS" => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
        case _ => val r = parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
      }
    }

    def parse_artEmpty(): art.Empty = {
      val r = parse_artEmptyT(F)
      return r
    }

    def parse_artEmptyT(typeParsed: B): art.Empty = {
      if (!typeParsed) {
        parser.parseObjectType("art.Empty")
      }
      return art.Empty()
    }

    def eof(): B = {
      val r = parser.eof()
      return r
    }

  }

  def to[T](s: String, f: Parser => T): Either[T, Json.ErrorMsg] = {
    val parser = Parser(s)
    val r = f(parser)
    parser.eof()
    parser.errorOpt match {
      case Some(e) => return Either.Right(e)
      case _ => return Either.Left(r)
    }
  }

  def fromBuildingControlTempUnit_Payload(o: BuildingControl.TempUnit_Payload, isCompact: B): String = {
    val st = Printer.printBuildingControlTempUnit_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempUnit_Payload(s: String): Either[BuildingControl.TempUnit_Payload, Json.ErrorMsg] = {
    def fBuildingControlTempUnit_Payload(parser: Parser): BuildingControl.TempUnit_Payload = {
      val r = parser.parseBuildingControlTempUnit_Payload()
      return r
    }
    val r = to(s, fBuildingControlTempUnit_Payload _)
    return r
  }

  def fromBuildingControlTemperature_i(o: BuildingControl.Temperature_i, isCompact: B): String = {
    val st = Printer.printBuildingControlTemperature_i(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTemperature_i(s: String): Either[BuildingControl.Temperature_i, Json.ErrorMsg] = {
    def fBuildingControlTemperature_i(parser: Parser): BuildingControl.Temperature_i = {
      val r = parser.parseBuildingControlTemperature_i()
      return r
    }
    val r = to(s, fBuildingControlTemperature_i _)
    return r
  }

  def fromBuildingControlTemperature_i_Payload(o: BuildingControl.Temperature_i_Payload, isCompact: B): String = {
    val st = Printer.printBuildingControlTemperature_i_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTemperature_i_Payload(s: String): Either[BuildingControl.Temperature_i_Payload, Json.ErrorMsg] = {
    def fBuildingControlTemperature_i_Payload(parser: Parser): BuildingControl.Temperature_i_Payload = {
      val r = parser.parseBuildingControlTemperature_i_Payload()
      return r
    }
    val r = to(s, fBuildingControlTemperature_i_Payload _)
    return r
  }

  def fromBuildingControlSetPoint_i(o: BuildingControl.SetPoint_i, isCompact: B): String = {
    val st = Printer.printBuildingControlSetPoint_i(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlSetPoint_i(s: String): Either[BuildingControl.SetPoint_i, Json.ErrorMsg] = {
    def fBuildingControlSetPoint_i(parser: Parser): BuildingControl.SetPoint_i = {
      val r = parser.parseBuildingControlSetPoint_i()
      return r
    }
    val r = to(s, fBuildingControlSetPoint_i _)
    return r
  }

  def fromBuildingControlSetPoint_i_Payload(o: BuildingControl.SetPoint_i_Payload, isCompact: B): String = {
    val st = Printer.printBuildingControlSetPoint_i_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlSetPoint_i_Payload(s: String): Either[BuildingControl.SetPoint_i_Payload, Json.ErrorMsg] = {
    def fBuildingControlSetPoint_i_Payload(parser: Parser): BuildingControl.SetPoint_i_Payload = {
      val r = parser.parseBuildingControlSetPoint_i_Payload()
      return r
    }
    val r = to(s, fBuildingControlSetPoint_i_Payload _)
    return r
  }

  def fromBuildingControlFanAck_Payload(o: BuildingControl.FanAck_Payload, isCompact: B): String = {
    val st = Printer.printBuildingControlFanAck_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFanAck_Payload(s: String): Either[BuildingControl.FanAck_Payload, Json.ErrorMsg] = {
    def fBuildingControlFanAck_Payload(parser: Parser): BuildingControl.FanAck_Payload = {
      val r = parser.parseBuildingControlFanAck_Payload()
      return r
    }
    val r = to(s, fBuildingControlFanAck_Payload _)
    return r
  }

  def fromBuildingControlFanCmd_Payload(o: BuildingControl.FanCmd_Payload, isCompact: B): String = {
    val st = Printer.printBuildingControlFanCmd_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFanCmd_Payload(s: String): Either[BuildingControl.FanCmd_Payload, Json.ErrorMsg] = {
    def fBuildingControlFanCmd_Payload(parser: Parser): BuildingControl.FanCmd_Payload = {
      val r = parser.parseBuildingControlFanCmd_Payload()
      return r
    }
    val r = to(s, fBuildingControlFanCmd_Payload _)
    return r
  }

  def fromBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesBoolean_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesBoolean_Payload(s: String): Either[Base_Types.Boolean_Payload, Json.ErrorMsg] = {
    def fBase_TypesBoolean_Payload(parser: Parser): Base_Types.Boolean_Payload = {
      val r = parser.parseBase_TypesBoolean_Payload()
      return r
    }
    val r = to(s, fBase_TypesBoolean_Payload _)
    return r
  }

  def fromBase_TypesInteger_Payload(o: Base_Types.Integer_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_Payload(s: String): Either[Base_Types.Integer_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_Payload(parser: Parser): Base_Types.Integer_Payload = {
      val r = parser.parseBase_TypesInteger_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_Payload _)
    return r
  }

  def fromBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_8_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_8_Payload(s: String): Either[Base_Types.Integer_8_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_8_Payload(parser: Parser): Base_Types.Integer_8_Payload = {
      val r = parser.parseBase_TypesInteger_8_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_8_Payload _)
    return r
  }

  def fromBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_16_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_16_Payload(s: String): Either[Base_Types.Integer_16_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_16_Payload(parser: Parser): Base_Types.Integer_16_Payload = {
      val r = parser.parseBase_TypesInteger_16_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_16_Payload _)
    return r
  }

  def fromBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_32_Payload(s: String): Either[Base_Types.Integer_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_32_Payload(parser: Parser): Base_Types.Integer_32_Payload = {
      val r = parser.parseBase_TypesInteger_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_32_Payload _)
    return r
  }

  def fromBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_64_Payload(s: String): Either[Base_Types.Integer_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_64_Payload(parser: Parser): Base_Types.Integer_64_Payload = {
      val r = parser.parseBase_TypesInteger_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_64_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_8_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_8_Payload(s: String): Either[Base_Types.Unsigned_8_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_8_Payload(parser: Parser): Base_Types.Unsigned_8_Payload = {
      val r = parser.parseBase_TypesUnsigned_8_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_8_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_16_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_16_Payload(s: String): Either[Base_Types.Unsigned_16_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_16_Payload(parser: Parser): Base_Types.Unsigned_16_Payload = {
      val r = parser.parseBase_TypesUnsigned_16_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_16_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_32_Payload(s: String): Either[Base_Types.Unsigned_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_32_Payload(parser: Parser): Base_Types.Unsigned_32_Payload = {
      val r = parser.parseBase_TypesUnsigned_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_32_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_64_Payload(s: String): Either[Base_Types.Unsigned_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_64_Payload(parser: Parser): Base_Types.Unsigned_64_Payload = {
      val r = parser.parseBase_TypesUnsigned_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_64_Payload _)
    return r
  }

  def fromBase_TypesFloat_Payload(o: Base_Types.Float_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_Payload(s: String): Either[Base_Types.Float_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_Payload(parser: Parser): Base_Types.Float_Payload = {
      val r = parser.parseBase_TypesFloat_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_Payload _)
    return r
  }

  def fromBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_32_Payload(s: String): Either[Base_Types.Float_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_32_Payload(parser: Parser): Base_Types.Float_32_Payload = {
      val r = parser.parseBase_TypesFloat_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_32_Payload _)
    return r
  }

  def fromBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_64_Payload(s: String): Either[Base_Types.Float_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_64_Payload(parser: Parser): Base_Types.Float_64_Payload = {
      val r = parser.parseBase_TypesFloat_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_64_Payload _)
    return r
  }

  def fromBase_TypesCharacter_Payload(o: Base_Types.Character_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesCharacter_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesCharacter_Payload(s: String): Either[Base_Types.Character_Payload, Json.ErrorMsg] = {
    def fBase_TypesCharacter_Payload(parser: Parser): Base_Types.Character_Payload = {
      val r = parser.parseBase_TypesCharacter_Payload()
      return r
    }
    val r = to(s, fBase_TypesCharacter_Payload _)
    return r
  }

  def fromBase_TypesString_Payload(o: Base_Types.String_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesString_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesString_Payload(s: String): Either[Base_Types.String_Payload, Json.ErrorMsg] = {
    def fBase_TypesString_Payload(parser: Parser): Base_Types.String_Payload = {
      val r = parser.parseBase_TypesString_Payload()
      return r
    }
    val r = to(s, fBase_TypesString_Payload _)
    return r
  }

  def fromBase_TypesBits_Payload(o: Base_Types.Bits_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesBits_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesBits_Payload(s: String): Either[Base_Types.Bits_Payload, Json.ErrorMsg] = {
    def fBase_TypesBits_Payload(parser: Parser): Base_Types.Bits_Payload = {
      val r = parser.parseBase_TypesBits_Payload()
      return r
    }
    val r = to(s, fBase_TypesBits_Payload _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(s: String): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(parser: Parser): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      val r = parser.parseBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(s: String): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(parser: Parser): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      val r = parser.parseBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container(o: BuildingControl.Fan_i_tcp_fan_PreState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container(s: String): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container(parser: Parser): BuildingControl.Fan_i_tcp_fan_PreState_Container = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PreState_Container()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PreState_Container _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container_P(s: String): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container_P(parser: Parser): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PreState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PreState_Container_P _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container_PS(s: String): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container_PS(parser: Parser): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PreState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container(o: BuildingControl.Fan_i_tcp_fan_PostState_Container, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container(s: String): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container(parser: Parser): BuildingControl.Fan_i_tcp_fan_PostState_Container = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PostState_Container()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PostState_Container _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container_P(s: String): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container_P, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container_P(parser: Parser): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PostState_Container_P()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PostState_Container_P _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container_PS(s: String): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container_PS, Json.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container_PS(parser: Parser): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      val r = parser.parseBuildingControlFan_i_tcp_fan_PostState_Container_PS()
      return r
    }
    val r = to(s, fBuildingControlFan_i_tcp_fan_PostState_Container_PS _)
    return r
  }

  def from_artDataContent(o: art.DataContent, isCompact: B): String = {
    val st = Printer.print_artDataContent(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def to_artDataContent(s: String): Either[art.DataContent, Json.ErrorMsg] = {
    def f_artDataContent(parser: Parser): art.DataContent = {
      val r = parser.parse_artDataContent()
      return r
    }
    val r = to(s, f_artDataContent _)
    return r
  }

  def from_artEmpty(o: art.Empty, isCompact: B): String = {
    val st = Printer.print_artEmpty(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def to_artEmpty(s: String): Either[art.Empty, Json.ErrorMsg] = {
    def f_artEmpty(parser: Parser): art.Empty = {
      val r = parser.parse_artEmpty()
      return r
    }
    val r = to(s, f_artEmpty _)
    return r
  }

}