// #Sireum
package math_library

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object PlatformNix {

  var seed: Z = 0
  var msgidOpt: Option[Z] = None()

  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = {
    PlatformNix.seed = seed
    portOpt match {
      case Some(port) =>
        val msgid = MessageQueue.create(seed + port)
        msgidOpt = Some(msgid)
      case _ =>
    }
  }

  def receive(portOpt: Option[Art.PortId]): (Art.PortId, DataContent) = {
    val p = MessageQueue.receive()
    portOpt match {
      case Some(port) => assert(p._1 == port)
      case _ =>
    }
    return p
  }

  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = {
    MessageQueue.send(seed + app, port, data)
  }

  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = {
    val r = MessageQueue.sendAsync(seed + app, port, data)
    return r
  }

  def receiveAsync(portOpt: Option[Art.PortId]): Option[(Art.PortId, DataContent)] = {
    val pOpt = MessageQueue.receiveAsync()
    (portOpt, pOpt) match {
      case (Some(port), Some((p, _))) => assert(p == port); return pOpt
      case _ => return None()
    }
  }

  def finalise(): Unit = {
    msgidOpt match {
      case Some(msgid) => MessageQueue.remove(msgid)
      case _ =>
    }
  }
}
