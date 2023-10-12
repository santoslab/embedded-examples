package offon.Off_On.device

import org.sireum._
import FirmataUtil._
case class BoardPinOut(pwmPin: Z, ledPin: Z, analog0Pin: Z)

object DeviceBridge {
  val MEGA2560 = BoardPinOut(9, 13, 54) // https://www.electronicshub.org/arduino-mega-pinout/
  val UNO = BoardPinOut(9, 13, 14)

  val board = UNO

  def init(port: String): Unit = {
    Board.init(port)
  }

  def ready: B = {
    return Board.ready
  }

  def turnOnOff(on: B): Unit = {
    Board.analogWrite(board.ledPin, PinMode.OUTPUT, if (on) 255 else 0)
  }
}
