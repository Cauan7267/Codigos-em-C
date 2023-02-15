#include<stdio.h>

int main(){

    int n1, n2, x;

    printf("Digite um número ");
    scanf("%d", &n1);

    for (n2 = 1; n2 <= 10; n2++)
    {
        x = n1 * n2;

        printf("\n%d * %d = %d", n1, n2, x); 
    }
}