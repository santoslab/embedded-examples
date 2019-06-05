// #Sireum

package building_control.BuildingControl

import org.sireum._
import building_control._

// This file was auto-generated.  Do not edit

@msig trait TempSensor_i {

  def api : TempSensor_i_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def timeTriggered() : Unit = {}

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}