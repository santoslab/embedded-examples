// #Sireum
// @formatter:off

// This file is auto-generated from TempUnit.scala, Temperature_i.scala, SetPoint_i.scala, FanAck.scala, FanCmd.scala, Base_Types.scala, TempSensor_i_tcp_tempSensor__Containers.scala, TempControl_i_tcp_tempControl__Containers.scala, Fan_i_tcp_fan__Containers.scala, ObservationKind.scala, DataContent.scala, Aux_Types.scala

package bc

import org.sireum._

object MsgPack {

  object Constants {

    val BuildingControlTempUnit_Payload: Z = -32

    val BuildingControlTemperature_i: Z = -31

    val BuildingControlTemperature_i_Payload: Z = -30

    val BuildingControlSetPoint_i: Z = -29

    val BuildingControlSetPoint_i_Payload: Z = -28

    val BuildingControlFanAck_Payload: Z = -27

    val BuildingControlFanCmd_Payload: Z = -26

    val Base_TypesBoolean_Payload: Z = -25

    val Base_TypesInteger_Payload: Z = -24

    val Base_TypesInteger_8_Payload: Z = -23

    val Base_TypesInteger_16_Payload: Z = -22

    val Base_TypesInteger_32_Payload: Z = -21

    val Base_TypesInteger_64_Payload: Z = -20

    val Base_TypesUnsigned_8_Payload: Z = -19

    val Base_TypesUnsigned_16_Payload: Z = -18

    val Base_TypesUnsigned_32_Payload: Z = -17

    val Base_TypesUnsigned_64_Payload: Z = -16

    val Base_TypesFloat_Payload: Z = -15

    val Base_TypesFloat_32_Payload: Z = -14

    val Base_TypesFloat_64_Payload: Z = -13

    val Base_TypesCharacter_Payload: Z = -12

    val Base_TypesString_Payload: Z = -11

    val Base_TypesBits_Payload: Z = -10

    val BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P: Z = -9

    val BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS: Z = -8

    val BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P: Z = -7

    val BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS: Z = -6

    val BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P: Z = -5

    val BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS: Z = -4

    val BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P: Z = -3

    val BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS: Z = -2

    val BuildingControlFan_i_tcp_fan_PreState_Container_P: Z = -1

    val BuildingControlFan_i_tcp_fan_PreState_Container_PS: Z = 0

    val BuildingControlFan_i_tcp_fan_PostState_Container_P: Z = 1

    val BuildingControlFan_i_tcp_fan_PostState_Container_PS: Z = 2

    val _artEmpty: Z = 3

  }

  object Writer {

    @record class Default(val writer: MessagePack.Writer.Impl) extends Writer

  }

  @msig trait Writer {

    def writer: MessagePack.Writer

    def writeBuildingControlTempUnitType(o: BuildingControl.TempUnit.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeBuildingControlTempUnit_Payload(o: BuildingControl.TempUnit_Payload): Unit = {
      writer.writeZ(Constants.BuildingControlTempUnit_Payload)
      writeBuildingControlTempUnitType(o.value)
    }

    def writeBuildingControlTemperature_i(o: BuildingControl.Temperature_i): Unit = {
      writer.writeZ(Constants.BuildingControlTemperature_i)
      writer.writeF32(o.degrees)
      writeBuildingControlTempUnitType(o.unit)
    }

    def writeBuildingControlTemperature_i_Payload(o: BuildingControl.Temperature_i_Payload): Unit = {
      writer.writeZ(Constants.BuildingControlTemperature_i_Payload)
      writeBuildingControlTemperature_i(o.value)
    }

    def writeBuildingControlSetPoint_i(o: BuildingControl.SetPoint_i): Unit = {
      writer.writeZ(Constants.BuildingControlSetPoint_i)
      writeBuildingControlTemperature_i(o.low)
      writeBuildingControlTemperature_i(o.high)
    }

    def writeBuildingControlSetPoint_i_Payload(o: BuildingControl.SetPoint_i_Payload): Unit = {
      writer.writeZ(Constants.BuildingControlSetPoint_i_Payload)
      writeBuildingControlSetPoint_i(o.value)
    }

    def writeBuildingControlFanAckType(o: BuildingControl.FanAck.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeBuildingControlFanAck_Payload(o: BuildingControl.FanAck_Payload): Unit = {
      writer.writeZ(Constants.BuildingControlFanAck_Payload)
      writeBuildingControlFanAckType(o.value)
    }

    def writeBuildingControlFanCmdType(o: BuildingControl.FanCmd.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeBuildingControlFanCmd_Payload(o: BuildingControl.FanCmd_Payload): Unit = {
      writer.writeZ(Constants.BuildingControlFanCmd_Payload)
      writeBuildingControlFanCmdType(o.value)
    }

    def writeBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesBoolean_Payload)
      writer.writeB(o.value)
    }

    def writeBase_TypesInteger_Payload(o: Base_Types.Integer_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_Payload)
      writer.writeZ(o.value)
    }

    def writeBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_8_Payload)
      writer.writeS8(o.value)
    }

    def writeBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_16_Payload)
      writer.writeS16(o.value)
    }

    def writeBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_32_Payload)
      writer.writeS32(o.value)
    }

    def writeBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_64_Payload)
      writer.writeS64(o.value)
    }

    def writeBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_8_Payload)
      writer.writeU8(o.value)
    }

    def writeBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_16_Payload)
      writer.writeU16(o.value)
    }

    def writeBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_32_Payload)
      writer.writeU32(o.value)
    }

    def writeBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_64_Payload)
      writer.writeU64(o.value)
    }

    def writeBase_TypesFloat_Payload(o: Base_Types.Float_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_Payload)
      writer.writeR(o.value)
    }

    def writeBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_32_Payload)
      writer.writeF32(o.value)
    }

    def writeBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_64_Payload)
      writer.writeF64(o.value)
    }

    def writeBase_TypesCharacter_Payload(o: Base_Types.Character_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesCharacter_Payload)
      writer.writeC(o.value)
    }

    def writeBase_TypesString_Payload(o: Base_Types.String_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesString_Payload)
      writer.writeString(o.value)
    }

    def writeBase_TypesBits_Payload(o: Base_Types.Bits_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesBits_Payload)
      writer.writeISZ(o.value, writer.writeB _)
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container): Unit = {
      o match {
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P => writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS => writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
      }
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P)
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS)
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container): Unit = {
      o match {
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P => writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS => writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
      }
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writeBuildingControlTemperature_i(o.api_currentTemp)
    }

    def writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writeBuildingControlTemperature_i(o.api_currentTemp)
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container): Unit = {
      o match {
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P => writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS => writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
      }
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writer.writeOption(o.api_fanAck, writeBuildingControlFanAckType _)
      writer.writeOption(o.api_setPoint, writeBuildingControlSetPoint_i _)
      writeBuildingControlTemperature_i(o.api_currentTemp)
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writer.writeOption(o.api_fanAck, writeBuildingControlFanAckType _)
      writer.writeOption(o.api_setPoint, writeBuildingControlSetPoint_i _)
      writeBuildingControlTemperature_i(o.api_currentTemp)
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container): Unit = {
      o match {
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P => writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS => writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
      }
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P)
      writer.writeOption(o.api_fanCmd, writeBuildingControlFanCmdType _)
    }

    def writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS)
      writer.writeOption(o.api_fanCmd, writeBuildingControlFanCmdType _)
    }

    def writeBuildingControlFan_i_tcp_fan_PreState_Container(o: BuildingControl.Fan_i_tcp_fan_PreState_Container): Unit = {
      o match {
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P => writeBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS => writeBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
      }
    }

    def writeBuildingControlFan_i_tcp_fan_PreState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlFan_i_tcp_fan_PreState_Container_P)
      writer.writeOption(o.api_fanCmd, writeBuildingControlFanCmdType _)
    }

    def writeBuildingControlFan_i_tcp_fan_PreState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlFan_i_tcp_fan_PreState_Container_PS)
      writer.writeOption(o.api_fanCmd, writeBuildingControlFanCmdType _)
    }

    def writeBuildingControlFan_i_tcp_fan_PostState_Container(o: BuildingControl.Fan_i_tcp_fan_PostState_Container): Unit = {
      o match {
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P => writeBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS => writeBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
      }
    }

    def writeBuildingControlFan_i_tcp_fan_PostState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P): Unit = {
      writer.writeZ(Constants.BuildingControlFan_i_tcp_fan_PostState_Container_P)
      writer.writeOption(o.api_fanAck, writeBuildingControlFanAckType _)
    }

    def writeBuildingControlFan_i_tcp_fan_PostState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.BuildingControlFan_i_tcp_fan_PostState_Container_PS)
      writer.writeOption(o.api_fanAck, writeBuildingControlFanAckType _)
    }

    def writeruntimemonitorObservationKindType(o: runtimemonitor.ObservationKind.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def write_artDataContent(o: art.DataContent): Unit = {
      o match {
        case o: Base_Types.Boolean_Payload => writeBase_TypesBoolean_Payload(o)
        case o: Base_Types.Integer_Payload => writeBase_TypesInteger_Payload(o)
        case o: Base_Types.Integer_8_Payload => writeBase_TypesInteger_8_Payload(o)
        case o: Base_Types.Integer_16_Payload => writeBase_TypesInteger_16_Payload(o)
        case o: Base_Types.Integer_32_Payload => writeBase_TypesInteger_32_Payload(o)
        case o: Base_Types.Integer_64_Payload => writeBase_TypesInteger_64_Payload(o)
        case o: Base_Types.Unsigned_8_Payload => writeBase_TypesUnsigned_8_Payload(o)
        case o: Base_Types.Unsigned_16_Payload => writeBase_TypesUnsigned_16_Payload(o)
        case o: Base_Types.Unsigned_32_Payload => writeBase_TypesUnsigned_32_Payload(o)
        case o: Base_Types.Unsigned_64_Payload => writeBase_TypesUnsigned_64_Payload(o)
        case o: Base_Types.Float_Payload => writeBase_TypesFloat_Payload(o)
        case o: Base_Types.Float_32_Payload => writeBase_TypesFloat_32_Payload(o)
        case o: Base_Types.Float_64_Payload => writeBase_TypesFloat_64_Payload(o)
        case o: Base_Types.Character_Payload => writeBase_TypesCharacter_Payload(o)
        case o: Base_Types.String_Payload => writeBase_TypesString_Payload(o)
        case o: Base_Types.Bits_Payload => writeBase_TypesBits_Payload(o)
        case o: art.Empty => write_artEmpty(o)
        case o: BuildingControl.FanCmd_Payload => writeBuildingControlFanCmd_Payload(o)
        case o: BuildingControl.FanAck_Payload => writeBuildingControlFanAck_Payload(o)
        case o: BuildingControl.TempUnit_Payload => writeBuildingControlTempUnit_Payload(o)
        case o: BuildingControl.SetPoint_i_Payload => writeBuildingControlSetPoint_i_Payload(o)
        case o: BuildingControl.Temperature_i_Payload => writeBuildingControlTemperature_i_Payload(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P => writeBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS => writeBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P => writeBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
        case o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS => writeBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P => writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS => writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P => writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
        case o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS => writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P => writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS => writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P => writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
        case o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS => writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
      }
    }

    def write_artEmpty(o: art.Empty): Unit = {
      writer.writeZ(Constants._artEmpty)
    }

    def result: ISZ[U8] = {
      return writer.result
    }

  }

  object Reader {

    @record class Default(val reader: MessagePack.Reader.Impl) extends Reader {
      def errorOpt: Option[MessagePack.ErrorMsg] = {
        return reader.errorOpt
      }
    }

  }

  @msig trait Reader {

    def reader: MessagePack.Reader

    def readBuildingControlTempUnitType(): BuildingControl.TempUnit.Type = {
      val r = reader.readZ()
      return BuildingControl.TempUnit.byOrdinal(r).get
    }

    def readBuildingControlTempUnit_Payload(): BuildingControl.TempUnit_Payload = {
      val r = readBuildingControlTempUnit_PayloadT(F)
      return r
    }

    def readBuildingControlTempUnit_PayloadT(typeParsed: B): BuildingControl.TempUnit_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempUnit_Payload)
      }
      val value = readBuildingControlTempUnitType()
      return BuildingControl.TempUnit_Payload(value)
    }

    def readBuildingControlTemperature_i(): BuildingControl.Temperature_i = {
      val r = readBuildingControlTemperature_iT(F)
      return r
    }

    def readBuildingControlTemperature_iT(typeParsed: B): BuildingControl.Temperature_i = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTemperature_i)
      }
      val degrees = reader.readF32()
      val unit = readBuildingControlTempUnitType()
      return BuildingControl.Temperature_i(degrees, unit)
    }

    def readBuildingControlTemperature_i_Payload(): BuildingControl.Temperature_i_Payload = {
      val r = readBuildingControlTemperature_i_PayloadT(F)
      return r
    }

    def readBuildingControlTemperature_i_PayloadT(typeParsed: B): BuildingControl.Temperature_i_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTemperature_i_Payload)
      }
      val value = readBuildingControlTemperature_i()
      return BuildingControl.Temperature_i_Payload(value)
    }

    def readBuildingControlSetPoint_i(): BuildingControl.SetPoint_i = {
      val r = readBuildingControlSetPoint_iT(F)
      return r
    }

    def readBuildingControlSetPoint_iT(typeParsed: B): BuildingControl.SetPoint_i = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlSetPoint_i)
      }
      val low = readBuildingControlTemperature_i()
      val high = readBuildingControlTemperature_i()
      return BuildingControl.SetPoint_i(low, high)
    }

    def readBuildingControlSetPoint_i_Payload(): BuildingControl.SetPoint_i_Payload = {
      val r = readBuildingControlSetPoint_i_PayloadT(F)
      return r
    }

    def readBuildingControlSetPoint_i_PayloadT(typeParsed: B): BuildingControl.SetPoint_i_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlSetPoint_i_Payload)
      }
      val value = readBuildingControlSetPoint_i()
      return BuildingControl.SetPoint_i_Payload(value)
    }

    def readBuildingControlFanAckType(): BuildingControl.FanAck.Type = {
      val r = reader.readZ()
      return BuildingControl.FanAck.byOrdinal(r).get
    }

    def readBuildingControlFanAck_Payload(): BuildingControl.FanAck_Payload = {
      val r = readBuildingControlFanAck_PayloadT(F)
      return r
    }

    def readBuildingControlFanAck_PayloadT(typeParsed: B): BuildingControl.FanAck_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFanAck_Payload)
      }
      val value = readBuildingControlFanAckType()
      return BuildingControl.FanAck_Payload(value)
    }

    def readBuildingControlFanCmdType(): BuildingControl.FanCmd.Type = {
      val r = reader.readZ()
      return BuildingControl.FanCmd.byOrdinal(r).get
    }

    def readBuildingControlFanCmd_Payload(): BuildingControl.FanCmd_Payload = {
      val r = readBuildingControlFanCmd_PayloadT(F)
      return r
    }

    def readBuildingControlFanCmd_PayloadT(typeParsed: B): BuildingControl.FanCmd_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFanCmd_Payload)
      }
      val value = readBuildingControlFanCmdType()
      return BuildingControl.FanCmd_Payload(value)
    }

    def readBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
      val r = readBase_TypesBoolean_PayloadT(F)
      return r
    }

    def readBase_TypesBoolean_PayloadT(typeParsed: B): Base_Types.Boolean_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesBoolean_Payload)
      }
      val value = reader.readB()
      return Base_Types.Boolean_Payload(value)
    }

    def readBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
      val r = readBase_TypesInteger_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_PayloadT(typeParsed: B): Base_Types.Integer_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_Payload)
      }
      val value = reader.readZ()
      return Base_Types.Integer_Payload(value)
    }

    def readBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
      val r = readBase_TypesInteger_8_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_8_PayloadT(typeParsed: B): Base_Types.Integer_8_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_8_Payload)
      }
      val value = reader.readS8()
      return Base_Types.Integer_8_Payload(value)
    }

    def readBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
      val r = readBase_TypesInteger_16_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_16_PayloadT(typeParsed: B): Base_Types.Integer_16_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_16_Payload)
      }
      val value = reader.readS16()
      return Base_Types.Integer_16_Payload(value)
    }

    def readBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
      val r = readBase_TypesInteger_32_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_32_PayloadT(typeParsed: B): Base_Types.Integer_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_32_Payload)
      }
      val value = reader.readS32()
      return Base_Types.Integer_32_Payload(value)
    }

    def readBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
      val r = readBase_TypesInteger_64_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_64_PayloadT(typeParsed: B): Base_Types.Integer_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_64_Payload)
      }
      val value = reader.readS64()
      return Base_Types.Integer_64_Payload(value)
    }

    def readBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
      val r = readBase_TypesUnsigned_8_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_8_PayloadT(typeParsed: B): Base_Types.Unsigned_8_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_8_Payload)
      }
      val value = reader.readU8()
      return Base_Types.Unsigned_8_Payload(value)
    }

    def readBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
      val r = readBase_TypesUnsigned_16_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_16_PayloadT(typeParsed: B): Base_Types.Unsigned_16_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_16_Payload)
      }
      val value = reader.readU16()
      return Base_Types.Unsigned_16_Payload(value)
    }

    def readBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
      val r = readBase_TypesUnsigned_32_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_32_PayloadT(typeParsed: B): Base_Types.Unsigned_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_32_Payload)
      }
      val value = reader.readU32()
      return Base_Types.Unsigned_32_Payload(value)
    }

    def readBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
      val r = readBase_TypesUnsigned_64_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_64_PayloadT(typeParsed: B): Base_Types.Unsigned_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_64_Payload)
      }
      val value = reader.readU64()
      return Base_Types.Unsigned_64_Payload(value)
    }

    def readBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
      val r = readBase_TypesFloat_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_PayloadT(typeParsed: B): Base_Types.Float_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_Payload)
      }
      val value = reader.readR()
      return Base_Types.Float_Payload(value)
    }

    def readBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
      val r = readBase_TypesFloat_32_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_32_PayloadT(typeParsed: B): Base_Types.Float_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_32_Payload)
      }
      val value = reader.readF32()
      return Base_Types.Float_32_Payload(value)
    }

    def readBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
      val r = readBase_TypesFloat_64_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_64_PayloadT(typeParsed: B): Base_Types.Float_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_64_Payload)
      }
      val value = reader.readF64()
      return Base_Types.Float_64_Payload(value)
    }

    def readBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
      val r = readBase_TypesCharacter_PayloadT(F)
      return r
    }

    def readBase_TypesCharacter_PayloadT(typeParsed: B): Base_Types.Character_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesCharacter_Payload)
      }
      val value = reader.readC()
      return Base_Types.Character_Payload(value)
    }

    def readBase_TypesString_Payload(): Base_Types.String_Payload = {
      val r = readBase_TypesString_PayloadT(F)
      return r
    }

    def readBase_TypesString_PayloadT(typeParsed: B): Base_Types.String_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesString_Payload)
      }
      val value = reader.readString()
      return Base_Types.String_Payload(value)
    }

    def readBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
      val r = readBase_TypesBits_PayloadT(F)
      return r
    }

    def readBase_TypesBits_PayloadT(typeParsed: B): Base_Types.Bits_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesBits_Payload)
      }
      val value = reader.readISZ(reader.readB _)
      return Base_Types.Bits_Payload(value)
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container.")
          val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(F)
      return r
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P)
      }
      return BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P()
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(F)
      return r
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS)
      }
      return BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS()
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container.")
          val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(F)
      return r
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_currentTemp = readBuildingControlTemperature_i()
      return BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P(api_tempChanged, api_currentTemp)
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(F)
      return r
    }

    def readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(typeParsed: B): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_currentTemp = readBuildingControlTemperature_i()
      return BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS(api_tempChanged, api_currentTemp)
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PreState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P => val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS => val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.TempControl_i_tcp_tempControl_PreState_Container.")
          val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(F)
      return r
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_fanAck = reader.readOption(readBuildingControlFanAckType _)
      val api_setPoint = reader.readOption(readBuildingControlSetPoint_i _)
      val api_currentTemp = readBuildingControlTemperature_i()
      return BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(F)
      return r
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_fanAck = reader.readOption(readBuildingControlFanAckType _)
      val api_setPoint = reader.readOption(readBuildingControlSetPoint_i _)
      val api_currentTemp = readBuildingControlTemperature_i()
      return BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PostState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P => val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS => val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.TempControl_i_tcp_tempControl_PostState_Container.")
          val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(F)
      return r
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P)
      }
      val api_fanCmd = reader.readOption(readBuildingControlFanCmdType _)
      return BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P(api_fanCmd)
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(F)
      return r
    }

    def readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(typeParsed: B): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS)
      }
      val api_fanCmd = reader.readOption(readBuildingControlFanCmdType _)
      return BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS(api_fanCmd)
    }

    def readBuildingControlFan_i_tcp_fan_PreState_Container(): BuildingControl.Fan_i_tcp_fan_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlFan_i_tcp_fan_PreState_Container_P => val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PT(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PreState_Container_PS => val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.Fan_i_tcp_fan_PreState_Container.")
          val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlFan_i_tcp_fan_PreState_Container_P(): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PT(F)
      return r
    }

    def readBuildingControlFan_i_tcp_fan_PreState_Container_PT(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFan_i_tcp_fan_PreState_Container_P)
      }
      val api_fanCmd = reader.readOption(readBuildingControlFanCmdType _)
      return BuildingControl.Fan_i_tcp_fan_PreState_Container_P(api_fanCmd)
    }

    def readBuildingControlFan_i_tcp_fan_PreState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PST(F)
      return r
    }

    def readBuildingControlFan_i_tcp_fan_PreState_Container_PST(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFan_i_tcp_fan_PreState_Container_PS)
      }
      val api_fanCmd = reader.readOption(readBuildingControlFanCmdType _)
      return BuildingControl.Fan_i_tcp_fan_PreState_Container_PS(api_fanCmd)
    }

    def readBuildingControlFan_i_tcp_fan_PostState_Container(): BuildingControl.Fan_i_tcp_fan_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.BuildingControlFan_i_tcp_fan_PostState_Container_P => val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PT(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PostState_Container_PS => val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of BuildingControl.Fan_i_tcp_fan_PostState_Container.")
          val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PST(T)
          return r
      }
    }

    def readBuildingControlFan_i_tcp_fan_PostState_Container_P(): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PT(F)
      return r
    }

    def readBuildingControlFan_i_tcp_fan_PostState_Container_PT(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFan_i_tcp_fan_PostState_Container_P)
      }
      val api_fanAck = reader.readOption(readBuildingControlFanAckType _)
      return BuildingControl.Fan_i_tcp_fan_PostState_Container_P(api_fanAck)
    }

    def readBuildingControlFan_i_tcp_fan_PostState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PST(F)
      return r
    }

    def readBuildingControlFan_i_tcp_fan_PostState_Container_PST(typeParsed: B): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.BuildingControlFan_i_tcp_fan_PostState_Container_PS)
      }
      val api_fanAck = reader.readOption(readBuildingControlFanAckType _)
      return BuildingControl.Fan_i_tcp_fan_PostState_Container_PS(api_fanAck)
    }

    def readruntimemonitorObservationKindType(): runtimemonitor.ObservationKind.Type = {
      val r = reader.readZ()
      return runtimemonitor.ObservationKind.byOrdinal(r).get
    }

    def read_artDataContent(): art.DataContent = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.Base_TypesBoolean_Payload => val r = readBase_TypesBoolean_PayloadT(T); return r
        case Constants.Base_TypesInteger_Payload => val r = readBase_TypesInteger_PayloadT(T); return r
        case Constants.Base_TypesInteger_8_Payload => val r = readBase_TypesInteger_8_PayloadT(T); return r
        case Constants.Base_TypesInteger_16_Payload => val r = readBase_TypesInteger_16_PayloadT(T); return r
        case Constants.Base_TypesInteger_32_Payload => val r = readBase_TypesInteger_32_PayloadT(T); return r
        case Constants.Base_TypesInteger_64_Payload => val r = readBase_TypesInteger_64_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_8_Payload => val r = readBase_TypesUnsigned_8_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_16_Payload => val r = readBase_TypesUnsigned_16_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_32_Payload => val r = readBase_TypesUnsigned_32_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_64_Payload => val r = readBase_TypesUnsigned_64_PayloadT(T); return r
        case Constants.Base_TypesFloat_Payload => val r = readBase_TypesFloat_PayloadT(T); return r
        case Constants.Base_TypesFloat_32_Payload => val r = readBase_TypesFloat_32_PayloadT(T); return r
        case Constants.Base_TypesFloat_64_Payload => val r = readBase_TypesFloat_64_PayloadT(T); return r
        case Constants.Base_TypesCharacter_Payload => val r = readBase_TypesCharacter_PayloadT(T); return r
        case Constants.Base_TypesString_Payload => val r = readBase_TypesString_PayloadT(T); return r
        case Constants.Base_TypesBits_Payload => val r = readBase_TypesBits_PayloadT(T); return r
        case Constants._artEmpty => val r = read_artEmptyT(T); return r
        case Constants.BuildingControlFanCmd_Payload => val r = readBuildingControlFanCmd_PayloadT(T); return r
        case Constants.BuildingControlFanAck_Payload => val r = readBuildingControlFanAck_PayloadT(T); return r
        case Constants.BuildingControlTempUnit_Payload => val r = readBuildingControlTempUnit_PayloadT(T); return r
        case Constants.BuildingControlSetPoint_i_Payload => val r = readBuildingControlSetPoint_i_PayloadT(T); return r
        case Constants.BuildingControlTemperature_i_Payload => val r = readBuildingControlTemperature_i_PayloadT(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PreState_Container_P => val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PT(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PreState_Container_PS => val r = readBuildingControlFan_i_tcp_fan_PreState_Container_PST(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PostState_Container_P => val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PT(T); return r
        case Constants.BuildingControlFan_i_tcp_fan_PostState_Container_PS => val r = readBuildingControlFan_i_tcp_fan_PostState_Container_PST(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PT(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PST(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PT(T); return r
        case Constants.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS => val r = readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PST(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P => val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PT(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS => val r = readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PST(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P => val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PT(T); return r
        case Constants.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS => val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of art.DataContent.")
          val r = readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PST(T)
          return r
      }
    }

    def read_artEmpty(): art.Empty = {
      val r = read_artEmptyT(F)
      return r
    }

    def read_artEmptyT(typeParsed: B): art.Empty = {
      if (!typeParsed) {
        reader.expectZ(Constants._artEmpty)
      }
      return art.Empty()
    }

  }

  def to[T](data: ISZ[U8], f: Reader => T): Either[T, MessagePack.ErrorMsg] = {
    val rd = Reader.Default(MessagePack.reader(data))
    rd.reader.init()
    val r = f(rd)
    rd.errorOpt match {
      case Some(e) => return Either.Right(e)
      case _ => return Either.Left(r)
    }
  }

  def fromBuildingControlTempUnit_Payload(o: BuildingControl.TempUnit_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempUnit_Payload(o)
    return w.result
  }

  def toBuildingControlTempUnit_Payload(data: ISZ[U8]): Either[BuildingControl.TempUnit_Payload, MessagePack.ErrorMsg] = {
    def fBuildingControlTempUnit_Payload(reader: Reader): BuildingControl.TempUnit_Payload = {
      val r = reader.readBuildingControlTempUnit_Payload()
      return r
    }
    val r = to(data, fBuildingControlTempUnit_Payload _)
    return r
  }

  def fromBuildingControlTemperature_i(o: BuildingControl.Temperature_i, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTemperature_i(o)
    return w.result
  }

  def toBuildingControlTemperature_i(data: ISZ[U8]): Either[BuildingControl.Temperature_i, MessagePack.ErrorMsg] = {
    def fBuildingControlTemperature_i(reader: Reader): BuildingControl.Temperature_i = {
      val r = reader.readBuildingControlTemperature_i()
      return r
    }
    val r = to(data, fBuildingControlTemperature_i _)
    return r
  }

  def fromBuildingControlTemperature_i_Payload(o: BuildingControl.Temperature_i_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTemperature_i_Payload(o)
    return w.result
  }

  def toBuildingControlTemperature_i_Payload(data: ISZ[U8]): Either[BuildingControl.Temperature_i_Payload, MessagePack.ErrorMsg] = {
    def fBuildingControlTemperature_i_Payload(reader: Reader): BuildingControl.Temperature_i_Payload = {
      val r = reader.readBuildingControlTemperature_i_Payload()
      return r
    }
    val r = to(data, fBuildingControlTemperature_i_Payload _)
    return r
  }

  def fromBuildingControlSetPoint_i(o: BuildingControl.SetPoint_i, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlSetPoint_i(o)
    return w.result
  }

  def toBuildingControlSetPoint_i(data: ISZ[U8]): Either[BuildingControl.SetPoint_i, MessagePack.ErrorMsg] = {
    def fBuildingControlSetPoint_i(reader: Reader): BuildingControl.SetPoint_i = {
      val r = reader.readBuildingControlSetPoint_i()
      return r
    }
    val r = to(data, fBuildingControlSetPoint_i _)
    return r
  }

  def fromBuildingControlSetPoint_i_Payload(o: BuildingControl.SetPoint_i_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlSetPoint_i_Payload(o)
    return w.result
  }

  def toBuildingControlSetPoint_i_Payload(data: ISZ[U8]): Either[BuildingControl.SetPoint_i_Payload, MessagePack.ErrorMsg] = {
    def fBuildingControlSetPoint_i_Payload(reader: Reader): BuildingControl.SetPoint_i_Payload = {
      val r = reader.readBuildingControlSetPoint_i_Payload()
      return r
    }
    val r = to(data, fBuildingControlSetPoint_i_Payload _)
    return r
  }

  def fromBuildingControlFanAck_Payload(o: BuildingControl.FanAck_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFanAck_Payload(o)
    return w.result
  }

  def toBuildingControlFanAck_Payload(data: ISZ[U8]): Either[BuildingControl.FanAck_Payload, MessagePack.ErrorMsg] = {
    def fBuildingControlFanAck_Payload(reader: Reader): BuildingControl.FanAck_Payload = {
      val r = reader.readBuildingControlFanAck_Payload()
      return r
    }
    val r = to(data, fBuildingControlFanAck_Payload _)
    return r
  }

  def fromBuildingControlFanCmd_Payload(o: BuildingControl.FanCmd_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFanCmd_Payload(o)
    return w.result
  }

  def toBuildingControlFanCmd_Payload(data: ISZ[U8]): Either[BuildingControl.FanCmd_Payload, MessagePack.ErrorMsg] = {
    def fBuildingControlFanCmd_Payload(reader: Reader): BuildingControl.FanCmd_Payload = {
      val r = reader.readBuildingControlFanCmd_Payload()
      return r
    }
    val r = to(data, fBuildingControlFanCmd_Payload _)
    return r
  }

  def fromBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesBoolean_Payload(o)
    return w.result
  }

  def toBase_TypesBoolean_Payload(data: ISZ[U8]): Either[Base_Types.Boolean_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesBoolean_Payload(reader: Reader): Base_Types.Boolean_Payload = {
      val r = reader.readBase_TypesBoolean_Payload()
      return r
    }
    val r = to(data, fBase_TypesBoolean_Payload _)
    return r
  }

  def fromBase_TypesInteger_Payload(o: Base_Types.Integer_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_Payload(data: ISZ[U8]): Either[Base_Types.Integer_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_Payload(reader: Reader): Base_Types.Integer_Payload = {
      val r = reader.readBase_TypesInteger_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_Payload _)
    return r
  }

  def fromBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_8_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_8_Payload(data: ISZ[U8]): Either[Base_Types.Integer_8_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_8_Payload(reader: Reader): Base_Types.Integer_8_Payload = {
      val r = reader.readBase_TypesInteger_8_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_8_Payload _)
    return r
  }

  def fromBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_16_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_16_Payload(data: ISZ[U8]): Either[Base_Types.Integer_16_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_16_Payload(reader: Reader): Base_Types.Integer_16_Payload = {
      val r = reader.readBase_TypesInteger_16_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_16_Payload _)
    return r
  }

  def fromBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_32_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_32_Payload(data: ISZ[U8]): Either[Base_Types.Integer_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_32_Payload(reader: Reader): Base_Types.Integer_32_Payload = {
      val r = reader.readBase_TypesInteger_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_32_Payload _)
    return r
  }

  def fromBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_64_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_64_Payload(data: ISZ[U8]): Either[Base_Types.Integer_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_64_Payload(reader: Reader): Base_Types.Integer_64_Payload = {
      val r = reader.readBase_TypesInteger_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_64_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_8_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_8_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_8_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_8_Payload(reader: Reader): Base_Types.Unsigned_8_Payload = {
      val r = reader.readBase_TypesUnsigned_8_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_8_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_16_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_16_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_16_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_16_Payload(reader: Reader): Base_Types.Unsigned_16_Payload = {
      val r = reader.readBase_TypesUnsigned_16_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_16_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_32_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_32_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_32_Payload(reader: Reader): Base_Types.Unsigned_32_Payload = {
      val r = reader.readBase_TypesUnsigned_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_32_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_64_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_64_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_64_Payload(reader: Reader): Base_Types.Unsigned_64_Payload = {
      val r = reader.readBase_TypesUnsigned_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_64_Payload _)
    return r
  }

  def fromBase_TypesFloat_Payload(o: Base_Types.Float_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_Payload(data: ISZ[U8]): Either[Base_Types.Float_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_Payload(reader: Reader): Base_Types.Float_Payload = {
      val r = reader.readBase_TypesFloat_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_Payload _)
    return r
  }

  def fromBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_32_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_32_Payload(data: ISZ[U8]): Either[Base_Types.Float_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_32_Payload(reader: Reader): Base_Types.Float_32_Payload = {
      val r = reader.readBase_TypesFloat_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_32_Payload _)
    return r
  }

  def fromBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_64_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_64_Payload(data: ISZ[U8]): Either[Base_Types.Float_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_64_Payload(reader: Reader): Base_Types.Float_64_Payload = {
      val r = reader.readBase_TypesFloat_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_64_Payload _)
    return r
  }

  def fromBase_TypesCharacter_Payload(o: Base_Types.Character_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesCharacter_Payload(o)
    return w.result
  }

  def toBase_TypesCharacter_Payload(data: ISZ[U8]): Either[Base_Types.Character_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesCharacter_Payload(reader: Reader): Base_Types.Character_Payload = {
      val r = reader.readBase_TypesCharacter_Payload()
      return r
    }
    val r = to(data, fBase_TypesCharacter_Payload _)
    return r
  }

  def fromBase_TypesString_Payload(o: Base_Types.String_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesString_Payload(o)
    return w.result
  }

  def toBase_TypesString_Payload(data: ISZ[U8]): Either[Base_Types.String_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesString_Payload(reader: Reader): Base_Types.String_Payload = {
      val r = reader.readBase_TypesString_Payload()
      return r
    }
    val r = to(data, fBase_TypesString_Payload _)
    return r
  }

  def fromBase_TypesBits_Payload(o: Base_Types.Bits_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesBits_Payload(o)
    return w.result
  }

  def toBase_TypesBits_Payload(data: ISZ[U8]): Either[Base_Types.Bits_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesBits_Payload(reader: Reader): Base_Types.Bits_Payload = {
      val r = reader.readBase_TypesBits_Payload()
      return r
    }
    val r = to(data, fBase_TypesBits_Payload _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _)
    return r
  }

  def fromBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(o)
    return w.result
  }

  def toBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(data: ISZ[U8]): Either[BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(reader: Reader): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
      val r = reader.readBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PreState_Container()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PostState_Container()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _)
    return r
  }

  def fromBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(o)
    return w.result
  }

  def toBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(data: ISZ[U8]): Either[BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(reader: Reader): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
      val r = reader.readBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container(o: BuildingControl.Fan_i_tcp_fan_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PreState_Container(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container(reader: Reader): BuildingControl.Fan_i_tcp_fan_PreState_Container = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PreState_Container()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PreState_Container _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PreState_Container_P(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container_P(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container_P(reader: Reader): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PreState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PreState_Container_P _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PreState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PreState_Container_PS(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PreState_Container_PS(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PreState_Container_PS(reader: Reader): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PreState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PreState_Container_PS _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container(o: BuildingControl.Fan_i_tcp_fan_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PostState_Container(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container(reader: Reader): BuildingControl.Fan_i_tcp_fan_PostState_Container = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PostState_Container()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PostState_Container _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container_P(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PostState_Container_P(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container_P(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container_P(reader: Reader): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PostState_Container_P()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PostState_Container_P _)
    return r
  }

  def fromBuildingControlFan_i_tcp_fan_PostState_Container_PS(o: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBuildingControlFan_i_tcp_fan_PostState_Container_PS(o)
    return w.result
  }

  def toBuildingControlFan_i_tcp_fan_PostState_Container_PS(data: ISZ[U8]): Either[BuildingControl.Fan_i_tcp_fan_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fBuildingControlFan_i_tcp_fan_PostState_Container_PS(reader: Reader): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
      val r = reader.readBuildingControlFan_i_tcp_fan_PostState_Container_PS()
      return r
    }
    val r = to(data, fBuildingControlFan_i_tcp_fan_PostState_Container_PS _)
    return r
  }

  def from_artDataContent(o: art.DataContent, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.write_artDataContent(o)
    return w.result
  }

  def to_artDataContent(data: ISZ[U8]): Either[art.DataContent, MessagePack.ErrorMsg] = {
    def f_artDataContent(reader: Reader): art.DataContent = {
      val r = reader.read_artDataContent()
      return r
    }
    val r = to(data, f_artDataContent _)
    return r
  }

  def from_artEmpty(o: art.Empty, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.write_artEmpty(o)
    return w.result
  }

  def to_artEmpty(data: ISZ[U8]): Either[art.Empty, MessagePack.ErrorMsg] = {
    def f_artEmpty(reader: Reader): art.Empty = {
      val r = reader.read_artEmpty()
      return r
    }
    val r = to(data, f_artEmpty _)
    return r
  }

}