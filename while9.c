#include<stdio.h>
int main(){
    
    int x = 1;
    float y = 0, soma = 0;
    while (x >= 0)
    {
        printf("\nDigite a %d nota ", x);
        scanf("%f", &y);
        if (y >= 0)
        {
            soma = soma + y;        
        x++;
        } else
        {
            x--;
            break;
        }
        
    }
    printf("Média = %.2f", soma/x);
}