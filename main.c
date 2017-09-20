#include<stdio.h>
#include<unistd.h>
int main() {
  printf("Hello world!\n");
  unsigned int x = 42;
  while(fork()) x++;
  return 0;
}
