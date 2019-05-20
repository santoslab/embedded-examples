// #Sireum

package proj.PingPong

import org.sireum._
import proj._

// This file was auto-generated.  Do not edit

@msig trait Pong_i {

  def api : Pong_i_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handlepong_inn(value : Base_Types.Integer_8): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default pong_inn implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}