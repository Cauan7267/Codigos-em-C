#include<stdio.h>

int main(){
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
        invertida[y] = palavra[x];
        x--;
        y++;
    }
    printf("%s", invertida);
}