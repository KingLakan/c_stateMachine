
#include "stateMachine.h"
#include "states.h"


int main(void) {
  int a = 11;
  int b = 22;
  int c = 33;

//   my_event.event_a =1;
//   initStateMachine();
//   my_event.event_a = 2;

  //my_event.event_a = 2;
  //my_event.event_a = 3;
  //currentState();

 initStateMachine();
// while(1){
//   printf("hej\n");
//   sleep(1);
// }
  //   states f = {&state1, &state2, &state3};
  //   my_event.event_a = 1;
  //   APA_MACRO(f[0], a);
  //   my_event.event_a = 2;
  //   APA_MACRO(f[1], b);
  //   my_event.event_a = 3;
  //   APA_MACRO(f[2], c);
  return 0;
  // gcc - 10 main.c states.c stateMachine.c - o main&&./ main return 0;
}