#include "states.h"

extern myEvent my_event;

void state1(int a) { 
    printf("State1 %d",a);
    
    if (my_event.event_a == 1) {
      printf("State 1 triggered to change");
    }
}
void state2(int a) { 
    printf("State2 %d",a);
    
    if (my_event.event_a == 2) {
      printf("State 2 triggered to change");
    }
}
void state3(int a) { 
    printf("State3 %d",a);

    if (my_event.event_a == 3) {
      printf("State 3 triggered to change");
    }
}