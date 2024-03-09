#include <stdio.h>

void show_msg() {
#if defined(PROG_HELLO)
  printf("(prog.c) Hello world!\n");
#else
  printf("(prog.c) Nothing to do\n");
#endif
}