#include "stdio.h"

int main () {
    int x, y, z, a;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &z);
    
    printf("Digite o quarto número: ");
    scanf("%d", &a);
    
    printf("%d %d %d %d\n", x, y, z, a);
    
    for(int cont = 1; cont <= x; cont++) {
        printf("*");
    } printf("\n");
    for(int cont = 1; cont <= y; cont++) {
        printf("*");
    } printf("\n");
    for(int cont = 1; cont <= z; cont++) {
        printf("*");
    } printf("\n");
    for(int cont = 1; cont <= a; cont++) {
        printf("*");
    }
}
