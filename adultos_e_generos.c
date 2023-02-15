#include<stdio.h>

int main(){

    int n;
    int idade;

    printf("Digite 0 para mulher e 1 para homem");
    scanf("%d", &n);

    printf("Digite aqui a sua idade");
    scanf("%d", &idade);

    if (n == 1 && idade <= 10)
    {
        printf("Homem criança");
    } else if (n == 1 && idade >= 11)
    {
        printf("Homem adolescente");
    } else if (n == 1 && idade >= 18)
    {
        printf("Homem adulto");
    } else if (n == 0 && idade <= 10)
    {
        printf("Mulher criança");
    } else if (n == 0 && idade >= 11)
    {
        printf("Mulher adolescente");
    } else if (n == 0 && idade >= 18)
    {
        printf("Mulher adulta");
    }
}