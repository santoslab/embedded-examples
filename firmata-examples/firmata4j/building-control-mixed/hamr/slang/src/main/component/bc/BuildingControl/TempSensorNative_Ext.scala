package bc.BuildingControl

import bc.BuildingControl.device.DeviceBridge

object TempSensorNative_Ext {
  def currentTempGet(): Temperature_i = {
    return Temperature_i(DeviceBridge.getCurrentTemp(), TempUnit.Fahrenheit)
  }
}
