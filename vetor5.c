#include <stdio.h>

int main()
{
    int x[10] = {9, 11, 21, 14, 44, 25, 78, 16, 90, 1};
    int y = 0;
    while (y <= 9)
    {
        if (x[y] > 10 && x[y] < 20)
        {
            printf("%d ", x[y]);
        }
        y++;
    }
}