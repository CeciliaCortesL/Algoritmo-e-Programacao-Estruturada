#include <stdio.h>

int main(void)
{
    int vetor1[10], vetor2[10], i, j = 0;

    printf("\n Digite 10 numeros inteiros no intervalo de 0 a 50: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
        if (vetor1[i] % 2 != 0)
        {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    printf("\n Vetor 1: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0)
        {
            printf("\n");
        }
    }

    printf("\n Vetor 2: \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0)
        {
            printf("\n");
        }
    }
}