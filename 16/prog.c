#include <stdio.h>

void show_msg() {
#ifdef SAY_HELLO
  printf("(prog.c) Hello world!\n");
#else
  printf("(prog.c) Nothing to do\n");
#endif
}