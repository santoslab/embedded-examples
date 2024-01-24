// #Sireum

package bc

import org.sireum._
import org.sireum.Random.Gen64

/*
GENERATED FROM

TempUnit.scala

Temperature_i.scala

SetPoint_i.scala

FanAck.scala

FanCmd.scala

Base_Types.scala

TempSensor_i_tcp_tempSensor__Containers.scala

TempControl_i_tcp_tempControl__Containers.scala

Fan_i_tcp_fan__Containers.scala

ObservationKind.scala

DataContent.scala

Aux_Types.scala

*/

@msig trait RandomLibI {
  def gen: org.sireum.Random.Gen

  def get_numElement: Z
  def set_numElement(s: Z): Unit

  // ========  Z ==========
    def get_Config_Z: Config_Z
    def set_Config_Z(config: Config_Z): RandomLib

    def nextZ(): Z = {
      val conf = get_Config_Z

      var r: Z = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextZ()
          else
            gen.nextZBetween(S64.Min.toZ, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextZBetween(conf.low.get, S64.Max.toZ)
          else
            gen.nextZBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_Z.attempts >= 0) {
       for (i <- 0 to get_Config_Z.attempts) {
         if (get_Config_Z.filter(r)) {
           return r
         }
         if (get_Config_Z.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextZ()
           else
              gen.nextZBetween(S64.Min.toZ, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextZBetween(conf.low.get, S64.Max.toZ)
            else
             gen.nextZBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_Z.filter(r)) {
           return r
         }
         if (get_Config_Z.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextZ()
           else
              gen.nextZBetween(S64.Min.toZ, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextZBetween(conf.low.get, S64.Max.toZ)
            else
             gen.nextZBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  B ==========}
    def get_Config_B: Config_B
    def set_Config_B(config: Config_B): RandomLib

    def nextB(): B = {
      var r = gen.nextB()
      if(get_Config_B.attempts >= 0) {
       for (i <- 0 to get_Config_B.attempts) {
         if (get_Config_B.filter(r)) {
           return r
         }
         if (get_Config_B.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = gen.nextB()
       }
      } else {
       while(T) {
         if (get_Config_B.filter(r)) {
           return r
         }
         if (get_Config_B.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = gen.nextB()
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  C ==========
    def get_Config_C: Config_C
    def set_Config_C(config: Config_C): RandomLib

    def nextC(): C = {
      val conf = get_Config_C

      var r: C = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextC()
          else
            gen.nextCBetween(C.fromZ(0), conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextCBetween(conf.low.get, C.fromZ(1114111))
          else
            gen.nextCBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_C.attempts >= 0) {
       for (i <- 0 to get_Config_C.attempts) {
         if (get_Config_C.filter(r)) {
           return r
         }
         if (get_Config_C.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextC()
           else
              gen.nextCBetween(C.fromZ(0), conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextCBetween(conf.low.get, C.fromZ(1114111))
            else
             gen.nextCBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_C.filter(r)) {
           return r
         }
         if (get_Config_C.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextC()
           else
              gen.nextCBetween(C.fromZ(0), conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextCBetween(conf.low.get, C.fromZ(1114111))
            else
             gen.nextCBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  R ==========
    def get_Config_R: Config_R
    def set_Config_R(config: Config_R): RandomLib

    def nextR(): R = {
      val conf = get_Config_R

      var r: R = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextR()
          else
            gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
          else
            gen.nextRBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_R.attempts >= 0) {
       for (i <- 0 to get_Config_R.attempts) {
         if (get_Config_R.filter(r)) {
           return r
         }
         if (get_Config_R.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextR()
           else
              gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
            else
             gen.nextRBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_R.filter(r)) {
           return r
         }
         if (get_Config_R.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextR()
           else
              gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
            else
             gen.nextRBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  F32 ==========
    def get_Config_F32: Config_F32
    def set_Config_F32(config: Config_F32): RandomLib

    def nextF32(): F32 = {
      val conf = get_Config_F32

      var r: F32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextF32()
          else
            gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
          else
            gen.nextF32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_F32.attempts >= 0) {
       for (i <- 0 to get_Config_F32.attempts) {
         if (get_Config_F32.filter(r)) {
           return r
         }
         if (get_Config_F32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF32()
           else
              gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
            else
             gen.nextF32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_F32.filter(r)) {
           return r
         }
         if (get_Config_F32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF32()
           else
              gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
            else
             gen.nextF32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  F64 ==========
    def get_Config_F64: Config_F64
    def set_Config_F64(config: Config_F64): RandomLib

    def nextF64(): F64 = {
      val conf = get_Config_F64

      var r: F64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextF64()
          else
            gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
          else
            gen.nextF64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_F64.attempts >= 0) {
       for (i <- 0 to get_Config_F64.attempts) {
         if (get_Config_F64.filter(r)) {
           return r
         }
         if (get_Config_F64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF64()
           else
              gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
            else
             gen.nextF64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_F64.filter(r)) {
           return r
         }
         if (get_Config_F64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF64()
           else
              gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
            else
             gen.nextF64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S8 ==========
    def get_Config_S8: Config_S8
    def set_Config_S8(config: Config_S8): RandomLib

    def nextS8(): S8 = {
      val conf = get_Config_S8

      var r: S8 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS8()
          else
            gen.nextS8Between(S8.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS8Between(conf.low.get, S8.Max)
          else
            gen.nextS8Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S8.attempts >= 0) {
       for (i <- 0 to get_Config_S8.attempts) {
         if (get_Config_S8.filter(r)) {
           return r
         }
         if (get_Config_S8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS8()
           else
              gen.nextS8Between(S8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS8Between(conf.low.get, S8.Max)
            else
             gen.nextS8Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S8.filter(r)) {
           return r
         }
         if (get_Config_S8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS8()
           else
              gen.nextS8Between(S8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS8Between(conf.low.get, S8.Max)
            else
             gen.nextS8Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S16 ==========
    def get_Config_S16: Config_S16
    def set_Config_S16(config: Config_S16): RandomLib

    def nextS16(): S16 = {
      val conf = get_Config_S16

      var r: S16 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS16()
          else
            gen.nextS16Between(S16.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS16Between(conf.low.get, S16.Max)
          else
            gen.nextS16Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S16.attempts >= 0) {
       for (i <- 0 to get_Config_S16.attempts) {
         if (get_Config_S16.filter(r)) {
           return r
         }
         if (get_Config_S16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS16()
           else
              gen.nextS16Between(S16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS16Between(conf.low.get, S16.Max)
            else
             gen.nextS16Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S16.filter(r)) {
           return r
         }
         if (get_Config_S16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS16()
           else
              gen.nextS16Between(S16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS16Between(conf.low.get, S16.Max)
            else
             gen.nextS16Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S32 ==========
    def get_Config_S32: Config_S32
    def set_Config_S32(config: Config_S32): RandomLib

    def nextS32(): S32 = {
      val conf = get_Config_S32

      var r: S32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS32()
          else
            gen.nextS32Between(S32.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS32Between(conf.low.get, S32.Max)
          else
            gen.nextS32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S32.attempts >= 0) {
       for (i <- 0 to get_Config_S32.attempts) {
         if (get_Config_S32.filter(r)) {
           return r
         }
         if (get_Config_S32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS32()
           else
              gen.nextS32Between(S32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS32Between(conf.low.get, S32.Max)
            else
             gen.nextS32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S32.filter(r)) {
           return r
         }
         if (get_Config_S32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS32()
           else
              gen.nextS32Between(S32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS32Between(conf.low.get, S32.Max)
            else
             gen.nextS32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S64 ==========
    def get_Config_S64: Config_S64
    def set_Config_S64(config: Config_S64): RandomLib

    def nextS64(): S64 = {
      val conf = get_Config_S64

      var r: S64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS64()
          else
            gen.nextS64Between(S64.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS64Between(conf.low.get, S64.Max)
          else
            gen.nextS64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S64.attempts >= 0) {
       for (i <- 0 to get_Config_S64.attempts) {
         if (get_Config_S64.filter(r)) {
           return r
         }
         if (get_Config_S64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS64()
           else
              gen.nextS64Between(S64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS64Between(conf.low.get, S64.Max)
            else
             gen.nextS64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S64.filter(r)) {
           return r
         }
         if (get_Config_S64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS64()
           else
              gen.nextS64Between(S64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS64Between(conf.low.get, S64.Max)
            else
             gen.nextS64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U8 ==========
    def get_Config_U8: Config_U8
    def set_Config_U8(config: Config_U8): RandomLib

    def nextU8(): U8 = {
      val conf = get_Config_U8

      var r: U8 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU8()
          else
            gen.nextU8Between(U8.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU8Between(conf.low.get, U8.Max)
          else
            gen.nextU8Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U8.attempts >= 0) {
       for (i <- 0 to get_Config_U8.attempts) {
         if (get_Config_U8.filter(r)) {
           return r
         }
         if (get_Config_U8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU8()
           else
              gen.nextU8Between(U8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU8Between(conf.low.get, U8.Max)
            else
             gen.nextU8Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U8.filter(r)) {
           return r
         }
         if (get_Config_U8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU8()
           else
              gen.nextU8Between(U8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU8Between(conf.low.get, U8.Max)
            else
             gen.nextU8Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U16 ==========
    def get_Config_U16: Config_U16
    def set_Config_U16(config: Config_U16): RandomLib

    def nextU16(): U16 = {
      val conf = get_Config_U16

      var r: U16 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU16()
          else
            gen.nextU16Between(U16.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU16Between(conf.low.get, U16.Max)
          else
            gen.nextU16Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U16.attempts >= 0) {
       for (i <- 0 to get_Config_U16.attempts) {
         if (get_Config_U16.filter(r)) {
           return r
         }
         if (get_Config_U16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU16()
           else
              gen.nextU16Between(U16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU16Between(conf.low.get, U16.Max)
            else
             gen.nextU16Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U16.filter(r)) {
           return r
         }
         if (get_Config_U16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU16()
           else
              gen.nextU16Between(U16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU16Between(conf.low.get, U16.Max)
            else
             gen.nextU16Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U32 ==========
    def get_Config_U32: Config_U32
    def set_Config_U32(config: Config_U32): RandomLib

    def nextU32(): U32 = {
      val conf = get_Config_U32

      var r: U32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU32()
          else
            gen.nextU32Between(U32.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU32Between(conf.low.get, U32.Max)
          else
            gen.nextU32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U32.attempts >= 0) {
       for (i <- 0 to get_Config_U32.attempts) {
         if (get_Config_U32.filter(r)) {
           return r
         }
         if (get_Config_U32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU32()
           else
              gen.nextU32Between(U32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU32Between(conf.low.get, U32.Max)
            else
             gen.nextU32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U32.filter(r)) {
           return r
         }
         if (get_Config_U32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU32()
           else
              gen.nextU32Between(U32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU32Between(conf.low.get, U32.Max)
            else
             gen.nextU32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U64 ==========
    def get_Config_U64: Config_U64
    def set_Config_U64(config: Config_U64): RandomLib

    def nextU64(): U64 = {
      val conf = get_Config_U64

      var r: U64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU64()
          else
            gen.nextU64Between(U64.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU64Between(conf.low.get, U64.Max)
          else
            gen.nextU64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U64.attempts >= 0) {
       for (i <- 0 to get_Config_U64.attempts) {
         if (get_Config_U64.filter(r)) {
           return r
         }
         if (get_Config_U64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU64()
           else
              gen.nextU64Between(U64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU64Between(conf.low.get, U64.Max)
            else
             gen.nextU64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U64.filter(r)) {
           return r
         }
         if (get_Config_U64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU64()
           else
              gen.nextU64Between(U64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU64Between(conf.low.get, U64.Max)
            else
             gen.nextU64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ============= String ===================

  def get_Config_String: Config_String
  def set_Config_String(config: Config_String): RandomLib

  def nextString(): String = {

    var length: Z = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
    var str: String = ""
    for(r <- 0 until length){
      str = s"${str}${nextC().string}"
    }

    if(get_Config_String.attempts >= 0) {
      for (i <- 0 to get_Config_String.attempts) {
        if(get_Config_String.filter(str)) {
          return str
        }
        if(get_Config_String.verbose) {
          println(s"Retrying for failing value: $str")
        }

        length = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
        str = ""
        for (r <- 0 until length) {
          str = s"${str}${nextC().string}"
        }
      }
    } else {
      while(T) {
        if (get_Config_String.filter(str)) {
          return str
        }
        if (get_Config_String.verbose) {
          println(s"Retrying for failing value: $str")
        }

        length = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
        str = ""
        for (r <- 0 until length) {
          str = s"${str}${nextC().string}"
        }
      }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= art.DataContent ===================

  def get_Config__artDataContent: Config__artDataContent
  def set_Config__artDataContent(config: Config__artDataContent): RandomLib

  def next_artDataContent(): art.DataContent = {
    var callEnum: ISZ[_artDataContent_DataTypeId.Type] = ISZ(_artDataContent_DataTypeId._artEmpty_Id, _artDataContent_DataTypeId.Base_TypesBits_Payload_Id, _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id, _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id, _artDataContent_DataTypeId.Base_TypesString_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id, _artDataContent_DataTypeId.BuildingControlFanAck_Payload_Id, _artDataContent_DataTypeId.BuildingControlFanCmd_Payload_Id, _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlSetPoint_i_Payload_Id, _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id, _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id, _artDataContent_DataTypeId.BuildingControlTempUnit_Payload_Id, _artDataContent_DataTypeId.BuildingControlTemperature_i_Payload_Id)

    if(get_Config__artDataContent.additiveTypeFiltering) {
       callEnum = get_Config__artDataContent.typeFilter
    } else {
       for(h <- get_Config__artDataContent.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: art.DataContent = c match {
      case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
      case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
      case _artDataContent_DataTypeId.BuildingControlFanAck_Payload_Id => (nextBuildingControlFanAck_Payload _).apply()
      case _artDataContent_DataTypeId.BuildingControlFanCmd_Payload_Id => (nextBuildingControlFanCmd_Payload _).apply()
      case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlSetPoint_i_Payload_Id => (nextBuildingControlSetPoint_i_Payload _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.BuildingControlTempUnit_Payload_Id => (nextBuildingControlTempUnit_Payload _).apply()
      case _artDataContent_DataTypeId.BuildingControlTemperature_i_Payload_Id => (nextBuildingControlTemperature_i_Payload _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config__artDataContent.attempts >= 0) {
     for(i <- 0 to get_Config__artDataContent.attempts) {
       if(get_Config__artDataContent.filter(v)) {
        return v
       }
       if (get_Config__artDataContent.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
         case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFanAck_Payload_Id => (nextBuildingControlFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFanCmd_Payload_Id => (nextBuildingControlFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlSetPoint_i_Payload_Id => (nextBuildingControlSetPoint_i_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempUnit_Payload_Id => (nextBuildingControlTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlTemperature_i_Payload_Id => (nextBuildingControlTemperature_i_Payload _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config__artDataContent.filter(v)) {
         return v
       }
       if (get_Config__artDataContent.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
         case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFanAck_Payload_Id => (nextBuildingControlFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFanCmd_Payload_Id => (nextBuildingControlFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlSetPoint_i_Payload_Id => (nextBuildingControlSetPoint_i_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.BuildingControlTempUnit_Payload_Id => (nextBuildingControlTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.BuildingControlTemperature_i_Payload_Id => (nextBuildingControlTemperature_i_Payload _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= art.Empty ===================

  def get_Config__artEmpty: Config__artEmpty
  def set_Config__artEmpty(config: Config__artEmpty): RandomLib

  def next_artEmpty(): art.Empty = {

    var v: art.Empty = art.Empty()

    if(get_Config__artEmpty.attempts >= 0) {
     for(i <- 0 to get_Config__artEmpty.attempts) {
        if(get_Config__artEmpty.filter(v)) {
          return v
        }
        if (get_Config__artEmpty.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = art.Empty()
     }
    } else {
     while(T) {
       if(get_Config__artEmpty.filter(v)) {
         return v
       }
       if (get_Config__artEmpty.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = art.Empty()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Boolean_Payload ===================

  def get_Config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload
  def set_Config_Base_TypesBoolean_Payload(config: Config_Base_TypesBoolean_Payload): RandomLib

  def nextBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
    var value: B = nextB()

    var v: Base_Types.Boolean_Payload = Base_Types.Boolean_Payload(value)

    if(get_Config_Base_TypesBoolean_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesBoolean_Payload.attempts) {
        if(get_Config_Base_TypesBoolean_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesBoolean_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextB()
        v = Base_Types.Boolean_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesBoolean_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesBoolean_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextB()
       v = Base_Types.Boolean_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_Payload ===================

  def get_Config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload
  def set_Config_Base_TypesInteger_Payload(config: Config_Base_TypesInteger_Payload): RandomLib

  def nextBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
    var value: Z = nextZ()

    var v: Base_Types.Integer_Payload = Base_Types.Integer_Payload(value)

    if(get_Config_Base_TypesInteger_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_Payload.attempts) {
        if(get_Config_Base_TypesInteger_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextZ()
        v = Base_Types.Integer_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextZ()
       v = Base_Types.Integer_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_8_Payload ===================

  def get_Config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload
  def set_Config_Base_TypesInteger_8_Payload(config: Config_Base_TypesInteger_8_Payload): RandomLib

  def nextBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
    var value: S8 = nextS8()

    var v: Base_Types.Integer_8_Payload = Base_Types.Integer_8_Payload(value)

    if(get_Config_Base_TypesInteger_8_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_8_Payload.attempts) {
        if(get_Config_Base_TypesInteger_8_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_8_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS8()
        v = Base_Types.Integer_8_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_8_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_8_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS8()
       v = Base_Types.Integer_8_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_16_Payload ===================

  def get_Config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload
  def set_Config_Base_TypesInteger_16_Payload(config: Config_Base_TypesInteger_16_Payload): RandomLib

  def nextBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
    var value: S16 = nextS16()

    var v: Base_Types.Integer_16_Payload = Base_Types.Integer_16_Payload(value)

    if(get_Config_Base_TypesInteger_16_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_16_Payload.attempts) {
        if(get_Config_Base_TypesInteger_16_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_16_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS16()
        v = Base_Types.Integer_16_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_16_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_16_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS16()
       v = Base_Types.Integer_16_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_32_Payload ===================

  def get_Config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload
  def set_Config_Base_TypesInteger_32_Payload(config: Config_Base_TypesInteger_32_Payload): RandomLib

  def nextBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
    var value: S32 = nextS32()

    var v: Base_Types.Integer_32_Payload = Base_Types.Integer_32_Payload(value)

    if(get_Config_Base_TypesInteger_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_32_Payload.attempts) {
        if(get_Config_Base_TypesInteger_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS32()
        v = Base_Types.Integer_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS32()
       v = Base_Types.Integer_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_64_Payload ===================

  def get_Config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload
  def set_Config_Base_TypesInteger_64_Payload(config: Config_Base_TypesInteger_64_Payload): RandomLib

  def nextBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
    var value: S64 = nextS64()

    var v: Base_Types.Integer_64_Payload = Base_Types.Integer_64_Payload(value)

    if(get_Config_Base_TypesInteger_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_64_Payload.attempts) {
        if(get_Config_Base_TypesInteger_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS64()
        v = Base_Types.Integer_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS64()
       v = Base_Types.Integer_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_8_Payload ===================

  def get_Config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload
  def set_Config_Base_TypesUnsigned_8_Payload(config: Config_Base_TypesUnsigned_8_Payload): RandomLib

  def nextBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
    var value: U8 = nextU8()

    var v: Base_Types.Unsigned_8_Payload = Base_Types.Unsigned_8_Payload(value)

    if(get_Config_Base_TypesUnsigned_8_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_8_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_8_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_8_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU8()
        v = Base_Types.Unsigned_8_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_8_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_8_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU8()
       v = Base_Types.Unsigned_8_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_16_Payload ===================

  def get_Config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload
  def set_Config_Base_TypesUnsigned_16_Payload(config: Config_Base_TypesUnsigned_16_Payload): RandomLib

  def nextBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
    var value: U16 = nextU16()

    var v: Base_Types.Unsigned_16_Payload = Base_Types.Unsigned_16_Payload(value)

    if(get_Config_Base_TypesUnsigned_16_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_16_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_16_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_16_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU16()
        v = Base_Types.Unsigned_16_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_16_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_16_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU16()
       v = Base_Types.Unsigned_16_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_32_Payload ===================

  def get_Config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload
  def set_Config_Base_TypesUnsigned_32_Payload(config: Config_Base_TypesUnsigned_32_Payload): RandomLib

  def nextBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
    var value: U32 = nextU32()

    var v: Base_Types.Unsigned_32_Payload = Base_Types.Unsigned_32_Payload(value)

    if(get_Config_Base_TypesUnsigned_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_32_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU32()
        v = Base_Types.Unsigned_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU32()
       v = Base_Types.Unsigned_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_64_Payload ===================

  def get_Config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload
  def set_Config_Base_TypesUnsigned_64_Payload(config: Config_Base_TypesUnsigned_64_Payload): RandomLib

  def nextBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
    var value: U64 = nextU64()

    var v: Base_Types.Unsigned_64_Payload = Base_Types.Unsigned_64_Payload(value)

    if(get_Config_Base_TypesUnsigned_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_64_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU64()
        v = Base_Types.Unsigned_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU64()
       v = Base_Types.Unsigned_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_Payload ===================

  def get_Config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload
  def set_Config_Base_TypesFloat_Payload(config: Config_Base_TypesFloat_Payload): RandomLib

  def nextBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
    var value: R = nextR()

    var v: Base_Types.Float_Payload = Base_Types.Float_Payload(value)

    if(get_Config_Base_TypesFloat_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_Payload.attempts) {
        if(get_Config_Base_TypesFloat_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextR()
        v = Base_Types.Float_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextR()
       v = Base_Types.Float_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_32_Payload ===================

  def get_Config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload
  def set_Config_Base_TypesFloat_32_Payload(config: Config_Base_TypesFloat_32_Payload): RandomLib

  def nextBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
    var value: F32 = nextF32()

    var v: Base_Types.Float_32_Payload = Base_Types.Float_32_Payload(value)

    if(get_Config_Base_TypesFloat_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_32_Payload.attempts) {
        if(get_Config_Base_TypesFloat_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextF32()
        v = Base_Types.Float_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextF32()
       v = Base_Types.Float_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_64_Payload ===================

  def get_Config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload
  def set_Config_Base_TypesFloat_64_Payload(config: Config_Base_TypesFloat_64_Payload): RandomLib

  def nextBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
    var value: F64 = nextF64()

    var v: Base_Types.Float_64_Payload = Base_Types.Float_64_Payload(value)

    if(get_Config_Base_TypesFloat_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_64_Payload.attempts) {
        if(get_Config_Base_TypesFloat_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextF64()
        v = Base_Types.Float_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextF64()
       v = Base_Types.Float_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Character_Payload ===================

  def get_Config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload
  def set_Config_Base_TypesCharacter_Payload(config: Config_Base_TypesCharacter_Payload): RandomLib

  def nextBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
    var value: C = nextC()

    var v: Base_Types.Character_Payload = Base_Types.Character_Payload(value)

    if(get_Config_Base_TypesCharacter_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesCharacter_Payload.attempts) {
        if(get_Config_Base_TypesCharacter_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesCharacter_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextC()
        v = Base_Types.Character_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesCharacter_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesCharacter_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextC()
       v = Base_Types.Character_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.String_Payload ===================

  def get_Config_Base_TypesString_Payload: Config_Base_TypesString_Payload
  def set_Config_Base_TypesString_Payload(config: Config_Base_TypesString_Payload): RandomLib

  def nextBase_TypesString_Payload(): Base_Types.String_Payload = {
    var value: String = nextString()

    var v: Base_Types.String_Payload = Base_Types.String_Payload(value)

    if(get_Config_Base_TypesString_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesString_Payload.attempts) {
        if(get_Config_Base_TypesString_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesString_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextString()
        v = Base_Types.String_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesString_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesString_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextString()
       v = Base_Types.String_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== ISZ[B] =====================
  def get_Config_ISZB: Config_ISZB
  def set_Config_ISZB(config: Config_ISZB): RandomLib

  def nextISZB(): ISZ[B] = {

    var length: Z = gen.nextZBetween(0, get_numElement)
    var v: ISZ[B] = ISZ()
    for (r <- 0 until length) {
      v = v :+ nextB()
    }

    if(get_Config_ISZB.attempts >= 0) {
     for(i <- 0 to get_Config_ISZB.attempts) {
        if(get_Config_ISZB.filter(v)) {
          return v
        }
        if (get_Config_ISZB.verbose) {
          println(s"Retrying for failing value: $v")
        }

        length = gen.nextZBetween(0, get_numElement)
        v = ISZ()
        for (r <- 0 until length) {
           v = v :+ nextB()
        }
     }
    } else {
     while(T) {
       if(get_Config_ISZB.filter(v)) {
         return v
       }
       if (get_Config_ISZB.verbose) {
         println(s"Retrying for failing value: $v")
       }

       length = gen.nextZBetween(0, get_numElement)
       v = ISZ()
       for (r <- 0 until length) {
          v = v :+ nextB()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Bits_Payload ===================

  def get_Config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload
  def set_Config_Base_TypesBits_Payload(config: Config_Base_TypesBits_Payload): RandomLib

  def nextBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
    var value: ISZ[B] = nextISZB()

    var v: Base_Types.Bits_Payload = Base_Types.Bits_Payload(value)

    if(get_Config_Base_TypesBits_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesBits_Payload.attempts) {
        if(get_Config_Base_TypesBits_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesBits_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextISZB()
        v = Base_Types.Bits_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesBits_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesBits_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextISZB()
       v = Base_Types.Bits_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.FanAck.Type ===================

  def get_Config_BuildingControlFanAckType: Config_BuildingControlFanAckType
  def set_Config_BuildingControlFanAckType(config: Config_BuildingControlFanAckType): RandomLib

  def nextBuildingControlFanAckType(): BuildingControl.FanAck.Type = {

    var ordinal: Z = gen.nextZBetween(0, bc.BuildingControl.FanAck.numOfElements-1)

    var v: BuildingControl.FanAck.Type = bc.BuildingControl.FanAck.byOrdinal(ordinal).get
    if(get_Config_BuildingControlFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFanAckType.attempts) {
       if(get_Config_BuildingControlFanAckType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.FanAck.numOfElements-1)
       v = bc.BuildingControl.FanAck.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_BuildingControlFanAckType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.FanAck.numOfElements-1)
       v = bc.BuildingControl.FanAck.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.FanAck_Payload ===================

  def get_Config_BuildingControlFanAck_Payload: Config_BuildingControlFanAck_Payload
  def set_Config_BuildingControlFanAck_Payload(config: Config_BuildingControlFanAck_Payload): RandomLib

  def nextBuildingControlFanAck_Payload(): BuildingControl.FanAck_Payload = {
    var value: BuildingControl.FanAck.Type = nextBuildingControlFanAckType()

    var v: BuildingControl.FanAck_Payload = BuildingControl.FanAck_Payload(value)

    if(get_Config_BuildingControlFanAck_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFanAck_Payload.attempts) {
        if(get_Config_BuildingControlFanAck_Payload.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFanAck_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextBuildingControlFanAckType()
        v = BuildingControl.FanAck_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFanAck_Payload.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFanAck_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextBuildingControlFanAckType()
       v = BuildingControl.FanAck_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.FanCmd.Type ===================

  def get_Config_BuildingControlFanCmdType: Config_BuildingControlFanCmdType
  def set_Config_BuildingControlFanCmdType(config: Config_BuildingControlFanCmdType): RandomLib

  def nextBuildingControlFanCmdType(): BuildingControl.FanCmd.Type = {

    var ordinal: Z = gen.nextZBetween(0, bc.BuildingControl.FanCmd.numOfElements-1)

    var v: BuildingControl.FanCmd.Type = bc.BuildingControl.FanCmd.byOrdinal(ordinal).get
    if(get_Config_BuildingControlFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFanCmdType.attempts) {
       if(get_Config_BuildingControlFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.FanCmd.numOfElements-1)
       v = bc.BuildingControl.FanCmd.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_BuildingControlFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.FanCmd.numOfElements-1)
       v = bc.BuildingControl.FanCmd.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.FanCmd_Payload ===================

  def get_Config_BuildingControlFanCmd_Payload: Config_BuildingControlFanCmd_Payload
  def set_Config_BuildingControlFanCmd_Payload(config: Config_BuildingControlFanCmd_Payload): RandomLib

  def nextBuildingControlFanCmd_Payload(): BuildingControl.FanCmd_Payload = {
    var value: BuildingControl.FanCmd.Type = nextBuildingControlFanCmdType()

    var v: BuildingControl.FanCmd_Payload = BuildingControl.FanCmd_Payload(value)

    if(get_Config_BuildingControlFanCmd_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFanCmd_Payload.attempts) {
        if(get_Config_BuildingControlFanCmd_Payload.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFanCmd_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextBuildingControlFanCmdType()
        v = BuildingControl.FanCmd_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFanCmd_Payload.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFanCmd_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextBuildingControlFanCmdType()
       v = BuildingControl.FanCmd_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container: Config_BuildingControlFan_i_tcp_fan_PreState_Container
  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PreState_Container(): BuildingControl.Fan_i_tcp_fan_PreState_Container = {
    var callEnum: ISZ[BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.Type] = ISZ(BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id, BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id)

    if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.Fan_i_tcp_fan_PreState_Container = c match {
      case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
      case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.attempts) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
         case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_P _).apply()
         case BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[BuildingControl.FanCmd.Type] =====================
  def get_Config_OptionBuildingControlFanCmdType: Config_OptionBuildingControlFanCmdType
  def set_Config_OptionBuildingControlFanCmdType(config: Config_OptionBuildingControlFanCmdType): RandomLib

  def nextOptionBuildingControlFanCmdType(): Option[BuildingControl.FanCmd.Type] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[BuildingControl.FanCmd.Type] = if(none == 0) {
      Some(nextBuildingControlFanCmdType())
    } else {
      None()
    }

    if(get_Config_OptionBuildingControlFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_OptionBuildingControlFanCmdType.attempts) {
        if(get_Config_OptionBuildingControlFanCmdType.filter(v)) {
          return v
        }
        if (get_Config_OptionBuildingControlFanCmdType.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextBuildingControlFanCmdType())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionBuildingControlFanCmdType.filter(v)) {
         return v
       }
       if (get_Config_OptionBuildingControlFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextBuildingControlFanCmdType())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container_P ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P: Config_BuildingControlFan_i_tcp_fan_PreState_Container_P
  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container_P): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PreState_Container_P(): BuildingControl.Fan_i_tcp_fan_PreState_Container_P = {
    var api_fanCmd: Option[BuildingControl.FanCmd.Type] = nextOptionBuildingControlFanCmdType()

    var v: BuildingControl.Fan_i_tcp_fan_PreState_Container_P = BuildingControl.Fan_i_tcp_fan_PreState_Container_P(api_fanCmd)

    if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.attempts) {
        if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionBuildingControlFanCmdType()
        v = BuildingControl.Fan_i_tcp_fan_PreState_Container_P(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionBuildingControlFanCmdType()
       v = BuildingControl.Fan_i_tcp_fan_PreState_Container_P(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container_PS ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS
  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PreState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = {
    var api_fanCmd: Option[BuildingControl.FanCmd.Type] = nextOptionBuildingControlFanCmdType()

    var v: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS = BuildingControl.Fan_i_tcp_fan_PreState_Container_PS(api_fanCmd)

    if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.attempts) {
        if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionBuildingControlFanCmdType()
        v = BuildingControl.Fan_i_tcp_fan_PreState_Container_PS(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionBuildingControlFanCmdType()
       v = BuildingControl.Fan_i_tcp_fan_PreState_Container_PS(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container: Config_BuildingControlFan_i_tcp_fan_PostState_Container
  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PostState_Container(): BuildingControl.Fan_i_tcp_fan_PostState_Container = {
    var callEnum: ISZ[BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.Type] = ISZ(BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id, BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id)

    if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.Fan_i_tcp_fan_PostState_Container = c match {
      case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
      case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.attempts) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
         case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_P_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_P _).apply()
         case BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId.BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id => (nextBuildingControlFan_i_tcp_fan_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[BuildingControl.FanAck.Type] =====================
  def get_Config_OptionBuildingControlFanAckType: Config_OptionBuildingControlFanAckType
  def set_Config_OptionBuildingControlFanAckType(config: Config_OptionBuildingControlFanAckType): RandomLib

  def nextOptionBuildingControlFanAckType(): Option[BuildingControl.FanAck.Type] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[BuildingControl.FanAck.Type] = if(none == 0) {
      Some(nextBuildingControlFanAckType())
    } else {
      None()
    }

    if(get_Config_OptionBuildingControlFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_OptionBuildingControlFanAckType.attempts) {
        if(get_Config_OptionBuildingControlFanAckType.filter(v)) {
          return v
        }
        if (get_Config_OptionBuildingControlFanAckType.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextBuildingControlFanAckType())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionBuildingControlFanAckType.filter(v)) {
         return v
       }
       if (get_Config_OptionBuildingControlFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextBuildingControlFanAckType())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container_P ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P: Config_BuildingControlFan_i_tcp_fan_PostState_Container_P
  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container_P): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PostState_Container_P(): BuildingControl.Fan_i_tcp_fan_PostState_Container_P = {
    var api_fanAck: Option[BuildingControl.FanAck.Type] = nextOptionBuildingControlFanAckType()

    var v: BuildingControl.Fan_i_tcp_fan_PostState_Container_P = BuildingControl.Fan_i_tcp_fan_PostState_Container_P(api_fanAck)

    if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.attempts) {
        if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanAck = nextOptionBuildingControlFanAckType()
        v = BuildingControl.Fan_i_tcp_fan_PostState_Container_P(api_fanAck)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanAck = nextOptionBuildingControlFanAckType()
       v = BuildingControl.Fan_i_tcp_fan_PostState_Container_P(api_fanAck)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container_PS ===================

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS
  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS): RandomLib

  def nextBuildingControlFan_i_tcp_fan_PostState_Container_PS(): BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = {
    var api_fanAck: Option[BuildingControl.FanAck.Type] = nextOptionBuildingControlFanAckType()

    var v: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS = BuildingControl.Fan_i_tcp_fan_PostState_Container_PS(api_fanAck)

    if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.attempts) {
        if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanAck = nextOptionBuildingControlFanAckType()
        v = BuildingControl.Fan_i_tcp_fan_PostState_Container_PS(api_fanAck)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanAck = nextOptionBuildingControlFanAckType()
       v = BuildingControl.Fan_i_tcp_fan_PostState_Container_PS(api_fanAck)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.SetPoint_i ===================

  def get_Config_BuildingControlSetPoint_i: Config_BuildingControlSetPoint_i
  def set_Config_BuildingControlSetPoint_i(config: Config_BuildingControlSetPoint_i): RandomLib

  def nextBuildingControlSetPoint_i(): BuildingControl.SetPoint_i = {
    var low: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()
    var high: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.SetPoint_i = BuildingControl.SetPoint_i(low, high)

    if(get_Config_BuildingControlSetPoint_i.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlSetPoint_i.attempts) {
        if(get_Config_BuildingControlSetPoint_i.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlSetPoint_i.verbose) {
          println(s"Retrying for failing value: $v")
        }
        low = nextBuildingControlTemperature_i()
        high = nextBuildingControlTemperature_i()
        v = BuildingControl.SetPoint_i(low, high)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlSetPoint_i.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlSetPoint_i.verbose) {
         println(s"Retrying for failing value: $v")
       }
       low = nextBuildingControlTemperature_i()
       high = nextBuildingControlTemperature_i()
       v = BuildingControl.SetPoint_i(low, high)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.SetPoint_i_Payload ===================

  def get_Config_BuildingControlSetPoint_i_Payload: Config_BuildingControlSetPoint_i_Payload
  def set_Config_BuildingControlSetPoint_i_Payload(config: Config_BuildingControlSetPoint_i_Payload): RandomLib

  def nextBuildingControlSetPoint_i_Payload(): BuildingControl.SetPoint_i_Payload = {
    var value: BuildingControl.SetPoint_i = nextBuildingControlSetPoint_i()

    var v: BuildingControl.SetPoint_i_Payload = BuildingControl.SetPoint_i_Payload(value)

    if(get_Config_BuildingControlSetPoint_i_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlSetPoint_i_Payload.attempts) {
        if(get_Config_BuildingControlSetPoint_i_Payload.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlSetPoint_i_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextBuildingControlSetPoint_i()
        v = BuildingControl.SetPoint_i_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlSetPoint_i_Payload.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlSetPoint_i_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextBuildingControlSetPoint_i()
       v = BuildingControl.SetPoint_i_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = {
    var callEnum: ISZ[BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.Type] = ISZ(BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id, BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container = c match {
      case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
      case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.attempts) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
         case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _).apply()
         case BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[art.Empty] =====================
  def get_Config_Option_artEmpty: Config_Option_artEmpty
  def set_Config_Option_artEmpty(config: Config_Option_artEmpty): RandomLib

  def nextOption_artEmpty(): Option[art.Empty] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[art.Empty] = if(none == 0) {
      Some(next_artEmpty())
    } else {
      None()
    }

    if(get_Config_Option_artEmpty.attempts >= 0) {
     for(i <- 0 to get_Config_Option_artEmpty.attempts) {
        if(get_Config_Option_artEmpty.filter(v)) {
          return v
        }
        if (get_Config_Option_artEmpty.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(next_artEmpty())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_Option_artEmpty.filter(v)) {
         return v
       }
       if (get_Config_Option_artEmpty.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(next_artEmpty())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[BuildingControl.SetPoint_i] =====================
  def get_Config_OptionBuildingControlSetPoint_i: Config_OptionBuildingControlSetPoint_i
  def set_Config_OptionBuildingControlSetPoint_i(config: Config_OptionBuildingControlSetPoint_i): RandomLib

  def nextOptionBuildingControlSetPoint_i(): Option[BuildingControl.SetPoint_i] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[BuildingControl.SetPoint_i] = if(none == 0) {
      Some(nextBuildingControlSetPoint_i())
    } else {
      None()
    }

    if(get_Config_OptionBuildingControlSetPoint_i.attempts >= 0) {
     for(i <- 0 to get_Config_OptionBuildingControlSetPoint_i.attempts) {
        if(get_Config_OptionBuildingControlSetPoint_i.filter(v)) {
          return v
        }
        if (get_Config_OptionBuildingControlSetPoint_i.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextBuildingControlSetPoint_i())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionBuildingControlSetPoint_i.filter(v)) {
         return v
       }
       if (get_Config_OptionBuildingControlSetPoint_i.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextBuildingControlSetPoint_i())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_fanAck: Option[BuildingControl.FanAck.Type] = nextOptionBuildingControlFanAckType()
    var api_setPoint: Option[BuildingControl.SetPoint_i] = nextOptionBuildingControlSetPoint_i()
    var api_currentTemp: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.attempts) {
        if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_fanAck = nextOptionBuildingControlFanAckType()
        api_setPoint = nextOptionBuildingControlSetPoint_i()
        api_currentTemp = nextBuildingControlTemperature_i()
        v = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_fanAck = nextOptionBuildingControlFanAckType()
       api_setPoint = nextOptionBuildingControlSetPoint_i()
       api_currentTemp = nextBuildingControlTemperature_i()
       v = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_fanAck: Option[BuildingControl.FanAck.Type] = nextOptionBuildingControlFanAckType()
    var api_setPoint: Option[BuildingControl.SetPoint_i] = nextOptionBuildingControlSetPoint_i()
    var api_currentTemp: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.attempts) {
        if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_fanAck = nextOptionBuildingControlFanAckType()
        api_setPoint = nextOptionBuildingControlSetPoint_i()
        api_currentTemp = nextBuildingControlTemperature_i()
        v = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_fanAck = nextOptionBuildingControlFanAckType()
       api_setPoint = nextOptionBuildingControlSetPoint_i()
       api_currentTemp = nextBuildingControlTemperature_i()
       v = BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = {
    var callEnum: ISZ[BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.Type] = ISZ(BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id, BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container = c match {
      case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
      case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.attempts) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
         case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _).apply()
         case BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId.BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id => (nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = {
    var api_fanCmd: Option[BuildingControl.FanCmd.Type] = nextOptionBuildingControlFanCmdType()

    var v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P(api_fanCmd)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.attempts) {
        if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionBuildingControlFanCmdType()
        v = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionBuildingControlFanCmdType()
       v = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS ===================

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS
  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS): RandomLib

  def nextBuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(): BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = {
    var api_fanCmd: Option[BuildingControl.FanCmd.Type] = nextOptionBuildingControlFanCmdType()

    var v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS(api_fanCmd)

    if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.attempts) {
        if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionBuildingControlFanCmdType()
        v = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionBuildingControlFanCmdType()
       v = BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = {
    var callEnum: ISZ[BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.Type] = ISZ(BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id, BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id)

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container = c match {
      case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
      case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.attempts) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
         case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _).apply()
         case BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = {

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P()

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.attempts) {
        if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P()
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = {

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS()

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.attempts) {
        if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS()
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = {
    var callEnum: ISZ[BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.Type] = ISZ(BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id, BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id)

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container = c match {
      case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
      case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.attempts) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
         case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _).apply()
         case BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId.BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id => (nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_currentTemp: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P(api_tempChanged, api_currentTemp)

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.attempts) {
        if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_currentTemp = nextBuildingControlTemperature_i()
        v = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P(api_tempChanged, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_currentTemp = nextBuildingControlTemperature_i()
       v = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P(api_tempChanged, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS ===================

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS
  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS): RandomLib

  def nextBuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(): BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_currentTemp: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS(api_tempChanged, api_currentTemp)

    if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.attempts) {
        if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_currentTemp = nextBuildingControlTemperature_i()
        v = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS(api_tempChanged, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_currentTemp = nextBuildingControlTemperature_i()
       v = BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS(api_tempChanged, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempUnit.Type ===================

  def get_Config_BuildingControlTempUnitType: Config_BuildingControlTempUnitType
  def set_Config_BuildingControlTempUnitType(config: Config_BuildingControlTempUnitType): RandomLib

  def nextBuildingControlTempUnitType(): BuildingControl.TempUnit.Type = {

    var ordinal: Z = gen.nextZBetween(0, bc.BuildingControl.TempUnit.numOfElements-1)

    var v: BuildingControl.TempUnit.Type = bc.BuildingControl.TempUnit.byOrdinal(ordinal).get
    if(get_Config_BuildingControlTempUnitType.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempUnitType.attempts) {
       if(get_Config_BuildingControlTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.TempUnit.numOfElements-1)
       v = bc.BuildingControl.TempUnit.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_BuildingControlTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_BuildingControlTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.BuildingControl.TempUnit.numOfElements-1)
       v = bc.BuildingControl.TempUnit.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.TempUnit_Payload ===================

  def get_Config_BuildingControlTempUnit_Payload: Config_BuildingControlTempUnit_Payload
  def set_Config_BuildingControlTempUnit_Payload(config: Config_BuildingControlTempUnit_Payload): RandomLib

  def nextBuildingControlTempUnit_Payload(): BuildingControl.TempUnit_Payload = {
    var value: BuildingControl.TempUnit.Type = nextBuildingControlTempUnitType()

    var v: BuildingControl.TempUnit_Payload = BuildingControl.TempUnit_Payload(value)

    if(get_Config_BuildingControlTempUnit_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTempUnit_Payload.attempts) {
        if(get_Config_BuildingControlTempUnit_Payload.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTempUnit_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextBuildingControlTempUnitType()
        v = BuildingControl.TempUnit_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTempUnit_Payload.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTempUnit_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextBuildingControlTempUnitType()
       v = BuildingControl.TempUnit_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Temperature_i ===================

  def get_Config_BuildingControlTemperature_i: Config_BuildingControlTemperature_i
  def set_Config_BuildingControlTemperature_i(config: Config_BuildingControlTemperature_i): RandomLib

  def nextBuildingControlTemperature_i(): BuildingControl.Temperature_i = {
    var degrees: F32 = nextF32()
    var unit: BuildingControl.TempUnit.Type = nextBuildingControlTempUnitType()

    var v: BuildingControl.Temperature_i = BuildingControl.Temperature_i(degrees, unit)

    if(get_Config_BuildingControlTemperature_i.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTemperature_i.attempts) {
        if(get_Config_BuildingControlTemperature_i.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTemperature_i.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        unit = nextBuildingControlTempUnitType()
        v = BuildingControl.Temperature_i(degrees, unit)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTemperature_i.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTemperature_i.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       unit = nextBuildingControlTempUnitType()
       v = BuildingControl.Temperature_i(degrees, unit)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= BuildingControl.Temperature_i_Payload ===================

  def get_Config_BuildingControlTemperature_i_Payload: Config_BuildingControlTemperature_i_Payload
  def set_Config_BuildingControlTemperature_i_Payload(config: Config_BuildingControlTemperature_i_Payload): RandomLib

  def nextBuildingControlTemperature_i_Payload(): BuildingControl.Temperature_i_Payload = {
    var value: BuildingControl.Temperature_i = nextBuildingControlTemperature_i()

    var v: BuildingControl.Temperature_i_Payload = BuildingControl.Temperature_i_Payload(value)

    if(get_Config_BuildingControlTemperature_i_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_BuildingControlTemperature_i_Payload.attempts) {
        if(get_Config_BuildingControlTemperature_i_Payload.filter(v)) {
          return v
        }
        if (get_Config_BuildingControlTemperature_i_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextBuildingControlTemperature_i()
        v = BuildingControl.Temperature_i_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_BuildingControlTemperature_i_Payload.filter(v)) {
         return v
       }
       if (get_Config_BuildingControlTemperature_i_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextBuildingControlTemperature_i()
       v = BuildingControl.Temperature_i_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= runtimemonitor.ObservationKind.Type ===================

  def get_Config_runtimemonitorObservationKindType: Config_runtimemonitorObservationKindType
  def set_Config_runtimemonitorObservationKindType(config: Config_runtimemonitorObservationKindType): RandomLib

  def nextruntimemonitorObservationKindType(): runtimemonitor.ObservationKind.Type = {

    var ordinal: Z = gen.nextZBetween(0, bc.runtimemonitor.ObservationKind.numOfElements-1)

    var v: runtimemonitor.ObservationKind.Type = bc.runtimemonitor.ObservationKind.byOrdinal(ordinal).get
    if(get_Config_runtimemonitorObservationKindType.attempts >= 0) {
     for(i <- 0 to get_Config_runtimemonitorObservationKindType.attempts) {
       if(get_Config_runtimemonitorObservationKindType.filter(v)) {
        return v
       }
       if (get_Config_runtimemonitorObservationKindType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.runtimemonitor.ObservationKind.numOfElements-1)
       v = bc.runtimemonitor.ObservationKind.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_runtimemonitorObservationKindType.filter(v)) {
        return v
       }
       if (get_Config_runtimemonitorObservationKindType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, bc.runtimemonitor.ObservationKind.numOfElements-1)
       v = bc.runtimemonitor.ObservationKind.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

}

@record class RandomLib(val gen: org.sireum.Random.Gen) extends RandomLibI {

  var numElem: Z = 50

  var _verbose: B = F
  def verbose: RandomLib = {
    _verbose = !_verbose
    return this
  }

  def get_numElement: Z = {return numElem}

  def set_numElement(s: Z): Unit ={
    numElem = s
  }

  // ============= String =============

  def alwaysTrue_String(v: String): B = {return T}

  var config_String: Config_String = Config_String(0, numElem, 100, _verbose, alwaysTrue_String _)

  def get_Config_String: Config_String = {return config_String}

  def set_Config_String(config: Config_String): RandomLib = {
    config_String = config
    return this
  }

  // ============= Z ===================
  def alwaysTrue_Z(v: Z): B = {return T}

  var config_Z: Config_Z = Config_Z(None(), None(), 100, _verbose, alwaysTrue_Z _)
  def get_Config_Z: Config_Z = {return config_Z}

  def set_Config_Z(config: Config_Z): RandomLib ={
    config_Z = config
    return this
  }

  // ============= B ===================
  def alwaysTrue_B(v: B): B = {return T}

  var config_B: Config_B = Config_B(100, _verbose, alwaysTrue_B _)
  def get_Config_B: Config_B = {return config_B}

  def set_Config_B(config: Config_B): RandomLib ={
    config_B = config
    return this
  }

  // ============= C ===================
  def alwaysTrue_C(v: C): B = {return T}

  var config_C: Config_C = Config_C(None(), None(), 100, _verbose, alwaysTrue_C _)
  def get_Config_C: Config_C = {return config_C}

  def set_Config_C(config: Config_C): RandomLib ={
    config_C = config
    return this
  }

  // ============= R ===================
  def alwaysTrue_R(v: R): B = {return T}

  var config_R: Config_R = Config_R(None(), None(), 100, _verbose, alwaysTrue_R _)
  def get_Config_R: Config_R = {return config_R}

  def set_Config_R(config: Config_R): RandomLib ={
    config_R = config
    return this
  }

  // ============= F32 ===================
  def alwaysTrue_F32(v: F32): B = {return T}

  var config_F32: Config_F32 = Config_F32(None(), None(), 100, _verbose, alwaysTrue_F32 _)
  def get_Config_F32: Config_F32 = {return config_F32}

  def set_Config_F32(config: Config_F32): RandomLib ={
    config_F32 = config
    return this
  }

  // ============= F64 ===================
  def alwaysTrue_F64(v: F64): B = {return T}

  var config_F64: Config_F64 = Config_F64(None(), None(), 100, _verbose, alwaysTrue_F64 _)
  def get_Config_F64: Config_F64 = {return config_F64}

  def set_Config_F64(config: Config_F64): RandomLib ={
    config_F64 = config
    return this
  }

  // ============= S8 ===================
  def alwaysTrue_S8(v: S8): B = {return T}

  var config_S8: Config_S8 = Config_S8(None(), None(), 100, _verbose, alwaysTrue_S8 _)
  def get_Config_S8: Config_S8 = {return config_S8}

  def set_Config_S8(config: Config_S8): RandomLib ={
    config_S8 = config
    return this
  }

  // ============= S16 ===================
  def alwaysTrue_S16(v: S16): B = {return T}

  var config_S16: Config_S16 = Config_S16(None(), None(), 100, _verbose, alwaysTrue_S16 _)
  def get_Config_S16: Config_S16 = {return config_S16}

  def set_Config_S16(config: Config_S16): RandomLib ={
    config_S16 = config
    return this
  }

  // ============= S32 ===================
  def alwaysTrue_S32(v: S32): B = {return T}

  var config_S32: Config_S32 = Config_S32(None(), None(), 100, _verbose, alwaysTrue_S32 _)
  def get_Config_S32: Config_S32 = {return config_S32}

  def set_Config_S32(config: Config_S32): RandomLib ={
    config_S32 = config
    return this
  }

  // ============= S64 ===================
  def alwaysTrue_S64(v: S64): B = {return T}

  var config_S64: Config_S64 = Config_S64(None(), None(), 100, _verbose, alwaysTrue_S64 _)
  def get_Config_S64: Config_S64 = {return config_S64}

  def set_Config_S64(config: Config_S64): RandomLib ={
    config_S64 = config
    return this
  }

  // ============= U8 ===================
  def alwaysTrue_U8(v: U8): B = {return T}

  var config_U8: Config_U8 = Config_U8(None(), None(), 100, _verbose, alwaysTrue_U8 _)
  def get_Config_U8: Config_U8 = {return config_U8}

  def set_Config_U8(config: Config_U8): RandomLib ={
    config_U8 = config
    return this
  }

  // ============= U16 ===================
  def alwaysTrue_U16(v: U16): B = {return T}

  var config_U16: Config_U16 = Config_U16(None(), None(), 100, _verbose, alwaysTrue_U16 _)
  def get_Config_U16: Config_U16 = {return config_U16}

  def set_Config_U16(config: Config_U16): RandomLib ={
    config_U16 = config
    return this
  }

  // ============= U32 ===================
  def alwaysTrue_U32(v: U32): B = {return T}

  var config_U32: Config_U32 = Config_U32(None(), None(), 100, _verbose, alwaysTrue_U32 _)
  def get_Config_U32: Config_U32 = {return config_U32}

  def set_Config_U32(config: Config_U32): RandomLib ={
    config_U32 = config
    return this
  }

  // ============= U64 ===================
  def alwaysTrue_U64(v: U64): B = {return T}

  var config_U64: Config_U64 = Config_U64(None(), None(), 100, _verbose, alwaysTrue_U64 _)
  def get_Config_U64: Config_U64 = {return config_U64}

  def set_Config_U64(config: Config_U64): RandomLib ={
    config_U64 = config
    return this
  }

  // ============= art.DataContent ===================
  def alwaysTrue__artDataContent(v: art.DataContent): B = {return T}

  var config__artDataContent: Config__artDataContent = Config__artDataContent(100, _verbose, F, ISZ(), alwaysTrue__artDataContent _)

  def get_Config__artDataContent: Config__artDataContent = {return config__artDataContent}

  def set_Config__artDataContent(config: Config__artDataContent): RandomLib ={
    config__artDataContent = config
    return this
  }

  // ============= art.Empty ===================
  def alwaysTrue__artEmpty(v: art.Empty): B = {return T}

  var config__artEmpty: Config__artEmpty = Config__artEmpty(100, _verbose, alwaysTrue__artEmpty _)

  def get_Config__artEmpty: Config__artEmpty = {return config__artEmpty}

  def set_Config__artEmpty(config: Config__artEmpty): RandomLib ={
    config__artEmpty = config
    return this
  }

  // ============= Base_Types.Boolean_Payload ===================
  def alwaysTrue_Base_TypesBoolean_Payload(v: Base_Types.Boolean_Payload): B = {return T}

  var config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload = Config_Base_TypesBoolean_Payload(100, _verbose, alwaysTrue_Base_TypesBoolean_Payload _)

  def get_Config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload = {return config_Base_TypesBoolean_Payload}

  def set_Config_Base_TypesBoolean_Payload(config: Config_Base_TypesBoolean_Payload): RandomLib ={
    config_Base_TypesBoolean_Payload = config
    return this
  }

  // ============= Base_Types.Integer_Payload ===================
  def alwaysTrue_Base_TypesInteger_Payload(v: Base_Types.Integer_Payload): B = {return T}

  var config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload = Config_Base_TypesInteger_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_Payload _)

  def get_Config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload = {return config_Base_TypesInteger_Payload}

  def set_Config_Base_TypesInteger_Payload(config: Config_Base_TypesInteger_Payload): RandomLib ={
    config_Base_TypesInteger_Payload = config
    return this
  }

  // ============= Base_Types.Integer_8_Payload ===================
  def alwaysTrue_Base_TypesInteger_8_Payload(v: Base_Types.Integer_8_Payload): B = {return T}

  var config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload = Config_Base_TypesInteger_8_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_8_Payload _)

  def get_Config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload = {return config_Base_TypesInteger_8_Payload}

  def set_Config_Base_TypesInteger_8_Payload(config: Config_Base_TypesInteger_8_Payload): RandomLib ={
    config_Base_TypesInteger_8_Payload = config
    return this
  }

  // ============= Base_Types.Integer_16_Payload ===================
  def alwaysTrue_Base_TypesInteger_16_Payload(v: Base_Types.Integer_16_Payload): B = {return T}

  var config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload = Config_Base_TypesInteger_16_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_16_Payload _)

  def get_Config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload = {return config_Base_TypesInteger_16_Payload}

  def set_Config_Base_TypesInteger_16_Payload(config: Config_Base_TypesInteger_16_Payload): RandomLib ={
    config_Base_TypesInteger_16_Payload = config
    return this
  }

  // ============= Base_Types.Integer_32_Payload ===================
  def alwaysTrue_Base_TypesInteger_32_Payload(v: Base_Types.Integer_32_Payload): B = {return T}

  var config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload = Config_Base_TypesInteger_32_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_32_Payload _)

  def get_Config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload = {return config_Base_TypesInteger_32_Payload}

  def set_Config_Base_TypesInteger_32_Payload(config: Config_Base_TypesInteger_32_Payload): RandomLib ={
    config_Base_TypesInteger_32_Payload = config
    return this
  }

  // ============= Base_Types.Integer_64_Payload ===================
  def alwaysTrue_Base_TypesInteger_64_Payload(v: Base_Types.Integer_64_Payload): B = {return T}

  var config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload = Config_Base_TypesInteger_64_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_64_Payload _)

  def get_Config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload = {return config_Base_TypesInteger_64_Payload}

  def set_Config_Base_TypesInteger_64_Payload(config: Config_Base_TypesInteger_64_Payload): RandomLib ={
    config_Base_TypesInteger_64_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_8_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_8_Payload(v: Base_Types.Unsigned_8_Payload): B = {return T}

  var config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload = Config_Base_TypesUnsigned_8_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_8_Payload _)

  def get_Config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload = {return config_Base_TypesUnsigned_8_Payload}

  def set_Config_Base_TypesUnsigned_8_Payload(config: Config_Base_TypesUnsigned_8_Payload): RandomLib ={
    config_Base_TypesUnsigned_8_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_16_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_16_Payload(v: Base_Types.Unsigned_16_Payload): B = {return T}

  var config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload = Config_Base_TypesUnsigned_16_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_16_Payload _)

  def get_Config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload = {return config_Base_TypesUnsigned_16_Payload}

  def set_Config_Base_TypesUnsigned_16_Payload(config: Config_Base_TypesUnsigned_16_Payload): RandomLib ={
    config_Base_TypesUnsigned_16_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_32_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_32_Payload(v: Base_Types.Unsigned_32_Payload): B = {return T}

  var config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload = Config_Base_TypesUnsigned_32_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_32_Payload _)

  def get_Config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload = {return config_Base_TypesUnsigned_32_Payload}

  def set_Config_Base_TypesUnsigned_32_Payload(config: Config_Base_TypesUnsigned_32_Payload): RandomLib ={
    config_Base_TypesUnsigned_32_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_64_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_64_Payload(v: Base_Types.Unsigned_64_Payload): B = {return T}

  var config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload = Config_Base_TypesUnsigned_64_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_64_Payload _)

  def get_Config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload = {return config_Base_TypesUnsigned_64_Payload}

  def set_Config_Base_TypesUnsigned_64_Payload(config: Config_Base_TypesUnsigned_64_Payload): RandomLib ={
    config_Base_TypesUnsigned_64_Payload = config
    return this
  }

  // ============= Base_Types.Float_Payload ===================
  def alwaysTrue_Base_TypesFloat_Payload(v: Base_Types.Float_Payload): B = {return T}

  var config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload = Config_Base_TypesFloat_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_Payload _)

  def get_Config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload = {return config_Base_TypesFloat_Payload}

  def set_Config_Base_TypesFloat_Payload(config: Config_Base_TypesFloat_Payload): RandomLib ={
    config_Base_TypesFloat_Payload = config
    return this
  }

  // ============= Base_Types.Float_32_Payload ===================
  def alwaysTrue_Base_TypesFloat_32_Payload(v: Base_Types.Float_32_Payload): B = {return T}

  var config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload = Config_Base_TypesFloat_32_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_32_Payload _)

  def get_Config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload = {return config_Base_TypesFloat_32_Payload}

  def set_Config_Base_TypesFloat_32_Payload(config: Config_Base_TypesFloat_32_Payload): RandomLib ={
    config_Base_TypesFloat_32_Payload = config
    return this
  }

  // ============= Base_Types.Float_64_Payload ===================
  def alwaysTrue_Base_TypesFloat_64_Payload(v: Base_Types.Float_64_Payload): B = {return T}

  var config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload = Config_Base_TypesFloat_64_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_64_Payload _)

  def get_Config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload = {return config_Base_TypesFloat_64_Payload}

  def set_Config_Base_TypesFloat_64_Payload(config: Config_Base_TypesFloat_64_Payload): RandomLib ={
    config_Base_TypesFloat_64_Payload = config
    return this
  }

  // ============= Base_Types.Character_Payload ===================
  def alwaysTrue_Base_TypesCharacter_Payload(v: Base_Types.Character_Payload): B = {return T}

  var config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload = Config_Base_TypesCharacter_Payload(100, _verbose, alwaysTrue_Base_TypesCharacter_Payload _)

  def get_Config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload = {return config_Base_TypesCharacter_Payload}

  def set_Config_Base_TypesCharacter_Payload(config: Config_Base_TypesCharacter_Payload): RandomLib ={
    config_Base_TypesCharacter_Payload = config
    return this
  }

  // ============= Base_Types.String_Payload ===================
  def alwaysTrue_Base_TypesString_Payload(v: Base_Types.String_Payload): B = {return T}

  var config_Base_TypesString_Payload: Config_Base_TypesString_Payload = Config_Base_TypesString_Payload(100, _verbose, alwaysTrue_Base_TypesString_Payload _)

  def get_Config_Base_TypesString_Payload: Config_Base_TypesString_Payload = {return config_Base_TypesString_Payload}

  def set_Config_Base_TypesString_Payload(config: Config_Base_TypesString_Payload): RandomLib ={
    config_Base_TypesString_Payload = config
    return this
  }

  // ============= ISZ[B] ===================
  def alwaysTrue_ISZB(v: ISZ[B]): B = {return T}

  var config_ISZB: Config_ISZB = Config_ISZB(0, 20, 100, _verbose, alwaysTrue_ISZB _)
  def get_Config_ISZB: Config_ISZB = {return config_ISZB}

  def set_Config_ISZB(config: Config_ISZB): RandomLib ={
    config_ISZB = config
    return this
  }

  // ============= Base_Types.Bits_Payload ===================
  def alwaysTrue_Base_TypesBits_Payload(v: Base_Types.Bits_Payload): B = {return T}

  var config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload = Config_Base_TypesBits_Payload(100, _verbose, alwaysTrue_Base_TypesBits_Payload _)

  def get_Config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload = {return config_Base_TypesBits_Payload}

  def set_Config_Base_TypesBits_Payload(config: Config_Base_TypesBits_Payload): RandomLib ={
    config_Base_TypesBits_Payload = config
    return this
  }

  // ============= BuildingControl.FanAck.Type ===================
  def alwaysTrue_BuildingControlFanAckType(v: BuildingControl.FanAck.Type): B = {return T}

  var config_BuildingControlFanAckType: Config_BuildingControlFanAckType = Config_BuildingControlFanAckType(100, _verbose, alwaysTrue_BuildingControlFanAckType _)

  def get_Config_BuildingControlFanAckType: Config_BuildingControlFanAckType = {return config_BuildingControlFanAckType}

  def set_Config_BuildingControlFanAckType(config: Config_BuildingControlFanAckType): RandomLib ={
    config_BuildingControlFanAckType = config
    return this
  }

  // ============= BuildingControl.FanAck_Payload ===================
  def alwaysTrue_BuildingControlFanAck_Payload(v: BuildingControl.FanAck_Payload): B = {return T}

  var config_BuildingControlFanAck_Payload: Config_BuildingControlFanAck_Payload = Config_BuildingControlFanAck_Payload(100, _verbose, alwaysTrue_BuildingControlFanAck_Payload _)

  def get_Config_BuildingControlFanAck_Payload: Config_BuildingControlFanAck_Payload = {return config_BuildingControlFanAck_Payload}

  def set_Config_BuildingControlFanAck_Payload(config: Config_BuildingControlFanAck_Payload): RandomLib ={
    config_BuildingControlFanAck_Payload = config
    return this
  }

  // ============= BuildingControl.FanCmd.Type ===================
  def alwaysTrue_BuildingControlFanCmdType(v: BuildingControl.FanCmd.Type): B = {return T}

  var config_BuildingControlFanCmdType: Config_BuildingControlFanCmdType = Config_BuildingControlFanCmdType(100, _verbose, alwaysTrue_BuildingControlFanCmdType _)

  def get_Config_BuildingControlFanCmdType: Config_BuildingControlFanCmdType = {return config_BuildingControlFanCmdType}

  def set_Config_BuildingControlFanCmdType(config: Config_BuildingControlFanCmdType): RandomLib ={
    config_BuildingControlFanCmdType = config
    return this
  }

  // ============= BuildingControl.FanCmd_Payload ===================
  def alwaysTrue_BuildingControlFanCmd_Payload(v: BuildingControl.FanCmd_Payload): B = {return T}

  var config_BuildingControlFanCmd_Payload: Config_BuildingControlFanCmd_Payload = Config_BuildingControlFanCmd_Payload(100, _verbose, alwaysTrue_BuildingControlFanCmd_Payload _)

  def get_Config_BuildingControlFanCmd_Payload: Config_BuildingControlFanCmd_Payload = {return config_BuildingControlFanCmd_Payload}

  def set_Config_BuildingControlFanCmd_Payload(config: Config_BuildingControlFanCmd_Payload): RandomLib ={
    config_BuildingControlFanCmd_Payload = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container(v: BuildingControl.Fan_i_tcp_fan_PreState_Container): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PreState_Container: Config_BuildingControlFan_i_tcp_fan_PreState_Container = Config_BuildingControlFan_i_tcp_fan_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container _)

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container: Config_BuildingControlFan_i_tcp_fan_PreState_Container = {return config_BuildingControlFan_i_tcp_fan_PreState_Container}

  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PreState_Container = config
    return this
  }

  // ============= Option[BuildingControl.FanCmd.Type] ===================
  def alwaysTrue_OptionBuildingControlFanCmdType(v: Option[BuildingControl.FanCmd.Type]): B = {return T}

  var config_OptionBuildingControlFanCmdType: Config_OptionBuildingControlFanCmdType = Config_OptionBuildingControlFanCmdType(0, 20, 100, _verbose, alwaysTrue_OptionBuildingControlFanCmdType _)
  def get_Config_OptionBuildingControlFanCmdType: Config_OptionBuildingControlFanCmdType = {return config_OptionBuildingControlFanCmdType}

  def set_Config_OptionBuildingControlFanCmdType(config: Config_OptionBuildingControlFanCmdType): RandomLib ={
    config_OptionBuildingControlFanCmdType = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container_P ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container_P(v: BuildingControl.Fan_i_tcp_fan_PreState_Container_P): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PreState_Container_P: Config_BuildingControlFan_i_tcp_fan_PreState_Container_P = Config_BuildingControlFan_i_tcp_fan_PreState_Container_P(100, _verbose, alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container_P _)

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P: Config_BuildingControlFan_i_tcp_fan_PreState_Container_P = {return config_BuildingControlFan_i_tcp_fan_PreState_Container_P}

  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container_P(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container_P): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PreState_Container_P = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PreState_Container_PS ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container_PS(v: BuildingControl.Fan_i_tcp_fan_PreState_Container_PS): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PreState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS = Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS(100, _verbose, alwaysTrue_BuildingControlFan_i_tcp_fan_PreState_Container_PS _)

  def get_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS = {return config_BuildingControlFan_i_tcp_fan_PreState_Container_PS}

  def set_Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS(config: Config_BuildingControlFan_i_tcp_fan_PreState_Container_PS): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PreState_Container_PS = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container(v: BuildingControl.Fan_i_tcp_fan_PostState_Container): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PostState_Container: Config_BuildingControlFan_i_tcp_fan_PostState_Container = Config_BuildingControlFan_i_tcp_fan_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container _)

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container: Config_BuildingControlFan_i_tcp_fan_PostState_Container = {return config_BuildingControlFan_i_tcp_fan_PostState_Container}

  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PostState_Container = config
    return this
  }

  // ============= Option[BuildingControl.FanAck.Type] ===================
  def alwaysTrue_OptionBuildingControlFanAckType(v: Option[BuildingControl.FanAck.Type]): B = {return T}

  var config_OptionBuildingControlFanAckType: Config_OptionBuildingControlFanAckType = Config_OptionBuildingControlFanAckType(0, 20, 100, _verbose, alwaysTrue_OptionBuildingControlFanAckType _)
  def get_Config_OptionBuildingControlFanAckType: Config_OptionBuildingControlFanAckType = {return config_OptionBuildingControlFanAckType}

  def set_Config_OptionBuildingControlFanAckType(config: Config_OptionBuildingControlFanAckType): RandomLib ={
    config_OptionBuildingControlFanAckType = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container_P ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container_P(v: BuildingControl.Fan_i_tcp_fan_PostState_Container_P): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PostState_Container_P: Config_BuildingControlFan_i_tcp_fan_PostState_Container_P = Config_BuildingControlFan_i_tcp_fan_PostState_Container_P(100, _verbose, alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container_P _)

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P: Config_BuildingControlFan_i_tcp_fan_PostState_Container_P = {return config_BuildingControlFan_i_tcp_fan_PostState_Container_P}

  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container_P(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container_P): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PostState_Container_P = config
    return this
  }

  // ============= BuildingControl.Fan_i_tcp_fan_PostState_Container_PS ===================
  def alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container_PS(v: BuildingControl.Fan_i_tcp_fan_PostState_Container_PS): B = {return T}

  var config_BuildingControlFan_i_tcp_fan_PostState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS = Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS(100, _verbose, alwaysTrue_BuildingControlFan_i_tcp_fan_PostState_Container_PS _)

  def get_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS: Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS = {return config_BuildingControlFan_i_tcp_fan_PostState_Container_PS}

  def set_Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS(config: Config_BuildingControlFan_i_tcp_fan_PostState_Container_PS): RandomLib ={
    config_BuildingControlFan_i_tcp_fan_PostState_Container_PS = config
    return this
  }

  // ============= BuildingControl.SetPoint_i ===================
  def alwaysTrue_BuildingControlSetPoint_i(v: BuildingControl.SetPoint_i): B = {return T}

  var config_BuildingControlSetPoint_i: Config_BuildingControlSetPoint_i = Config_BuildingControlSetPoint_i(100, _verbose, alwaysTrue_BuildingControlSetPoint_i _)

  def get_Config_BuildingControlSetPoint_i: Config_BuildingControlSetPoint_i = {return config_BuildingControlSetPoint_i}

  def set_Config_BuildingControlSetPoint_i(config: Config_BuildingControlSetPoint_i): RandomLib ={
    config_BuildingControlSetPoint_i = config
    return this
  }

  // ============= BuildingControl.SetPoint_i_Payload ===================
  def alwaysTrue_BuildingControlSetPoint_i_Payload(v: BuildingControl.SetPoint_i_Payload): B = {return T}

  var config_BuildingControlSetPoint_i_Payload: Config_BuildingControlSetPoint_i_Payload = Config_BuildingControlSetPoint_i_Payload(100, _verbose, alwaysTrue_BuildingControlSetPoint_i_Payload _)

  def get_Config_BuildingControlSetPoint_i_Payload: Config_BuildingControlSetPoint_i_Payload = {return config_BuildingControlSetPoint_i_Payload}

  def set_Config_BuildingControlSetPoint_i_Payload(config: Config_BuildingControlSetPoint_i_Payload): RandomLib ={
    config_BuildingControlSetPoint_i_Payload = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container(v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container = Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container = {return config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container = config
    return this
  }

  // ============= Option[art.Empty] ===================
  def alwaysTrue_Option_artEmpty(v: Option[art.Empty]): B = {return T}

  var config_Option_artEmpty: Config_Option_artEmpty = Config_Option_artEmpty(0, 20, 100, _verbose, alwaysTrue_Option_artEmpty _)
  def get_Config_Option_artEmpty: Config_Option_artEmpty = {return config_Option_artEmpty}

  def set_Config_Option_artEmpty(config: Config_Option_artEmpty): RandomLib ={
    config_Option_artEmpty = config
    return this
  }

  // ============= Option[BuildingControl.SetPoint_i] ===================
  def alwaysTrue_OptionBuildingControlSetPoint_i(v: Option[BuildingControl.SetPoint_i]): B = {return T}

  var config_OptionBuildingControlSetPoint_i: Config_OptionBuildingControlSetPoint_i = Config_OptionBuildingControlSetPoint_i(0, 20, 100, _verbose, alwaysTrue_OptionBuildingControlSetPoint_i _)
  def get_Config_OptionBuildingControlSetPoint_i: Config_OptionBuildingControlSetPoint_i = {return config_OptionBuildingControlSetPoint_i}

  def set_Config_OptionBuildingControlSetPoint_i(config: Config_OptionBuildingControlSetPoint_i): RandomLib ={
    config_OptionBuildingControlSetPoint_i = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_P): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P = Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(100, _verbose, alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P = {return config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(v: BuildingControl.TempControl_i_tcp_tempControl_PreState_Container_PS): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS = Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(100, _verbose, alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS = {return config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS(config: Config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container(v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container = Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container = {return config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_P): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P = Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(100, _verbose, alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P = {return config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P = config
    return this
  }

  // ============= BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS ===================
  def alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(v: BuildingControl.TempControl_i_tcp_tempControl_PostState_Container_PS): B = {return T}

  var config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS = Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(100, _verbose, alwaysTrue_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS _)

  def get_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS = {return config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS}

  def set_Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS(config: Config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS): RandomLib ={
    config_BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container = Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_P): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P = Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(100, _verbose, alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(v: BuildingControl.TempSensor_i_tcp_tempSensor_PreState_Container_PS): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS = Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(100, _verbose, alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container = Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_P): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P = Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(100, _verbose, alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P = config
    return this
  }

  // ============= BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS ===================
  def alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(v: BuildingControl.TempSensor_i_tcp_tempSensor_PostState_Container_PS): B = {return T}

  var config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS = Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(100, _verbose, alwaysTrue_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS _)

  def get_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS = {return config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS}

  def set_Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS(config: Config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS): RandomLib ={
    config_BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS = config
    return this
  }

  // ============= BuildingControl.TempUnit.Type ===================
  def alwaysTrue_BuildingControlTempUnitType(v: BuildingControl.TempUnit.Type): B = {return T}

  var config_BuildingControlTempUnitType: Config_BuildingControlTempUnitType = Config_BuildingControlTempUnitType(100, _verbose, alwaysTrue_BuildingControlTempUnitType _)

  def get_Config_BuildingControlTempUnitType: Config_BuildingControlTempUnitType = {return config_BuildingControlTempUnitType}

  def set_Config_BuildingControlTempUnitType(config: Config_BuildingControlTempUnitType): RandomLib ={
    config_BuildingControlTempUnitType = config
    return this
  }

  // ============= BuildingControl.TempUnit_Payload ===================
  def alwaysTrue_BuildingControlTempUnit_Payload(v: BuildingControl.TempUnit_Payload): B = {return T}

  var config_BuildingControlTempUnit_Payload: Config_BuildingControlTempUnit_Payload = Config_BuildingControlTempUnit_Payload(100, _verbose, alwaysTrue_BuildingControlTempUnit_Payload _)

  def get_Config_BuildingControlTempUnit_Payload: Config_BuildingControlTempUnit_Payload = {return config_BuildingControlTempUnit_Payload}

  def set_Config_BuildingControlTempUnit_Payload(config: Config_BuildingControlTempUnit_Payload): RandomLib ={
    config_BuildingControlTempUnit_Payload = config
    return this
  }

  // ============= BuildingControl.Temperature_i ===================
  def alwaysTrue_BuildingControlTemperature_i(v: BuildingControl.Temperature_i): B = {return T}

  var config_BuildingControlTemperature_i: Config_BuildingControlTemperature_i = Config_BuildingControlTemperature_i(100, _verbose, alwaysTrue_BuildingControlTemperature_i _)

  def get_Config_BuildingControlTemperature_i: Config_BuildingControlTemperature_i = {return config_BuildingControlTemperature_i}

  def set_Config_BuildingControlTemperature_i(config: Config_BuildingControlTemperature_i): RandomLib ={
    config_BuildingControlTemperature_i = config
    return this
  }

  // ============= BuildingControl.Temperature_i_Payload ===================
  def alwaysTrue_BuildingControlTemperature_i_Payload(v: BuildingControl.Temperature_i_Payload): B = {return T}

  var config_BuildingControlTemperature_i_Payload: Config_BuildingControlTemperature_i_Payload = Config_BuildingControlTemperature_i_Payload(100, _verbose, alwaysTrue_BuildingControlTemperature_i_Payload _)

  def get_Config_BuildingControlTemperature_i_Payload: Config_BuildingControlTemperature_i_Payload = {return config_BuildingControlTemperature_i_Payload}

  def set_Config_BuildingControlTemperature_i_Payload(config: Config_BuildingControlTemperature_i_Payload): RandomLib ={
    config_BuildingControlTemperature_i_Payload = config
    return this
  }

  // ============= runtimemonitor.ObservationKind.Type ===================
  def alwaysTrue_runtimemonitorObservationKindType(v: runtimemonitor.ObservationKind.Type): B = {return T}

  var config_runtimemonitorObservationKindType: Config_runtimemonitorObservationKindType = Config_runtimemonitorObservationKindType(100, _verbose, alwaysTrue_runtimemonitorObservationKindType _)

  def get_Config_runtimemonitorObservationKindType: Config_runtimemonitorObservationKindType = {return config_runtimemonitorObservationKindType}

  def set_Config_runtimemonitorObservationKindType(config: Config_runtimemonitorObservationKindType): RandomLib ={
    config_runtimemonitorObservationKindType = config
    return this
  }
}

