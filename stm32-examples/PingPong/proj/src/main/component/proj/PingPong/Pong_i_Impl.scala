// #Sireum

package proj.PingPong

import org.sireum._
import proj._
import org.sireum.Z8._
import proj.Base_Types.Integer_8

@record class Pong_i_Impl (val api : Pong_i_Bridge.Api) extends Pong_i {

  override def handlepong_inn(value: Integer_8): Unit = {
    api.logInfo(s"Received ${value}")

    PongExt.blinkBlueLED(value.value)

    val _x: Z8 = value.value + z8"1"

    api.sendpong_out(Base_Types.Integer_8(_x))
  }
}

@ext object PongExt {
  def blinkBlueLED(count: Z8): Unit = $
}
