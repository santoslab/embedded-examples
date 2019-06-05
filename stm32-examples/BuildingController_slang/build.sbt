lazy val buidlingControlGen = slangEmbeddedProject("building_control")


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
