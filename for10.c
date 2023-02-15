#include<stdio.h>

int main(){

    int x, y;

    printf("Digite um número ");
    scanf("%d", &y);

    for (x = y; x >= 0; x--)
    {
        printf("Número %d\n", x);
    }
}