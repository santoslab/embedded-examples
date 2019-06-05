// #Sireum

package building_control.BuildingControl

import org.sireum._
import building_control._

// This file was auto-generated.  Do not edit

@msig trait TempControl_i {

  def api : TempControl_i_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handlecurrentTemp(value : Base_Types.Integer_16): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default currentTemp implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}