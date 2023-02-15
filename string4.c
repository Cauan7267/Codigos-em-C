#include<stdio.h>
int main(){
    char vet[20];
    char vet2[20];
    int x = 0, cont = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(vet);

    printf("Digite uma segunda palavra: ");
    setbuf(stdin, NULL);
    gets(vet2);
    while (vet[x] != '\0')
    {
        int y = 0;
        if (vet[x] == vet2[y])
        {
            while (vet2[y] != '\0')
            {
                if (vet[x] == vet2[y])
                {
                    x++;
                    y++;
                    cont++;
                }
                else
                {
                    y = 0;
                    cont = 0;
                    break;
                }
            }
        }
        else
        {
            x++;
        }    
    }  
    if (cont > 0)
    {
        printf("\nExiste");
    }
    else
    {
        printf("\nNão existe");
    }
    
    
}