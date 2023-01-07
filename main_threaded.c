#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
int k = 10;

void *myFun(void *id) {
  long *myID = (long *)id;
  printf("myid %ld", *myID);
  for (int i = 0; i < 10; i++) {
    k++;
    //printf("%d\n", i);
    sleep(2);
  }
}

void *listenFun(void *id) {
  long *myID = (long *)id;
  printf("myid %ld", *myID);

  for (int i = 0; i < 20; i++) {
    printf("%d\n", k);
    sleep(1);
  }
}

int main() {
  pthread_t mythread;
  pthread_t mythread2;
  pthread_create(&mythread, NULL, myFun, (void *)&mythread);
  pthread_create(&mythread2, NULL, listenFun, (void *)&mythread2);

  pthread_exit(NULL);//main waits for threads
  return 0;
}

// gcc-10 main_threaded.c -lpthread -o main2