package offon.Off_On.device

import org.sireum._
import org.firmata4j._
import org.firmata4j.firmata._
import FirmataUtil._

object Board {

  var port: String = _
  var device: IODevice = _
  var initRun: B = F

  def init(port: String): Unit = {
    this.synchronized {
      try {
        if (!initRun) {
          initRun = T
          device = new FirmataDevice(port.native)
          device.start()
          device.ensureInitializationIsDone()
        }
      } catch {
        case e: Throwable =>
          cprintln(T, e)
      }
    }
  }

  def ready: B = {
    return device.isReady
  }

  def analogRead(pin: Z, mode: PinMode.Type): Z = {
    // for now just let exception halt the program
    val p = device.getPin(pin.toInt)
    p.setMode(Pin.Mode.valueOf(mode.name.native))
    return Z(p.getValue)
  }

  def analogWrite(pin: Z, mode: PinMode.Type, value: Z): Unit = {
    // for now just let exception halt the program
    val p = device.getPin(pin.toInt)
    p.setMode(Pin.Mode.valueOf(mode.name.native))
    p.setValue(value.toInt)
  }
}
