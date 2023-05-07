#include <stdio.h>

int main(void)
{
    float vetor1[5], vetor2[5], produto_escalar = 0.0;

    printf("\n Entre com os valores do primeiro vetor: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vetor1[i]);
    }

    printf("\n Entre com os valores do segundo vetor: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("\n Vetor 1: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");

    printf("\n Vetor 2: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    printf("Produto Escalar: %.2f\n", produto_escalar);
}
