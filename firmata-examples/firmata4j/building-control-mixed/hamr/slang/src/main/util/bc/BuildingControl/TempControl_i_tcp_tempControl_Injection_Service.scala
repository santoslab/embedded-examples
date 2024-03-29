// #Sireum
package bc.BuildingControl

import org.sireum._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@msig trait TempControl_i_tcp_tempControl_Injection_Provider {
  def pre_receiveInput(): Unit
}

object TempControl_i_tcp_tempControl_Injection_Service {

  var providers: MSZ[TempControl_i_tcp_tempControl_Injection_Provider] = MSZ()

  def register(provider: TempControl_i_tcp_tempControl_Injection_Provider): Unit = {
    providers = providers :+ provider
  }

  def pre_receiveInput(): Unit = {
    for (provider <- providers) {
      provider.pre_receiveInput()
    }
  }
}