#include <stdio.h>

int main()
{
    int x[10] = {34, 22, 45, 12, 11, 55, 29, 20, 80, 92};
    int z[10] = {0};
    int y = 0;
    while (y <= 9)
    {
        if (x[y] % 2 == 1)
        {
            z[y] = x[y];
        }
        y++;
    }
    y = 0;
    while (y <= 9)
    {
        if (z[y] != 0)
        {
            printf("%d ", z[y]);
        }
        y++;
    }
}