#include <stdio.h>
float soma(float a)
{
    float resultado;
    resultado = a + 20;
    return (resultado);
}

int main()
{
    float x = 0, resultado = 0;
    printf("Digite aqui um número: ");
    scanf("%f", &x);

    resultado = soma(x);
    printf("Resultado = %f", resultado);
}

