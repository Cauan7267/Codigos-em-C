#include <stdio.h>
int main()
{
    int x = 0, vetor[14] = {1,54,29,97,32,11,54,59,18,36,66,98,82,51};
    float maior = 0, menor = 0, soma = 0;
    while (x < 14)
    {
        soma += vetor[x];
        if (x == 0)
        {
            maior = vetor[x];
            menor = vetor[x];
        }
        else if (vetor[x] > maior)
        {
             maior = vetor[x];
        }
        else if (menor > vetor[x])
        {
            menor = vetor[x];
        }
        x++;
    }
    printf("%.2f é a nota maior, %.2f é a nota menor e %.2f é a média", maior, menor, soma / x);
}