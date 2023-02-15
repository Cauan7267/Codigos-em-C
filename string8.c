#include<stdio.h>

int main(){
    char nome[50];
    int cont = 0, cont2 = 0, x = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(nome);
    while (nome[x] != '\0')
    {
        cont++;
        if (nome[x] == 79 || nome[x] == 111)
        {
            cont2++;
        }
        x++;
    }
    if (cont == cont2)
    {
        printf("Todas as letras são O");
    }
    else if (cont2 == 0)
    {
        printf("Não possui letra O");
    }
    else
    {
        printf("A palavra possui %d letras O", cont2);
    }
}