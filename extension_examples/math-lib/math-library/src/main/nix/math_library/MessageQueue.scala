// #Sireum

package math_library

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

@ext object MessageQueue {
  def create(msgid: Z): Z = $
  def get(msgid: Z): Z = $
  def send(msgid: Z, port: Art.PortId, d: DataContent): Unit = $
  def receive(): (Art.PortId, DataContent) = $
  def sendAsync(msgid: Z, port: Art.PortId, d: DataContent): B = $
  def receiveAsync(): Option[(Art.PortId, DataContent)] = $
  def remove(msgid: Z): Unit = $
}
