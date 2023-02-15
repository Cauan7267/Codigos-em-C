#include <stdio.h>

int main()
{
    float nota[6][5], soma = 0;
    int x = 1;
    
    while (x < 6)
    {
        int y = 1;
        while (y < 5)
        {
            printf("\nDigite a %d do %d aluno: ", y, x);
            scanf("%f", &nota[x][y]);
            soma += nota[x][y];
            y++;
        }
        x++;
    }
    printf("\nSoma das notas = %.2f", soma);
}