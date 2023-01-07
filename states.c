#include "states.h"

extern myEvent my_event;
myState my_state;

void initState(int a) { printf("You are in init state");
  my_state.current_state = 0;
}

void state1(int a) { 
    printf("State1\n");
    my_state.current_state = 1;
    my_state.current_state_adress = &state1;

    sleep(1);
    printf("Received event%d\n", my_event.event_a);

    if (my_event.event_a == 1) {
      printf("State 1 triggered to change\n");
      state next = &state2;
      sm_next(next);
      // next(2);
    } else {
      state next = &state1;
      sm_next(next);
    }
}
void state2(int a) { 
    printf("State2\n");
    my_state.current_state = 2;
    my_state.current_state_adress = &state2;

    sleep(1);
    printf("Received event %d\n", my_event.event_a);

    if (my_event.event_a == 2) {
      printf("State 2 triggered to change\n");
      state next = &state3;
      sm_next(next);
    } else {
      state next = &state2;
      sm_next(next);
    }
}
void state3(int a) { 
    printf("State3\n");
    my_state.current_state = 3;
    my_state.current_state_adress = &state3;

    sleep(1);
    printf("%d\n", my_event.event_a);
    
    if (my_event.event_a == 3) {
      printf("State 3 triggered to change\n");
      state next = &state1;
      sm_next(next);
    } else {
      state next = &state3;
      sm_next(next);
    }
}

int getCurrentStateNr() { return my_state.current_state; }
state getCurrentState() { return my_state.current_state_adress; }
