#include <stdio.h>

int main()
{
    char vet[] = "WPDFDPOTFHVJV";
    int x = 0;

    while (vet[x] != '\0')
    {
        vet[x] -= 1;
        x++;
    }
    printf("%s", vet);
    x++;
}
