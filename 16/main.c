#include <stdio.h>

void show_msg();

int main(void) {
#ifdef SAY_HELLO
  printf("(main.c) Say hello prog!\n");
  show_msg();
#else
  printf("(main.c) Nothing to do\n");
#endif
}