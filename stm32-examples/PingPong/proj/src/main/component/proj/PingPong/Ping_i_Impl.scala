// #Sireum

package proj.PingPong

import org.sireum._
import proj._
import org.sireum.Z8._
import proj.Base_Types.Integer_8

@record class Ping_i_Impl (val api : Ping_i_Bridge.Api) extends Ping_i {

  override def initialise(): Unit = {
    api.sendping_out(Base_Types.Integer_8(z8"0"))

    // force send output
    art.Art.sendOutput(ISZ(), ISZ(Arch.PingPongSystem_i_Instance_p_ping.ping_out.id))
  }

  override def handleping_inn(value: Integer_8): Unit = {
    api.logInfo(s"Received ${value}")

    PingExt.blinkRedLED(value.value)

    val _x: Z8 = value.value + z8"1"

    api.sendping_out(Base_Types.Integer_8(_x))
  }
}

@ext object PingExt {
  def blinkRedLED(count: Z8): Unit = $
}