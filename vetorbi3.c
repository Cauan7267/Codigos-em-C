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
        while (y < 2)
        {
            printf("%d,", vetor[x][y]);
            y++;
        }
        printf("%d", vetor[x][y]);
        printf("]");
        y = 0;
        x++;
    }
}