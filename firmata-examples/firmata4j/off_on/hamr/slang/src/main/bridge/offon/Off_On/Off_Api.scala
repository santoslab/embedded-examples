// #Sireum

package offon.Off_On

import org.sireum._
import art._
import offon._

@sig trait Off_Api {
  def id: Art.BridgeId
  def turnOff_Id : Art.PortId
  def turnOn_Id : Art.PortId

  // Logika spec var representing port state for outgoing event data port
  @spec var turnOn: Option[Base_Types.Integer] = $

  def put_turnOn(value : Base_Types.Integer) : Unit = {
    Contract(
      Modifies(turnOn),
      Ensures(
        turnOn == Some(value)
      )
    )
    Spec {
      turnOn = Some(value)
    }

    Art.putValue(turnOn_Id, Base_Types.Integer_Payload(value))
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

@datatype class Off_Initialization_Api (
  val id: Art.BridgeId,
  val turnOff_Id : Art.PortId,
  val turnOn_Id : Art.PortId) extends Off_Api

@datatype class Off_Operational_Api (
  val id: Art.BridgeId,
  val turnOff_Id : Art.PortId,
  val turnOn_Id : Art.PortId) extends Off_Api {

  // Logika spec var representing port state for incoming event data port
  @spec var turnOff: Option[Base_Types.Integer] = $

  def get_turnOff() : Option[Base_Types.Integer] = {
    Contract(
      Ensures(
        Res == turnOff
      )
    )
    val value : Option[Base_Types.Integer] = Art.getValue(turnOff_Id) match {
      case Some(Base_Types.Integer_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port turnOff.  Expecting 'Base_Types.Integer_Payload' but received ${v}")
        None[Base_Types.Integer]()
      case _ => None[Base_Types.Integer]()
    }
    return value
  }
}
