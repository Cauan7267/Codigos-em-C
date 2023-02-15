#include <stdio.h>

int main()
{
    float n1;
    float soma = 0;

    printf("\nDigite um número ");
    scanf("%f", &n1);
    if (n1 < 0 || n1 > 1000)
    {
        printf("Número invalido");
    }
    else
    {
        int x = n1;
        while (x > 0)
        {
            soma = soma + n1;
            n1--;
            x--;
        }
        printf("Fatorial de Soma = %.1f", soma);
    }
}