#include "stdio.h"

int main () {
    int guess = 0;
    int fim = 3;
    
    printf("advinhe um número de 1 a 10: ");
    scanf("%d", &guess);

    do {
       fim--;
       if ( guess == 7) {
           printf("Você venceu!\n");
           break;
       } else {
       printf("Número errado!\n");
       printf("Tentativas restantes: %d\n", fim);
       printf("advinhe um número de 1 a 10: ");
       scanf("%d", &guess);
       if ( guess == 7) {
           printf("Você venceu!\n");
           break;
       }
       }
       } while( fim > 1 );
       printf("Fim de jogo!");
}