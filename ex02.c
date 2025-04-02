#include "stdio.h"

int main() {
    int guess;
    int par = 0;
    int total = 0;
    
    printf("Digite um número de 1 a 6: ");
    scanf("%d", &guess);
    
    do
    {
        if ( guess == 1) {
        break;
        } 
        total += guess;
        printf("Digite um número de 1 a 6: ");
    scanf("%d", &guess);
    } while ( guess % 2 == 0);
    
    printf("%d", total);
}
