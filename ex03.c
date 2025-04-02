#include <stdio.h>

int main(void) {
  int x = 0;

  while( x < 20 ) {
    x++;      
    if( x % 3 == 0 ) {
      continue; 
    }
    printf("%d ", x);
  }

  printf("\n%d", x);
  return 0;
}