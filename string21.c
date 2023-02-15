#include <stdio.h>

int main()
{
    char nome[50], nomes[5][50];
    int x = 0, y = 0, z = 0, enc = 0;
    while (x >= 0)
    {
        printf("Digite o %d nome: ", x + 1);
        setbuf(stdin, NULL);
        gets(nome);
        y = 0;
        z = 0;
        while (nome[y] != '\0')
        {
            if (nome[y] != 'a' && nome[y] != 'e' && nome[y] != 'i' && nome[y] != 'o' && nome[y] != 'u' &&
                nome[y] != 'A' && nome[y] != 'E' && nome[y] != 'I' && nome[y] != 'O' && nome[y] != 'U')
            {
                nomes[x][z] = nome[y];
                if (nome[y] > 96 && nome[x] < 123)
                {
                    nomes[x][y] -= 32;
                }
                z++;
            }
            y++;
        }
        nomes[x][z] = '\0';
        printf("Aperte 0 se não houverem mais nomes: \n");
        scanf("%d", &enc);
        if (enc == 0)
        {
            break;
        }
        x++;
    }
    y = 0;
    while (y <= x)
    {
        printf("%s\n", nomes[y]);
        y++;
    }
}