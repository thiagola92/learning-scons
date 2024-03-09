#include <stdio.h>

void show_msg();

int main(void) {
#if defined(MAIN_HELLO)
  printf("(main.c) Hello world!\n");
#else
  printf("(main.c) Nothing to do\n");
#endif

  show_msg();
}