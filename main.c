#include<stdio.h>
#include<unistd.h>
//@ assigns \nothing;
void f();
int main() {
  int x; //  = 42;
  printf("Hello world!\n");
  f(42);
  // x = 0xFFFFFFFA;
  /* while(1) */ x++; 
  return 0;
}
