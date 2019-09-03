// #Sireum

package art

import org.sireum._


@record class ArchitectureDescription(components: MSZ[Bridge],
                                      connections: ISZ[UConnection]) {
  @spec val allPorts: ISZ[UPort] = $

  @spec def allPortsSpec(i: Z): ISZ[UPort] = $

}

@datatype trait UConnection {

  def from: UPort

  def to: UPort
}

@datatype class Connection[T](val from: Port[T], val to: Port[T])
  extends UConnection


@enum object PortMode {
  'DataIn
  'DataOut
  'EventIn
  'EventOut
}

@datatype trait UPort {
  def id: Art.PortId

  //def name: String

  def mode: PortMode.Type
}

@datatype class Port[T](val id: Art.PortId,
                        //val name: String,
                        val mode: PortMode.Type)
  extends UPort

@msig trait Bridge {
  def id: Art.BridgeId

  //def name: String

  def ports: Bridge.Ports

  def entryPoints: Bridge.EntryPoints

  def dispatchProtocol: DispatchPropertyProtocol
}


object Bridge {

  // initialise()  ( compute() | activate() deactivate() | recover() )* finalise()
  @msig trait EntryPoints {

    def initialise(): Unit

    def activate(): Unit

    def deactivate(): Unit

    def compute(): Unit

    def recover(): Unit

    def finalise(): Unit
  }

  @datatype class Ports(all: ISZ[UPort],
                        dataIns: ISZ[UPort],
                        dataOuts: ISZ[UPort],
                        eventIns: ISZ[UPort],
                        eventOuts: ISZ[UPort])

}


@datatype trait DispatchPropertyProtocol

object DispatchPropertyProtocol {

  @datatype class Periodic(period: Z) extends DispatchPropertyProtocol

  // @datatype class Aperiodic() extends DispatchPropertyProtocol

  @datatype class Sporadic(min: Z) extends DispatchPropertyProtocol

  // @datatype class Timed() extends DispatchPropertyProtocol

  // @datatype class Hybrid() extends DispatchPropertyProtocol
}

@datatype trait DispatchStatus

@datatype class TimeTriggered() extends DispatchStatus

@datatype class EventTriggered(portIds: ISZ[Art.PortId]) extends DispatchStatus