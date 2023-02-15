#include<stdio.h>

int main()
{
    char nome[8];
    int x = 0;
    int cont = 0;
    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);
    while (nome[x + 1] != '\0')
    {
        if (nome[x] == 100 && nome[x + 1] == 111)
        {
            cont++;
        }
        else if (nome[x] == 68 && nome[x + 1] == 79)
        {
            cont++;
        }
        else if (nome[x] == 68 && nome[x + 1] == 111)
        {
            cont++;
        }
        else if (nome[x] == 100 && nome[x + 1] == 79)
        {
            cont++;
        }
        x++;
    }
    if (cont > 0)
    {
        printf("Existe");
    }
    else
    {
        printf("Não existe");
    }
}