#!/usr/bin/env bash
set -e
export EMBEDDED_HOME=$( cd "$( dirname "$0" )"/.. &> /dev/null && pwd )
. ${EMBEDDED_HOME}/bin/prelude.sh
cd ${EMBEDDED_HOME}
git submodule update --init --recursive --remote
export JAVA_HOME=${EMBEDDED_HOME}/bin/${PLATFORM}/jdk
export PATH=${JAVA_HOME}/bin:$PATH
${EMBEDDED_HOME}/bin/mill \
  playground.jvm.tests.test
