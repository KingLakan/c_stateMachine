
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "stateMachine.h"
#include "states.h"
myEvent my_event;

void *eventProducer(void *id) {
  int testInteger = 1;
//   while (testInteger != 99) {
//     printf("Enter an integer: \n");
//     scanf("%d", &testInteger);
//     my_event.event_a = testInteger;
//   }
    while(testInteger<4)
    {
      my_event.event_a = testInteger;
      testInteger++;
      if (testInteger == 4){
        testInteger = 0;
      }
    //   printf("producer %d\n", my_event.event_a);
      sleep(2);
    }
}

int main(void) {
  pthread_t eventThread;
  pthread_create(&eventThread, NULL, eventProducer, (void *)&eventThread);
  
  initStateMachine();
  pthread_exit(NULL);  // main waits for threads
  return 0;
  // gcc-10 main.c states.c stateMachine.c -lpthread -o main && ./main
}