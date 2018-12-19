package org.sireum.playground

import org.sireum._
import org.sireum.test._

class StringTemplateTests extends TestSuite {

  val tests = Tests {
    // * adds position info
    // - registers test as JUnit tests
    * - {
      val str = "Hello world"
      println(str)
    }

    // Parr example
    //   import org.stringtemplate.v4.*;
    //   ...
    //   ST hello = new ST("Hello, <name>");
    //   hello.add("name", "World");
    //   System.out.println(hello.render());

    * - {
      val name: String = "World"
      val hello: ST = st"Hello, ${name}!"
      println(hello.render)
    }


    * - {
      def hello(name:String): ST = st"Hello, ${name}!"
      println(hello("World").render)
    }

    * - {
      def sideByside(text:String): ST = st"${text}::${text}"
      def hello(name:String): ST = st"Hello, ${sideByside(name).render}!"
      println(hello("World").render)
    }

    * - {
      def sideByside(text:String): ST = st"${text}::${text}"
      def hello(name:String): ST = st"Hello, ${sideByside(name)}!"
      println(hello("World").render)
    }

    //    * - {
//      def init(v:String) = if OT NULLXXX st"= ${v}" else st""
//      def decl(typ: String, name: String, value: String)
//             = st"${typ} ${name} ${init(value)}"
//      // file /tmp/init.st
//
//    }

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

//    *({
//      val expected = "1,2,3"
//      val _st = st"""${(ISZ('a', 'b', 'c'), ",")}"""
//      println(s"Does '${_st.render}' == '${expected}'?")
//      _st.render.native == expected
//    }, "Example error message")

def xTaskCreateST(taskFunctionName:String, taskName:String,
                  taskStackSize:String, taskPV:String,
                  taskPriority:String, taskHandle: String) =
  st""" // see https://docs.aws.amazon.com/freertos-kernel/latest/ref/reference5.html
xTaskCreate(
    ${taskFunctionName}, // name of task function
    (const char* const) ${taskName}, // task name
    ${taskStackSize}, // Stack size
    ${taskPV}, // task parameters values
    ${taskPriority}, // priority
    ${taskHandle}); // task handle"""

    * - { val taskFunctionName = "MyTask"
          val taskID = "MyTaskID"
          val stackSize = "3"
          val taskPV = "NULL"
          val priority = "2"
          val taskHandle = "NULL"
          val _st = xTaskCreateST(taskFunctionName, taskID,
                                  stackSize, taskPV, priority, taskHandle)
            println(_st.render)
              }
    }
}