// #Sireum

package bc.BuildingControl

import org.sireum._
import art._
import bc._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object TempControl_i_tcp_tempControl_EntryPoint_Companion {

  var preStateContainer_wL: Option[TempControl_i_tcp_tempControl_PreState_Container_PS] = None()

  def pre_initialise(): Unit = {
    // assume/require contracts cannot refer to incoming ports or
    // state variables so nothing to do here
  }

  def post_initialise(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      TempControl_i_tcp_tempControl_PostState_Container_PS(
        api_fanCmd = 
          if (Art.observeOutPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanCmd_Id).nonEmpty)
            Some(Art.observeOutPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanCmd_Id).get.asInstanceOf[BuildingControl.FanCmd_Payload].value)
          else None())

    // the rest can now be performed via a different thread
    bc.runtimemonitor.RuntimeMonitor.observeInitialisePostState(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.id, bc.runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_postInit, postStateContainer_wL)
  }

  def pre_compute(): Unit = {
    // block the component while its pre-state values are retrieved
    preStateContainer_wL = Some(
      TempControl_i_tcp_tempControl_PreState_Container_PS(
        api_tempChanged = Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.tempChanged_Id).asInstanceOf[Option[art.Empty]], 
        api_fanAck = 
          if (Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanAck_Id).nonEmpty)
            Some(Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanAck_Id).get.asInstanceOf[BuildingControl.FanAck_Payload].value)
          else None(), 
        api_setPoint = 
          if (Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.setPoint_Id).nonEmpty)
            Some(Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.setPoint_Id).get.asInstanceOf[BuildingControl.SetPoint_i_Payload].value)
          else None(), 
        api_currentTemp = Art.observeInPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.currentTemp_Id).get.asInstanceOf[BuildingControl.Temperature_i_Payload].value))

    // the rest can now be performed via a different thread
    bc.runtimemonitor.RuntimeMonitor.observeComputePreState(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.id, bc.runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_preCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]])
  }

  def post_compute(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      TempControl_i_tcp_tempControl_PostState_Container_PS(
        api_fanCmd = 
          if (Art.observeOutPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanCmd_Id).nonEmpty)
            Some(Art.observeOutPortVariable(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.operational_api.fanCmd_Id).get.asInstanceOf[BuildingControl.FanCmd_Payload].value)
          else None())

    // the rest can now be performed via a different thread
    bc.runtimemonitor.RuntimeMonitor.observeComputePrePostState(Arch.BuildingControlDemo_i_Instance_tcp_tempControl.id, bc.runtimemonitor.ObservationKind.BuildingControlDemo_i_Instance_tcp_tempControl_postCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]], postStateContainer_wL)
  }
}