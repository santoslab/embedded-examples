// #Sireum

package bc.BuildingControl

import org.sireum._
import art._
import bc._

@sig trait Fan_i_Api {
  def id: Art.BridgeId
  def fanCmd_Id : Art.PortId
  def fanAck_Id : Art.PortId

  // Logika spec var representing port state for outgoing event data port
  @spec var fanAck: Option[BuildingControl.FanAck.Type] = $

  def put_fanAck(value : BuildingControl.FanAck.Type) : Unit = {
    Contract(
      Modifies(fanAck),
      Ensures(
        fanAck == Some(value)
      )
    )
    Spec {
      fanAck = Some(value)
    }

    Art.putValue(fanAck_Id, BuildingControl.FanAck_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class Fan_i_Initialization_Api (
  val id: Art.BridgeId,
  val fanCmd_Id : Art.PortId,
  val fanAck_Id : Art.PortId) extends Fan_i_Api

@datatype class Fan_i_Operational_Api (
  val id: Art.BridgeId,
  val fanCmd_Id : Art.PortId,
  val fanAck_Id : Art.PortId) extends Fan_i_Api {

  // Logika spec var representing port state for incoming event data port
  @spec var fanCmd: Option[BuildingControl.FanCmd.Type] = $

  def get_fanCmd() : Option[BuildingControl.FanCmd.Type] = {
    Contract(
      Ensures(
        Res == fanCmd
      )
    )
    val value : Option[BuildingControl.FanCmd.Type] = Art.getValue(fanCmd_Id) match {
      case Some(BuildingControl.FanCmd_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port fanCmd.  Expecting 'BuildingControl.FanCmd_Payload' but received ${v}")
        None[BuildingControl.FanCmd.Type]()
      case _ => None[BuildingControl.FanCmd.Type]()
    }
    return value
  }
}
