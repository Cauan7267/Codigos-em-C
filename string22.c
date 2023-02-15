#include <stdio.h>

int main()
{
    char nome[50], Altnome[50];
    int x = 0, y = 0, z = 0, n = 0, enc = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(nome);

    while (x >= 0)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        n--;
        while (nome[y] != '\0')
        {
            if (nome[y] != nome[n])
            {
                Altnome[z] = nome[y];
                z++;
            }
            y++;
        }
        Altnome[z] = '\0';
        y = 0;
        while (Altnome[y] != '\0')
        {
            nome[y] = Altnome[y];
            y++;
        }
        nome[y] = '\0';
        y = 0;
        z = 0;
        printf("%s\n", Altnome);
        if (enc == 0)
        {
            break;
        }
    }
}