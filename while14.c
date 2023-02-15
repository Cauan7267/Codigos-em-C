#include <stdio.h>

int main()
{

    int x = 1;
    float n1 = 0, n2 = 0;

    while (x > 0)
    {
        printf("\nDigite a %d nota ", x);
        scanf("%f", &n1);

        if (n1 < 0)
        {
            break;
        }
        else if (n1 >= n2)
        {
            n2 = n1;
        }
        else if (n2 > n1)
        {
            n1 = n2;
        }
        x++;
    }
    printf("%.2f é a maior nota", n2);
}