// #Sireum

package proj.PingPong

import org.sireum._
import proj._

// This file was auto-generated.  Do not edit

@msig trait Ping_i {

  def api : Ping_i_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handleping_inn(value : Base_Types.Integer_8): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default ping_inn implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}