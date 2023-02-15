#include <stdio.h>

int main()
{
    char palavra[50];
    int x = 0, cont = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    printf("Digite uma numero: ");
    scanf("%d", &x);
    while (palavra[cont] != '\0')
    {
        cont++;
    }
    if (x >= 0 && x <= cont)
    {
        palavra[x] = 88;
        printf("%s", palavra);
    }
    else if (x < 0 || x > cont)
    {
        printf("Fora de range");
    }
}