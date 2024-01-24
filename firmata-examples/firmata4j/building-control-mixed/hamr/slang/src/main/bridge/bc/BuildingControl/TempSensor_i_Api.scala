// #Sireum

package bc.BuildingControl

import org.sireum._
import art._
import bc._

@sig trait TempSensor_i_Api {
  def id: Art.BridgeId
  def currentTemp_Id : Art.PortId
  def tempChanged_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var currentTemp: BuildingControl.Temperature_i = $

  def put_currentTemp(value : BuildingControl.Temperature_i) : Unit = {
    Contract(
      Modifies(currentTemp),
      Ensures(
        currentTemp == value
      )
    )
    Spec {
      currentTemp = value
    }

    Art.putValue(currentTemp_Id, BuildingControl.Temperature_i_Payload(value))
  }

  // Logika spec var representing port state for outgoing event port
  @spec var tempChanged: Option[art.Empty] = $

  def put_tempChanged() : Unit = {
    Contract(
      Modifies(tempChanged),
      Ensures(
        tempChanged == Some(Empty())
      )
    )
    Spec {
      tempChanged = Some(Empty())
    }

    Art.putValue(tempChanged_Id, art.Empty())
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

@datatype class TempSensor_i_Initialization_Api (
  val id: Art.BridgeId,
  val currentTemp_Id : Art.PortId,
  val tempChanged_Id : Art.PortId) extends TempSensor_i_Api

@datatype class TempSensor_i_Operational_Api (
  val id: Art.BridgeId,
  val currentTemp_Id : Art.PortId,
  val tempChanged_Id : Art.PortId) extends TempSensor_i_Api {

}
