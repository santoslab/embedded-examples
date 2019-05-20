// #Sireum

package proj

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val PingPongSystem_i_Instance_p_ping : proj.PingPong.Ping_i_Bridge = proj.PingPong.Ping_i_Bridge(
    id = 0,
    name = "PingPongSystem_i_Instance_p_ping",
    dispatchProtocol = Sporadic(min = 1000),

    ping_inn = Port[Base_Types.Integer_8] (id = 0, name = "PingPongSystem_i_Instance_p_ping_ping_inn", mode = EventIn),
    ping_out = Port[Base_Types.Integer_8] (id = 1, name = "PingPongSystem_i_Instance_p_ping_ping_out", mode = EventOut)
  )
  val PingPongSystem_i_Instance_p_pong : proj.PingPong.Pong_i_Bridge = proj.PingPong.Pong_i_Bridge(
    id = 1,
    name = "PingPongSystem_i_Instance_p_pong",
    dispatchProtocol = Sporadic(min = 1000),

    pong_inn = Port[Base_Types.Integer_8] (id = 2, name = "PingPongSystem_i_Instance_p_pong_pong_inn", mode = EventIn),
    pong_out = Port[Base_Types.Integer_8] (id = 3, name = "PingPongSystem_i_Instance_p_pong_pong_out", mode = EventOut)
  )

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (PingPongSystem_i_Instance_p_ping, PingPongSystem_i_Instance_p_pong),

      connections = ISZ (Connection(from = PingPongSystem_i_Instance_p_ping.ping_out, to = PingPongSystem_i_Instance_p_pong.pong_inn),
                         Connection(from = PingPongSystem_i_Instance_p_pong.pong_out, to = PingPongSystem_i_Instance_p_ping.ping_inn))
    )
  }
}