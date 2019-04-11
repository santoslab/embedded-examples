lazy val art = standardProject("art")

lazy val mathLibrary = slangEmbeddedProject("math-library")


val scalaVer = "2.12.7"

val sireumScalacVersion = "3.3.3"

val runtimeVersion = "2b15bfdbc147b5b5e61656678191506c33b71b9c"

val commonSettings = Seq(
  organization := "org.sireum",
  incOptions := incOptions.value.withLogRecompileOnMacro(false),
  scalaVersion := scalaVer,
  scalacOptions := Seq("-target:jvm-1.8", "-deprecation",
    "-Ydelambdafy:method", "-feature", "-unchecked", "-Xfatal-warnings"),
  Test / parallelExecution := true,
  resolvers ++= Seq(Resolver.sonatypeRepo("public"), "jitpack" at "https://jitpack.io"),
  addCompilerPlugin("org.sireum" %% "scalac-plugin" % sireumScalacVersion),
  libraryDependencies += "org.sireum.runtime" %% "library" % runtimeVersion
)

val slangEmbeddedSettings = Seq(
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/architecture",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/art",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/bridge",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/component",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/data",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/nix"
)


def standardProject(projId: String) =
  Project(id = projId, base = file(projId)).settings(commonSettings)

def slangEmbeddedProject(projId: String) =
  Project(id = projId, base = file(projId)).settings(commonSettings ++ slangEmbeddedSettings)

def slangEmbeddedDebugProject(projId: String) =
  Project(id = projId, base = file(projId)).
    settings(commonSettings ++ slangEmbeddedSettings ++
      Seq(Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/debug",
        libraryDependencies += "org.reflections" % "reflections" % reflectVer,
      )).
    dependsOn(artInspector)


val gsonVer = "2.8.2" // for gson, google's json parser
val rxVer = "2.1.12" // for rxJava, java impl of reactiveX api
val rxSwingVer = "0.2.12" // for rxJava2Swing, has utils for rxJava+swing
val reflectVer = "0.9.11" // for reflections which enable wiring up plugins at runtime
val javafxVer = "11.0.2" // for JavaFx's web-browser to display msc html pages


def javaVersion(): Int = {
  var ver = System.getProperty("java.version")
  if(ver.startsWith("1.")) ver = ver.substring(2)
  val dot = ver.indexOf('.')
  val dash = ver.indexOf('-')
  return Integer.parseInt(ver.substring(0, if(dot >= 0) dot else if (dash >= 0) dash else 1))
}

val artInspectorId = "art-inspector"
lazy val artInspector = Project(
  id = artInspectorId,
  base = file(artInspectorId)).
  settings(commonSettings ++ Seq(
    name := artInspectorId,

    // removing "-Xfatal-warnings" from scalacOptions
    scalacOptions := Seq("-target:jvm-1.8", "-deprecation", "-Ydelambdafy:method", "-feature", "-unchecked"),

    libraryDependencies += "com.google.code.gson" % "gson" % gsonVer,
    libraryDependencies += "io.reactivex.rxjava2" % "rxjava" % rxVer,
    libraryDependencies += "com.github.akarnokd" % "rxjava2-swing" % rxSwingVer,
    libraryDependencies += "org.reflections" % "reflections" % reflectVer,

    libraryDependencies ++= {
      if (javaVersion() >= 11) Seq("org.openjfx" % "javafx-swing" % javafxVer, "org.openjfx" % "javafx-web" % javafxVer)
      else Seq()
    },

    Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/java",
    Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/scala",
    Compile / unmanagedSourceDirectories += baseDirectory.value / "src/meta/java",
    Compile / unmanagedSourceDirectories += baseDirectory.value / "src/plugin/java",
    Compile / unmanagedSourceDirectories += baseDirectory.value / "src/plugin/scala"
  )
  ).dependsOn(art)
