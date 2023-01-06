#include "stateMachine.h"

void initStateMachine() {
  state current_state = &state1;
  // APA_MACRO(current_state,1);
  printf("Init stateMachine");
  current_state(1);
}

//void changeState(state newState) { state current_state = &newState; }

void currentState() { getCurrentStateNr(); }
// void currentState(){
//     state current_state =
// }