#include<stdio.h>

int main(){

    int x;
    int y;

    for (x = 1; x <= 40; x++)
    {

        for (y = 4; y >= 0; y--)
        {
            printf("\nOlá %d %d", x,  y);
        }
        
    }
}