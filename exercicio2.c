#include<stdio.h>

int main(){
    int idade;
    int ano;
    float peso;
    printf("Digite a sua idade");
    scanf("%d", &idade);

    printf("Digite o seu ano de nascimento");
    scanf("%d", &ano);

    printf("Digite o seu peso");
    scanf("%f", &peso);

    printf("Sua idade é %d anos, seu ano de nascimento é %d e seu peso é %.2f Kg" , idade, ano, peso);
} 