#include<stdio.h>
int main(){
    
    int x = 1;
    while (x <= 100)
    {
        int y = 1;
        while (y <= 100)
        {
            int z = 1;
            while (z <= 100)
            {
                printf("\nOlá %d %d %d", x, y, z);
                z++;
            }
            y++;
        }
        x++;
    }
}