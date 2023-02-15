#include<stdio.h>

int main(){

    int x;
    float n1=0, n2=0;

    for (x = 1; x <= 10; x++)
    {
        printf("\nDigite a %d nota ", x);
        scanf("%f", &n1);

        if (n1 >= n2)
        {
            n2 = n1;
        } else if (n2 > n1)
        {
            n1 = n2;
        }
    }
    printf("%.2f é a maior nota", n2);
}
