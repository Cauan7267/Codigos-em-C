#include<stdio.h>

int main(){
    char nome[50];
    int cont = 0, x = 0;
    printf("Digite o seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);
    while (nome[x] != '\0')
    {
        cont++;
        x++;
    }
    printf("Total de %d carateres", cont);
}