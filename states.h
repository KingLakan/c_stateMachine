#ifndef F5D4C242_4525_491B_8620_116C01D9D96C
#define F5D4C242_4525_491B_8620_116C01D9D96C

#include <stdio.h>
typedef void (*state)(int a);
typedef void (*states[3])(int a);
typedef struct {
  int event_a;
} myEvent;

#define APA_MACRO(myFunc, data) myFunc(data);

void state1(int a);
void state2(int a);
void state3(int a);

#endif /* F5D4C242_4525_491B_8620_116C01D9D96C */
