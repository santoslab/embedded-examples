// #Sireum

package offon.Off_On

import org.sireum._
import offon._

// This file will not be overwritten so is safe to edit
object Off_p_off {

  var hyperperiod: Z = 0
  var countdown: Z = -1
  val delay: Z = 1

  def initialise(api: Off_Initialization_Api): Unit = {
  }

  def timeTriggered(api: Off_Operational_Api): Unit = {
    api.logInfo(s"Welcome to hyper-period $hyperperiod")

    api.get_turnOff() match {
      case Some(c) =>
        countdown = hyperperiod + c
        api.logInfo(s"OK, I'll will turn the LED off after ${c} hyper-periods")
      case _ =>
        if (countdown == hyperperiod) {
          SlangBoundary.onOff(F)
          api.put_turnOn(delay)
          api.logInfo(s"The LED was turned off and I requested it be turned on after ${delay} hyper-periods")
        }
    }
    hyperperiod = hyperperiod + 1
  }

  def activate(api: Off_Operational_Api): Unit = { }

  def deactivate(api: Off_Operational_Api): Unit = { }

  def finalise(api: Off_Operational_Api): Unit = { }

  def recover(api: Off_Operational_Api): Unit = { }
}
