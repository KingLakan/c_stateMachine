#include "states.h"

myEvent my_event;

int main(void) {
  int a = 11;
  int b = 22;
  int c = 33;

  states f = {&state1, &state2, &state3};
  my_event.event_a = 1;
  APA_MACRO(f[0], a);
  my_event.event_a = 2;
  APA_MACRO(f[1], b);
  my_event.event_a = 3;
  APA_MACRO(f[2], c);

  return 0;
}