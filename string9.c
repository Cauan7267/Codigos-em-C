#include<stdio.h>

int main(){
    char nome[50], letra[2];
    int cont = 0, cont2 = 0, x = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Digite uma letra: ");
    setbuf(stdin, NULL);
    gets(letra);
    while (nome[x] != '\0')
    {
        cont++;
        if (nome[x] == letra[0])
        {
            cont2++;
        }
        x++;
    }
    if (cont == cont2)
    {
        printf("Todas as letras são %s", letra);
    }
    else if (cont2 == 0)
    {
        printf("Não possui letra %s", letra);
    }
    else
    {
        printf("A palavra possui %d letras %s", cont2, letra);
    }
}