#include <stdio.h>

int main()
{
    char n = 0, nome[200], aux[200], nome2[200];
    int x = 0, y = 0, z = 0, cont = 0;
    printf("Digite aqui o seu nome completo: \n");
    setbuf(stdin, NULL);
    gets(nome);
    while (nome[x] != '\0')
    {
        if (x == 2)
        {
            n = nome[x];
        }
        if (nome[x] == 32)
        {
            cont = x;
            cont++;
        }
        x++;
    }
    while (nome[cont] != '\0')
    {
        aux[y] = nome[cont];
        cont++;
        y++;
    }
    aux[y] = '\0';
    x = 0;
    y = 0;
    while (nome[x] != '\0')
    {
        if (nome[x] == n || nome[x] == n + 32 || nome[x] == n - 32)
        {
            while (aux[y] != '\0')
            {
                nome2[z] = aux[y];
                z++;
                y++;
            }
            y = 0;
        }
        else
        {
            nome2[z] = nome[x];
            z++;
        }
        x++;
    }
    nome2[z] = '\0';
    printf("%s\n", nome2);
}