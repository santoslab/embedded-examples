// #Sireum

package building_control.BuildingControl

import org.sireum._
import building_control._

// This file was auto-generated.  Do not edit

@msig trait Fan_i {

  def api : Fan_i_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handlefanCmd(value : Base_Types.Boolean): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default fanCmd implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}