#include <stdio.h>
#include <stdlib.h>

struct noreturn_struct {
  int data;
  __attribute__((noreturn)) void (*func)(void);
};

void foo(void) {
  printf("In foo.\n");
  exit(1);
}

int main(void) {
  struct noreturn_struct s = {42, foo};
  printf("In main.\n");
  s.func(); // stop?
  printf("Back in main.\n");
  return 0;
}
