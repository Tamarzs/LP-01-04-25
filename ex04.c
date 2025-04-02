#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  
  printf("A: %d B: %d  %d && %d = 0\n", a, b, a, b);
  
  do {
      b++;
      printf("A: %d B: %d  %d && %d = 0\n", a, b, a, b);
      b--;
      a++;
      printf("A: %d B: %d  %d && %d = 0\n", a, b, a, b);
      b++;
      printf("A: %d B: %d  %d && %d = %d\n", a, b, a, b, a && b);
      break;
  } while ( b < 2 );
}