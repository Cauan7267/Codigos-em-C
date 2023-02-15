#include <stdio.h>

int main()
{
    int vetor[] = {34, 22, 34, 98, 74, 34, 41, 12, 56, 34, 78};
    int x = 0, rep = 0, y = 0;;
    while (vetor[x] != 0)
    {
        if (vetor[x] == vetor[y])
        {
        rep++;
        }
        x++;
    }
    printf("%d números repetidos", rep);
}