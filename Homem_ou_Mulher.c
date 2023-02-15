#include<stdio.h>

int main(){

    int sexo;

    printf("Digite aqui o número 0 ou 1");
    scanf("%d", &sexo);

    if (sexo == 0)
    {
        printf("Mulher");
    } else if (sexo == 1)
    {
        printf("Homem");
    } else
    {
        printf("Desconhecido");
    }
    
    
    
    

}