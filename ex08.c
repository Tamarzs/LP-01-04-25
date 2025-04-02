#include "stdio.h"

void testaPar(int x) {
  int num = x;
  if ( num % 2 == 0 ) {
      printf("%d é par? 1", x);
  } else {
      printf("%d é par? 0", x);
  }    
}  

int main(void) {
    testaPar(3);
}