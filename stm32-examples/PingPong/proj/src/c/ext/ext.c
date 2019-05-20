// add c extension code here
#include <all.h>

#ifdef STM32
// see Src/main.c
extern void blinkOnRed(int16_t count);
extern void blinkOnBlue(int16_t count);
#else
void blinkOnRed(int16_t count) {
    printf("Blinking red LED %i times\n", count);
}

void blinkOnBlue(int16_t count) {
    printf("Blinking blue LED %i times\n", count);
}
#endif

Unit proj_PingPong_PingExt_blinkRedLED(StackFrame caller, Z8 count){
    blinkOnRed(count);
}

Unit proj_PingPong_PongExt_blinkBlueLED(StackFrame caller, Z8 count){
    blinkOnBlue(count);
}