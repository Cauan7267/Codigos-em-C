#include<stdio.h>

int main(){
    float n1;
    float n2;
    float sub;

    printf("Digite o primeiro número");
    scanf("%f", &n1);

    printf("Digite o segundo número");
    scanf("%f", &n2);

    sub = n1 - n2;

    printf("O resultado é %.2f", sub);
}