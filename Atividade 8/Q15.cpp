#include <stdio.h>

int main(void)
{
    int vetor[20];
    int i, j, k, n;

    printf("\n Digite 20 valores: ");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    n = 20;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (vetor[j] == vetor[i])
            {
                for (k = j; k < n; k++)
                {
                    vetor[k] = vetor[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("\n Elementos do vetor sem elementos repetidos:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
}
