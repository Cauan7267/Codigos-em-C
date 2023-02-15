#include<stdio.h>

int main(){

    int n;

    printf("Digite 0 para mulher e 1 para homem");
    scanf("%d", &n);

    n == 0 ? printf("Mulher") : n == 1 ? printf("Homem") : printf("Desconhecido");
}