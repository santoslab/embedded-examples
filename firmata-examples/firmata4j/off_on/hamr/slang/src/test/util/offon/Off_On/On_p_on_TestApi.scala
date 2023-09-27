// #Sireum

package offon.Off_On

import org.sireum._
import art.{Art, ArtNative, Empty}
import offon._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun
@msig trait On_p_on_TestApi {

  def BeforeEntrypoint(): Unit = {
    Art.initTest(Arch.OffOnDemo_i_Instance_p_on)
  }

  def AfterEntrypoint(): Unit = {
    Art.finalizeTest(Arch.OffOnDemo_i_Instance_p_on)
  }

  def testCompute(): Unit = {
    Art.manuallyClearOutput()
    Art.testCompute(Arch.OffOnDemo_i_Instance_p_on)
  }

  def testInitialise(): Unit = {
    Art.manuallyClearOutput()
    Art.testInitialise(Arch.OffOnDemo_i_Instance_p_on)
  }

  /** helper function to set the values of all input ports.
   * @param turnOn payloads for event data port turnOn.
   *   ART currently supports single element event data queues so
   *   only the last element of turnOn will be used
   */
  def put_concrete_inputs(turnOn : ISZ[Base_Types.Integer]): Unit = {
    for(v <- turnOn){
      put_turnOn(v)
    }
  }


  /** helper function to check On_p_on's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param turnOff method that will be called with the payloads to be sent
   *        on the outgoing event data port 'turnOff'.
   */
  def check_concrete_output(turnOff: ISZ[Base_Types.Integer] => B): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var turnOffValue: ISZ[Base_Types.Integer] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_turnOff().nonEmpty) { turnOffValue = turnOffValue :+ get_turnOff().get }
    if(!turnOff(turnOffValue)) {
      testFailures = testFailures :+ st"'turnOff' did not match expected: received ${turnOffValue.size} events with the following payloads ${turnOffValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_turnOn(value : Base_Types.Integer): Unit = {
    ArtNative.insertInInfrastructurePort(Arch.OffOnDemo_i_Instance_p_on.operational_api.turnOn_Id, Base_Types.Integer_Payload(value))
  }

  // getter for out EventDataPort
  def get_turnOff(): Option[Base_Types.Integer] = {
    val value: Option[Base_Types.Integer] = get_turnOff_payload() match {
      case Some(Base_Types.Integer_Payload(v)) => Some(v)
      case Some(v) => halt(s"Unexpected payload on port turnOff.  Expecting 'Base_Types.Integer_Payload' but received ${v}")
      case _ => None[Base_Types.Integer]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_turnOff_payload(): Option[Base_Types.Integer_Payload] = {
    return ArtNative.observeOutInfrastructurePort(Arch.OffOnDemo_i_Instance_p_on.initialization_api.turnOff_Id).asInstanceOf[Option[Base_Types.Integer_Payload]]
  }

}
