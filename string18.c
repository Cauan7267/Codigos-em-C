#include <stdio.h>

int main()
{
    char nome[50], NVmaior[50], NVmenor[50], NCmaior[50], NCmenor[50];
    int x = 0, z = 0, enc = 0, maiorV = 0, menorV = 0, maiorC = 0, menorC = 0, contV = 0,
        contC = 0, vetV[50] = {}, vetC[50] = {};
    while (x >= 0)
    {
        int y = 0;
        printf("Digite o %d nome: ", x + 1);
        setbuf(stdin, NULL);
        gets(nome);
        setbuf(stdin, NULL);
        while (nome[y] != '\0')
        {
            if (nome[y] == 'A' || nome[y] == 'E' || nome[y] == 'I' || nome[y] == 'O' || nome[y] == 'U' ||
                nome[y] == 'a' || nome[y] == 'e' || nome[y] == 'i' || nome[y] == 'o' || nome[y] == 'u')
                contV++;
            else
                contC++;
            y++;
        }
        vetV[x] = contV;
        vetC[x] = contC;
        if (x == 0)
        {
            maiorV == vetV[x];
            z = 0;
            while (nome[z] != '\0')
            {
                NVmaior[z] = nome[z];
                NVmenor[z] = nome[z];
                NCmenor[z] = nome[z];
                NCmaior[z] = nome[z];
                z++;
            }
            menorV = vetV[x];
        }
        else if (vetV[x] >= maiorV)
        {
            maiorV = vetV[x];
            z = 0;
            while (nome[z] != '\0')
            {
                NVmaior[z] = nome[z];
                z++;
            }
        }
        else if (vetV[x] < menorV)
        {
            menorV = vetV[x];
            z = 0;
            while (nome[z] != '\0')
            {
                NVmenor[z] = nome[z];
                z++;
            }
        }
        if (x == 0)
        {
            z = 0;
            while (nome[z] != '\0')
            {
                NCmaior[z] = nome[z];
                NCmenor[z] = nome[z];
                NVmaior[z] = nome[z];
                NVmenor[z] = nome[z];
                z++;
            }
            NCmaior[z] = '\0';
            NCmenor[z] = '\0';
            NVmaior[z] = '\0';
            NVmenor[z] = c;

            maiorC = vetC[x];
            menorC = vetC[x];
        }
        else if (vetC[x] >= maiorC)
        {
            maiorC = vetC[x];
            z = 0;
            while (nome[z] != '\0')
            {
                NCmaior[z] = nome[z];
                z++;
            }
            NCmaior[z] = '\0';
        }
        else if (vetC[x] < menorC)
        {
            menorC = vetC[x];
            z = 0;
            while (nome[z] != '\0')
            {
                NCmenor[z] = nome[z];
                z++;
            }
            NCmenor[z] = '\0';
        }
        x++;
        printf("Aperte 0 se não houverem mais nomes: ");
        scanf("%d", &enc);
        if (enc == 0)
        {
            break;
        }
    }
    printf("O Nome com mais vogais é: %s", NVmaior);
    printf("O Nome com menos vogais é: %s",NVmenor);
    printf("O Nome com mais consoantes é: %s",NCmaior);
    printf("O Nome com menos consoantes é: %s\n",NCmenor);
}