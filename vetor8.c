#include <stdio.h>

int main()
{
    int vetor[] = {22, 41, 12, 56, 34, 78};
    int x = 0;
    while (x < 5)
    {
        x++;
    }
    while (x >= 0)
    {
        printf("%d, ", vetor[x]);
        x--;
    }
}