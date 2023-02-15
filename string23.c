#include <stdio.h>

int main(){
    char palavra[50] = "", aux[50];
    int x = 0, cont = 0, n = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);

    while (palavra[x] != '\0')
    {
        cont++;
        x++;
    }
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n > cont || n < 0)
    {
        n = 0;
        printf("Número invalido");
    }
    x = 0;
    n++;
    while (palavra[n] != '\0')
    {
        aux[x] = palavra[n];
        n++;
        x++;
    }
    printf("%s", aux);
}