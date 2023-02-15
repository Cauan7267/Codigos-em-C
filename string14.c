#include <stdio.h>
int main()
{
    char palavra[50], invertida[50];
    int x = 0, y = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    while (palavra[x] != '\0')
    {
        x++;
    }
    x--;
    while (x >= 0)
    {
        if (palavra[x] != 65 && palavra[x] != 69 && palavra[x] != 73 && palavra[x] != 79 && palavra[x] != 85 
        && palavra[x] != 97 && palavra[x] != 101 && palavra[x] != 105 && palavra[x] != 111 && palavra[x] != 117)
        {
            invertida[y] = palavra[x];
            x--;
            y++;
        }
        else
        {
            x--;
        }  
    }
    printf("%s", invertida);
}