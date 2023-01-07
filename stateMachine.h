#ifndef B743ADFF_E728_42C5_93A8_443724049E91
#define B743ADFF_E728_42C5_93A8_443724049E91
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "states.h"

void initStateMachine();
//void changeState(state newState);
void currentState();
void getCurrentStateAdress();
void sm_next(state);

#endif /* B743ADFF_E728_42C5_93A8_443724049E91 */
