#include<stdio.h>

int main(){
    float n1;
    float fat = 1;

    printf("\nDigite o número");
    scanf("%f", &n1);

    if (n1 < 0 || n1 > 50)
    {
        printf("Número invalido");
    } else
    {
    for (int x = n1; x != 0; x--)
    {
        fat = fat * n1;
        n1--;
    }
    printf("Fatorial = %.1f", fat);
    }
}