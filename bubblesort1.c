#include <stdio.h>

int main()
{
    int numeros[12] = {23, 12, 54, 22, 67, 92, 41, 11, 80, 99, 54, 15};
    int x = 0, z = 0;
    while (x < 12)
    {
        int y = 0;
        while (y < 11)
        {
            if (numeros[y] > numeros[y + 1])
            {
                z = numeros[y];
                numeros[y] = numeros[y + 1];
                numeros[y + 1] = z;
            }
            y++;
        }
        x++;
    }
    x = 0;
    while (x < 12)
    {
        printf("%3d", numeros[x]);
        x++;
    }
}