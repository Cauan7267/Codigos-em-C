#include<stdio.h>

int main(){

    int x;
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float media;

    for (x = 1; x <= 1; x++)
    {
        printf("\nDigite a 1 nota");
        scanf("%f", &n1);

        printf("\nDigite a 2 nota");
        scanf("%f", &n2);

        printf("\nDigite a 3 nota");
        scanf("%f", &n3);

        printf("\nDigite a 4 nota");
        scanf("%f", &n4);

        printf("\nDigite a 5 nota");
        scanf("%f", &n5);

        printf("\nDigite a 6 nota");
        scanf("%f", &n6);

        printf("\nDigite a 7 nota");
        scanf("%f", &n7);

        printf("\nDigite a 8 nota");
        scanf("%f", &n8);

        printf("\nDigite a 9 nota");
        scanf("%f", &n9);

        printf("\nDigite a 10 nota");
        scanf("%f", &n10);

        media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
    
    printf("Media %.2f", media);
    }
}