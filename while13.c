#include<stdio.h>

int main(){
    int x = 0, y = 1;
    printf("Digite um número ");
    scanf("%d", &x);
    while (y <= 10)
    {
        printf("\n%d x %d = %d", x, y, x*y);
        y++;
    }
}