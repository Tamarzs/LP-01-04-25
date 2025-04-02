#include "stdio.h"

int main () {
    for(int a = 0; a < 2; a++) {
        for(int b = 0; b < 2; b++) {
            printf("A: %d ", a);
            printf("B: %d ", b);
            printf("%d && %d = %d", a, b, a&&b);
            printf("\n");
        }
    }
}