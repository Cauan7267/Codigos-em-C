#include <stdio.h>

int main()
{
    int vetor[] = {13, 21, 52, 19, 99, 11, 17};
    int x = 0, idade = 0;
    while (vetor[x] != 0)
    {
        if (vetor[x] >= 18)
        {
            idade++;
        }
        else
        {
            idade--;
        }
        x++;
    }
    if (idade > 0)
    {
        printf("A maioria pode dirigir");
    }
    else
    {
        printf("A maioria não pode dirigir");
    }
}