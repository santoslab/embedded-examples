// #Sireum

package proj.PingPong

import org.sireum._
import proj._
import org.sireum.Z8._

@record class Pong_i_Impl (val api : Pong_i_Bridge.Api) extends Pong_i {

  var last: Z8 = z8"-1"

  override def timeTriggered(): Unit = {

    api.getpong_inn() match {
      case Some(x) =>

        if(last != x.value) {
          last = x.value

          //api.logInfo(s"Received ${x.value}")

          val _x: Z8 = x.value + z8"1"

          api.setpong_out(Base_Types.Integer_8(_x))
        }
      case _ =>
    }
  }
}
