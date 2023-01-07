#ifndef B743ADFF_E728_42C5_93A8_443724049E91
#define B743ADFF_E728_42C5_93A8_443724049E91
#include <stdio.h>
#include <time.h>
#include "states.h"

typedef struct {
  int event_a;
} myEvent;

void initStateMachine();
//void changeState(state newState);
void currentState();
void getCurrentStateAdress();
void sm_next();
void delay(int number_of_seconds);
#endif /* B743ADFF_E728_42C5_93A8_443724049E91 */
