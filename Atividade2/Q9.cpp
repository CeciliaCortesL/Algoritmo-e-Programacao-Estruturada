#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    int calculo;

    printf("\n Escreva a primeira, segunda e terceira nota respectivamente: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calculo = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);

    printf("\n A média final é: %d", calculo);
}