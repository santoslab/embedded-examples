package math_library

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object MessageQueue_Ext {
  def create(msgid: Z): Z = halt("stub")
  def get(msgid: Z): Z = halt("stub")
  def send(msgid: Z, port: Art.PortId, d: DataContent): Unit = halt("stub")
  def receive(): (Art.PortId, DataContent) = halt("stub")
  def sendAsync(msgid: Z, port: Art.PortId, d: DataContent): B = halt("stub")
  def receiveAsync(): Option[(Art.PortId, DataContent)] = halt("stub")
  def remove(msgid: Z): Unit = halt("stub")
}
