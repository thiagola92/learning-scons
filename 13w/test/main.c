void lasend(char *);
void laconnect(char *);

int main(void) {
  laconnect("127.0.0.1");
  lasend("Hello world!");
}