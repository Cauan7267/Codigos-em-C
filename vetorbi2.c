#include <stdio.h>

int main()
{
    float nota[5][6];
    int x = 1;
    while (x < 5)
    {
        int y = 1;
        float soma = 0;
        while (y < 6)
        {
            printf("\nDigite a %d do %d aluno: ", y, x);
            scanf("%f", &nota[x][y]);
            soma += nota[x][y];
            y++;
        }
        printf("\nAluno %x, soma das notas = %.2f, média = %.2f",x , soma, soma / (y-1));
        x++;
    }
}