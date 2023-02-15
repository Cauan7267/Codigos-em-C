#include <stdio.h>

int main()
{
    char nome[50];
    int x = 0;
    printf("Digite aqui seu nome completo: ");
    setbuf(stdin, NULL);
    gets(nome);

    while (nome[x] != '\0')
    {
        if (x == 0 && nome[x] > 96 && nome[x] < 123)
        {
            nome[x] -= 32;
        }
        else if (nome[x- 1] == 32 && nome[x] > 96 && nome[x] < 123)
        {
            nome[x] -= 32;
        }
        else if (nome[x] > 64 && nome[x] < 91 && nome[x - 1] != 32)
        {
            nome[x] += 32;
        }
        x++;
    }
    printf("%s", nome);
}