int main(){
    float n1;
    float soma;

    printf("Digite um número");
    scanf("%f", &n1);

    if (n1 < 0 || n1 > 1000)
    {
        printf("Número invalido");
    } else
    {
    for (int x = n1; x > 0; x--)
    {
        soma = soma + n1;
        n1--;
    }
    printf("Fatorial = %.2f", soma);
    }
}