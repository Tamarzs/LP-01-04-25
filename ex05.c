#include "stdio.h"

int main () {
    for(int a = 0; a < 2; a++) {
        for(int b = 0; b < 2; b++) {
            printf("A: %d ", a);
            printf("B: %d ", b);
            if ( b == 0 ) {
                printf("A: %d ! B: %d = 1", a, b);
            printf("\n");
        } else {
            printf("%d ! %d = 0", a, b);
            printf("\n");
        }
    }
}
}