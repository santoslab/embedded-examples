package offon.Off_On.device

import org.sireum._
import FirmataUtil._
case class BoardPinOut(pwmPin: Z, ledPin: Z, analog0Pin: Z)

object DeviceBridge {
  val MEGA2560 = BoardPinOut(9, 13, 54) // https://www.electronicshub.org/arduino-mega-pinout/
  val UNO = BoardPinOut(9, 13, 14)

  val board = UNO

  val port: String = "/dev/cu.usbmodem2201"

  def init(): Unit = {
    Board.init(port)
  }

  def ready: B = {
    init()
    return Board.ready
  }

  def turnOnOff(on: B): Unit = {
    init()

    Board.analogWrite(board.ledPin, PinMode.OUTPUT, if (on) 255 else 0)
  }
}
