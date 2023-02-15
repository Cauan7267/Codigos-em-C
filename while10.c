#include<stdio.h>
int main(){
    
    int x = 1, y = 0;

    printf("Digite um número ");
    scanf("%d", &y);
    while (x <= y)
    {
        printf("\nNúmero %d", x);
        x++;
    }
}