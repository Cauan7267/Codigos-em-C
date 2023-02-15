#include<stdio.h>

int main(){

    int x;
    int div;

    printf("Digite um número");
    scanf("%d", &x);

    div = x % 2;

    div == 0 ? printf("Par") : printf("impar");
}