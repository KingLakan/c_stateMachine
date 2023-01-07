#include "stateMachine.h"
state stateAdress;
myEvent my_event;
void initStateMachine() {
  state current_state = &state1;
  // APA_MACRO(current_state,1);
  printf("Init stateMachine");
  current_state(1);
}

//void changeState(state newState) { state current_state = &newState; }

void currentState() { getCurrentStateNr(); }
void getCurrentStateAdress() { stateAdress = getCurrentState(); }
void sm_next(state toGoTo) {
  delay(1);
  toGoTo(1);
}
void setEvent(int i) { my_event.event_a = i; }
void delay(int number_of_seconds) {
// Converting time into milli_seconds
int milli_seconds = 1000 * number_of_seconds;

// Storing start time
clock_t start_time = clock();

// looping till required time is not achieved
while (clock() < start_time + milli_seconds);
}