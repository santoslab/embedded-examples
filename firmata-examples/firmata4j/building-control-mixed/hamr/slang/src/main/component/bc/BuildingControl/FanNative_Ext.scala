package bc.BuildingControl

import bc.BuildingControl.device.DeviceBridge

object FanNative_Ext {

  def fanCmdActuate(cmd: FanCmd.Type): FanAck.Type = {
    return DeviceBridge.sendFanCmd(cmd)
  }
}
