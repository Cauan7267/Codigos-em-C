#include <stdio.h>
int main()
{
    int x = 1;
    float n1 = 0, n2 = 0, n3 = 10, soma = 0;
    while (x > 0)
    {
        printf("\nDigite a %d nota: ", x);
        scanf("%f", &n1);
        soma += n1;
        if (n1 < 0)
        {
            x--;
            soma -= n1;
            break;
        }
        else if (x == 1)
        {
            n2 = n1;
            n3 = n1;
        }
        else if (n1 > n2)
        {
            n2 = n1;
        }
        else if (n3 > n1)
        {
            n3 = n1;
        }
        x++;
    }
    printf("%.2f é a nota maior, %.2f é a nota menor e %.2f é a média", n2, n3, soma / x);
}