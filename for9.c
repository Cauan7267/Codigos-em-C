#include<stdio.h>

int main(){

    int x, y;

    printf("Digite um número");
    scanf("%d", &y);

    for (x = 1; x <= y; x++)
    {
        printf("Número %d\n", x);
    }
}