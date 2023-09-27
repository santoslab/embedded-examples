// #Sireum

package offon.Off_On

import org.sireum._
import offon._

// This file will not be overwritten so is safe to edit
object On_p_on {

  var hyperperiod: Z = 0
  var countdown: Z = 0
  val delay: Z = 3

  def initialise(api: On_Initialization_Api): Unit = {
    SlangBoundary.init()
  }

  def timeTriggered(api: On_Operational_Api): Unit = {
    api.logInfo(s"Welcome to hyper-period $hyperperiod")

    api.get_turnOn() match {
      case Some(c) =>
        countdown = hyperperiod + c
        api.logInfo(s"Alright, I'll turn the LED on after $countdown hyper-periods")
      case _ =>
        if (countdown == hyperperiod) {
          SlangBoundary.onOff(T)
          api.put_turnOff(delay)
          api.logInfo(s"Turned LED on and I requested it be turned off after $delay hyper-periods")
        }
    }
    hyperperiod = hyperperiod + 1
  }

  def activate(api: On_Operational_Api): Unit = { }

  def deactivate(api: On_Operational_Api): Unit = { }

  def finalise(api: On_Operational_Api): Unit = { }

  def recover(api: On_Operational_Api): Unit = { }
}
