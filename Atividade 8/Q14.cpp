#include <stdio.h>

int main(void)
{

    int vetor[10], i, j;

    printf("\n Digite 10 valores: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("\n Valores iguais no vetor: ");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("%d", vetor[i]);
            }
        }
    }
}
