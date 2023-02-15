#include<stdio.h>

int main(){

    int nasc;
    int atual;
    int idade;

    printf("Coloque o seu ano de nascimento");
    scanf("%d", &nasc);

    printf("Coloque o ano atual");
    scanf("%d", &atual);

    idade = atual - nasc;

    
    if (idade > 0 && idade <= 11)
    {
        printf("O usúario tem %d anos e é criança", idade);
    } else if (idade > 11 && idade < 18)
    {
        printf("O usúario tem %d anos e é adolescente", idade);
    } else if (idade >= 18 && idade < 72)
    {
        printf("O usúario tem %d anos e é adulto", idade);
    } else if (idade >= 71)
    {
        printf("O usúario tem %d anos e é velho", idade);
    } else if (idade == 0)
    {
        printf("O usúario nasceu esse ano", idade);
    } else if (idade < 0)
    {
        printf("O usúario ainda não nasceu");
    }
    
    
}