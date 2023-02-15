#include<stdio.h>

int main(){
float nota[11];
int x = 1; 
while (x <= 10)
{
    printf("\nDigite a %d nota: ", x);
    scanf("%f", &nota[x]);
    x++;
}
int y = 1;
while (y <= 10)
 {
    if (y < 10)
    {
        printf("Nota %d = %.2f, ",y ,nota[y]);
    } else
    {
        printf("Nota %d = %.2f.",y ,nota[y]);
    }
    y++;
 }
}