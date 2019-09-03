// add c extension code here
#include <all.h>


#ifdef STM32

// see SRC/main.c
extern void fanLED(int turnOn);
extern uint32_t pollPotentiometer();


Unit building_control_BuildingControl_FanNative_fanController(STACK_FRAME B turnOn){
  fanLED(turnOn);
}


Z16 building_control_BuildingControl_TempSensorNative_currentTempGet(STACK_FRAME){
  Z16 temp = (Z16) pollPotentiometer();

  return temp;
}

#else

#define MIN_TEMP 70
#define MAX_TEMP 90

static int temp = 0;
static int delta = 4;

Unit building_control_BuildingControl_FanNative_fanController(STACK_FRAME B turnOn){
  printf("fan native received %i\n", turnOn);
}


Z16 building_control_BuildingControl_TempSensorNative_currentTempGet(STACK_FRAME){
  if (temp == 0) {
    temp = MIN_TEMP;
  }
  temp += delta;
  if (temp < MIN_TEMP) delta = 4;
  else if (temp > MAX_TEMP) delta = -4;

  return temp;
}

#endif