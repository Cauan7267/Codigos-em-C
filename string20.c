#include<stdio.h>

int main(){
    char palavra[50];
    int x = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    while (palavra[x] != '\0')
    {
        if (palavra[x] > 64 && palavra[x] < 91)
        {
            palavra[x] += 32;
        }   
        x++;
    }
    printf("%s", palavra);
}