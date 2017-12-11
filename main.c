#include<stdio.h>
#include<unistd.h>
int main() {
  int x = 42;
  printf("Hello world!\n");
  x = 0xFFFFFFFA;
  while(1) x++;
  return 0;
}
