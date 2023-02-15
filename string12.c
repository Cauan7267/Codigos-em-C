#include<stdio.h>

int main(){
    char palavra[50];
    int x = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    while (palavra[x] != '\0')
    {
        palavra[x]++;
        x++;
    }
    printf("%s", palavra);
}
