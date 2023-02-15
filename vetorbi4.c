#include <stdio.h>

int main()
{
    int vetor[3][3];
    int x = 0, y = 0;
    while (x < 3)
    {
        while (y < 3)
        {
            printf("Digite um número: ");
            scanf("%d", &vetor[x][y]);
            y++;
        }
        y = 0;
        x++;
    }
    x = 0, y = 0;
    while (x < 3)
    {
        printf("[");
        while (y < 3)
        {
            if (x == y)
            {
                vetor[x][y] = 0;
            }
            else if (x == 0 && y == 2 || x == 2 && y == 0)
            {
                vetor[x][y] = 0;
            }
            if (y == 2)
            {
                printf("%d", vetor[x][y]);
            }
            else
            {
                printf("%d,", vetor[x][y]);
            }
            y++;
        }
        printf("]\n");
        y = 0;
        x++;
    }