#include<stdio.h>

int main(){

    int x;
    int y;
    int z;

    for (x = 1; x <= 100; x++)
    {

        for (y = 1; y <= 100; y++)
        {
            for (z = 1; z <= 100; z++)
            {
            printf("\nOlá %d %d %d", x, y, z);
            }
        } 
    }
}