#include<stdio.h>

int main()
{
    int numeros[12] = {23, 22, 54, 22, 67, 22, 41, 22, 80, 22, 54, 22};
    int vetor[12] = {0};
    int contador = 0;
    int aux = 0;
    int x = 0;
    while (x < 12)
    {
        int y = 0;
        while (y < 12)
        {
            if (numeros[x] == numeros[y])
            {
                contador++;
            }
            if (numeros[x] == numeros[y] && contador > 1)
            {
                numeros[y] = 0;
            }
            y++;
        }
        if (numeros[x] != 0)
        {
            vetor[aux] = numeros[x];
            aux++;
        }
        contador = 0;
        x++;
    }
    x = 0;
    while (vetor[x] != 0)
    {
        printf("%3d", vetor[x]);
        x++;
    }
}