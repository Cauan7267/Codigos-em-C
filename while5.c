#include<stdio.h>
int main(){
    
    int x = 1;
    while (x <= 40)
    {
        int y=1;
        while (y <= 3)
        {
            printf("\nOlá %d %d", x, y);
            y++;
        }
        x++;
    }
}
