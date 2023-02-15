#include<stdio.h>
int main(){
    
    int x = 0;

    printf("Digite um número ");
    scanf("%d", &x);
    while (x >= 0 )
    {
        printf("\nNúmero %d", x);
        x--;
    }
}