#include "stdio.h"

int main () {
    int guess;
    int fim = 3;

    do {
       printf("advinhe um número de 1 a 10: ");
       scanf("%d" &guess);
       fim--;
       if ( guess == 7) {
           printf("Você venceu!");
       } else {
       printf("Número errado!");
       printf("Tentativas restantes: %d", fim);
       }
       }
}      while( fim != 0 ); 
}
