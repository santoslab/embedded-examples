// #Sireum

package bc.BuildingControl

import org.sireum._
import art._
import bc._

@sig trait TempControl_i_Api {
  def id: Art.BridgeId
  def currentTemp_Id : Art.PortId
  def fanAck_Id : Art.PortId
  def setPoint_Id : Art.PortId
  def fanCmd_Id : Art.PortId
  def tempChanged_Id : Art.PortId

  // Logika spec var representing port state for outgoing event data port
  @spec var fanCmd: Option[BuildingControl.FanCmd.Type] = $

  def put_fanCmd(value : BuildingControl.FanCmd.Type) : Unit = {
    Contract(
      Modifies(fanCmd),
      Ensures(
        fanCmd == Some(value)
      )
    )
    Spec {
      fanCmd = Some(value)
    }

    Art.putValue(fanCmd_Id, BuildingControl.FanCmd_Payload(value))
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

@datatype class TempControl_i_Initialization_Api (
  val id: Art.BridgeId,
  val currentTemp_Id : Art.PortId,
  val fanAck_Id : Art.PortId,
  val setPoint_Id : Art.PortId,
  val fanCmd_Id : Art.PortId,
  val tempChanged_Id : Art.PortId) extends TempControl_i_Api

@datatype class TempControl_i_Operational_Api (
  val id: Art.BridgeId,
  val currentTemp_Id : Art.PortId,
  val fanAck_Id : Art.PortId,
  val setPoint_Id : Art.PortId,
  val fanCmd_Id : Art.PortId,
  val tempChanged_Id : Art.PortId) extends TempControl_i_Api {

  // Logika spec var representing port state for incoming data port
  @spec var currentTemp: BuildingControl.Temperature_i = $

  def get_currentTemp() : Option[BuildingControl.Temperature_i] = {
    Contract(
      Ensures(
        Res == Some(currentTemp)
      )
    )
    val value : Option[BuildingControl.Temperature_i] = Art.getValue(currentTemp_Id) match {
      case Some(BuildingControl.Temperature_i_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port currentTemp.  Expecting 'BuildingControl.Temperature_i_Payload' but received ${v}")
        None[BuildingControl.Temperature_i]()
      case _ => None[BuildingControl.Temperature_i]()
    }
    return value
  }

  // Logika spec var representing port state for incoming event data port
  @spec var fanAck: Option[BuildingControl.FanAck.Type] = $

  def get_fanAck() : Option[BuildingControl.FanAck.Type] = {
    Contract(
      Ensures(
        Res == fanAck
      )
    )
    val value : Option[BuildingControl.FanAck.Type] = Art.getValue(fanAck_Id) match {
      case Some(BuildingControl.FanAck_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port fanAck.  Expecting 'BuildingControl.FanAck_Payload' but received ${v}")
        None[BuildingControl.FanAck.Type]()
      case _ => None[BuildingControl.FanAck.Type]()
    }
    return value
  }

  // Logika spec var representing port state for incoming event data port
  @spec var setPoint: Option[BuildingControl.SetPoint_i] = $

  def get_setPoint() : Option[BuildingControl.SetPoint_i] = {
    Contract(
      Ensures(
        Res == setPoint
      )
    )
    val value : Option[BuildingControl.SetPoint_i] = Art.getValue(setPoint_Id) match {
      case Some(BuildingControl.SetPoint_i_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port setPoint.  Expecting 'BuildingControl.SetPoint_i_Payload' but received ${v}")
        None[BuildingControl.SetPoint_i]()
      case _ => None[BuildingControl.SetPoint_i]()
    }
    return value
  }

  // Logika spec var representing port state for incoming event port
  @spec var tempChanged: Option[art.Empty] = $

  def get_tempChanged() : Option[art.Empty] = {
    Contract(
      Ensures(
        Res == tempChanged
      )
    )
    val value : Option[art.Empty] = Art.getValue(tempChanged_Id) match {
      case Some(Empty()) => Some(Empty())
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port tempChanged.  Expecting 'Empty' but received ${v}")
        None[art.Empty]()
      case _ => None[art.Empty]()
    }
    return value
  }
}
