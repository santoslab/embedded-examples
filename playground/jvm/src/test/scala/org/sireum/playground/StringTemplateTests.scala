package org.sireum.playground

import org.sireum._
import org.sireum.test._

class StringTemplateTests extends TestSuite {

  val tests = Tests {
    * - {
      val str = "Hello world"
      println(str)
    }

    * - {
      val str = "Hello world - single line string template"
      val _st = st"${str}"
      println(_st.render)
    }

    * - {
      val str = "Hello world - multi line string template"
      val _st = st"""1.
                    |2. ${str}
                    |3. """
      println(_st.render)
    }

    * - {
      val str = "Hello world - sequences"
      val seq = ISZ(1, 2, 3)
      val sep = s". ${str}\n"
      val _st = st"${(seq, sep)}"
      println(_st.render)
    }

    // examples using the other test methods

    *("Custom Titled Test: Hello world - sequences")({
      val seq = ISZ('a', 'b', 'c')
      val _st = st"${(seq, ",")}"
      println(_st.render)
      _st.render.native == "a,b,c"
    })

    *({
      val expected = "a,b,c"
      val _st = st"""${(ISZ('a', 'b', 'c'), ",")}"""
      println(s"Does '${_st.render}' == '${expected}'?")
      _st.render.native == expected
    })

    *({
      val expected = "1,2,3"
      val _st = st"""${(ISZ('a', 'b', 'c'), ",")}"""
      println(s"Does '${_st.render}' == '${expected}'?")
      _st.render.native == expected
    }, "Example error message")
  }
}