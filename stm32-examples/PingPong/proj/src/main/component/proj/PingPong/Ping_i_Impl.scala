// #Sireum

package proj.PingPong

import org.sireum._
import proj._
import org.sireum.Z8._

@record class Ping_i_Impl (val api : Ping_i_Bridge.Api) extends Ping_i {

  var last: Z8 = z8"-1"

  override def initialise(): Unit = {
    api.setping_out(Base_Types.Integer_8(z8"0"))

    // force send output
    art.Art.sendOutput(ISZ(), ISZ(Arch.PingPongSystem_i_Instance_p_ping.ping_out.id))
  }

  override def timeTriggered(): Unit = {

    api.getping_inn() match {
      case Some(x) =>

        if(last != x.value) {
          last = x.value

          //api.logInfo(s"Received ${x.value}")

          val _x: Z8 = x.value + z8"1"

          api.setping_out(Base_Types.Integer_8(_x))
        }

      case _ =>
    }
  }
}
