#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("\n Escreva a base do retangulo: ");
    scanf("%f", &base);
    printf("\n Base: %f", base);

    printf("\n Agora escreva a altura: ");
    scanf("%f", &altura);
    printf("\n Altura: %f", altura);

    area = base * altura;

    printf("\n A area do retângulo e: %f", area);
}