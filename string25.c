#include <stdio.h>

int main()
{
    char produto[5][50], aux[] = "OK-";
    int x = 0, nu = 0;
    while (x < 5)
    {
        printf("Digite o nome do %d produto: \n", x + 1);
        setbuf(stdin, NULL);
        gets(produto[x]);
        x++;
    }
    printf("Digite um número: ");
    scanf("%d", &nu);
    if (nu < 1 || nu > 5)
    {
        nu = 0;
        printf("Número invalido");
    }
    else
    {
        nu--;
        x = 0;
        while (produto[nu][x] != '\0')
        {
            x++;
        }
        x--;
        produto[nu][x + 4] = '\0';
        while (x >= 0)
        {
            if (x >= 3)
            {
                produto[nu][x + 3] = produto[nu][x];
            }
            else
            {
                produto[nu][x + 3] = produto[nu][x];
                produto[nu][x] = aux[x];
            }
            x--;
        }
        x = 0;
        while (x < 5)
        {
            printf("%s\n", produto[x]);
            x++;
        }
    }
}