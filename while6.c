#include<stdio.h>
int main(){
    
    int x = 1;
    while (x <= 40)
    {
        int y=4;
        while (y >= 0)
        {
            printf("\nOlá %d %d", x, y);
            y--;
        }
        x++;
    }
}
