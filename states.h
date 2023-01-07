#ifndef BC311736_1BD5_4082_8DEA_869C26052021
#define BC311736_1BD5_4082_8DEA_869C26052021


#include <stdio.h>
#include "stateMachine.h"


typedef void (*state)(int a);
typedef void (*states[3])(int a);
// typedef struct {
//   int event_a;
// } myEvent;
typedef struct {
  int current_state;
  state current_state_adress;
} myState;
enum StateEnum { einit, estate1, estate2, estate3 };

#define APA_MACRO(myFunc, data) myFunc(data);

void initState(int a);
void state1(int a);
void state2(int a);
void state3(int a);
void exit(int a);
int getCurrentStateNr();
state getCurrentState();
void setEvent(int i);
#endif /* F5D4C242_4525_491B_8620_116C01D9D96C */

