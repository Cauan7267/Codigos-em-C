#include <stdio.h>

int main()
{
    int v[10] = {3, 7, 6, 4, 1, 9, 8, 2, 15, 5};
    int x = 0, soma = 0;
    while (x <= 9)
    {
        soma += v[x];
        x++;
    }
    printf("Soma = %d", soma);
}