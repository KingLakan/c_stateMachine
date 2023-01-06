#include "states.h"

extern myEvent my_event;
myState my_state;

void initState(int a) { printf("You are in init state");
  my_state.current_state = 0;
}

void state1(int a) { 
    printf("State1 %d",a);
    my_state.current_state = 1;
    my_state.current_state_adress = &state1;

    if (my_event.event_a == 1) {
      printf("State 1 triggered to change");
      state next = &state2;
      next(2);
    }
}
void state2(int a) { 
    printf("State2 %d",a);
    my_state.current_state = 2;
    my_state.current_state_adress = &state2;

    if (my_event.event_a == 2) {
      printf("State 2 triggered to change");
      state next = &state3;
      next(3);
    }
}
void state3(int a) { 
    printf("State3 %d",a);
    my_state.current_state = 3;
    my_state.current_state_adress = &state3;

    if (my_event.event_a == 3) {
      printf("State 3 triggered to change");
      state next = &state1;
      next(1);
    }
}

int getCurrentStateNr() { return my_state.current_state; }
state getCurrentState() { return my_state.current_state_adress; }