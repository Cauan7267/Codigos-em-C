#include <stdio.h>

int main()
{
    char palavra[50];
    int x = 0, cont = 0, y = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    while (palavra[x] != '\0')
    {
        cont++;
        x++;
    }
    x--;
    while (x >= 0)
    {
        if (palavra[x] == palavra[y])
        {
            cont--;
        }
        x--;
        y++;
    }
    if (cont <= 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Não Palindrome\n");
    }
}