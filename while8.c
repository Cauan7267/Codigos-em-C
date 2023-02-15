#include<stdio.h>
int main(){
    
    int x = 1;
    float y = 0, soma = 0;
    while (x <= 10)
    {
        printf("\nDigite a %d nota ", x);
        scanf("%f", &y);
        soma = soma + y;        
        x++;
    }
    printf("Média = %f", soma/10);
}