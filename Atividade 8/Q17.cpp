#include <stdio.h>

int main(void)
{
    int vetor[10], i;

    printf("\n Digite 10 valores:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("\n Valores do vetor apos atribuir 0 para os elementos negativos:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}
