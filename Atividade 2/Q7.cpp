#include <stdio.h>

int main()
{
    float custoc, custof;
    float distrib = 0.28;
    float impostos = 0.45;

    printf("\n Escreva o custo de fábrica do carro: ");
    scanf("%f", &custof);

    custoc = custof + (distrib * custof) + (impostos * custof);

    printf("\n O cuusto final do consumidor é: %f", custoc);
}