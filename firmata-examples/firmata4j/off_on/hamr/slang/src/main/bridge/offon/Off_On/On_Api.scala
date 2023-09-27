// #Sireum

package offon.Off_On

import org.sireum._
import art._
import offon._

@sig trait On_Api {
  def id: Art.BridgeId
  def turnOff_Id : Art.PortId
  def turnOn_Id : Art.PortId

  // Logika spec var representing port state for outgoing event data port
  @spec var turnOff: Option[Base_Types.Integer] = $

  def put_turnOff(value : Base_Types.Integer) : Unit = {
    Contract(
      Modifies(turnOff),
      Ensures(
        turnOff == Some(value)
      )
    )
    Spec {
      turnOff = Some(value)
    }

    Art.putValue(turnOff_Id, Base_Types.Integer_Payload(value))
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

@datatype class On_Initialization_Api (
  val id: Art.BridgeId,
  val turnOff_Id : Art.PortId,
  val turnOn_Id : Art.PortId) extends On_Api

@datatype class On_Operational_Api (
  val id: Art.BridgeId,
  val turnOff_Id : Art.PortId,
  val turnOn_Id : Art.PortId) extends On_Api {

  // Logika spec var representing port state for incoming event data port
  @spec var turnOn: Option[Base_Types.Integer] = $

  def get_turnOn() : Option[Base_Types.Integer] = {
    Contract(
      Ensures(
        Res == turnOn
      )
    )
    val value : Option[Base_Types.Integer] = Art.getValue(turnOn_Id) match {
      case Some(Base_Types.Integer_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port turnOn.  Expecting 'Base_Types.Integer_Payload' but received ${v}")
        None[Base_Types.Integer]()
      case _ => None[Base_Types.Integer]()
    }
    return value
  }
}
