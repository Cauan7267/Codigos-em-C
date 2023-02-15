#include<stdio.h>

int main(){
    char Ncompleto[50] = "Cauan Augusto Marioto", nome[50], sobrenome[50];
    int x = 0, y = 0;
    while (x >= 0)
    {
        if (Ncompleto[x] > 64 && Ncompleto[x] < 91)
        {
            nome[x] = Ncompleto[x];
        } 
        else if (Ncompleto[x] > 96 && Ncompleto[x] < 123)
        {
            nome[x] = Ncompleto[x];
        }
        else
        {
            nome[x] = '\0';
            break;
        }
        x++;
    }
    x++;
    while (Ncompleto[x] != '\0')
    {
        if (Ncompleto[x] > 64 && Ncompleto[x] < 91)
        {
            sobrenome[y] = Ncompleto[x];
        }
        else if (Ncompleto[x] > 96 && Ncompleto[x] < 123)
        {
            sobrenome[y] = Ncompleto[x];
        }
        else if (Ncompleto[x] == 32)
        {
            sobrenome[y] = Ncompleto[x];
        }
        x++;
        y++;
    }
    printf("Primeiro Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);
}