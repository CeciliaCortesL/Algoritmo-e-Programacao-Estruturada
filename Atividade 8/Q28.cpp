#include <stdio.h>

int main(void)
{
    int v[10], v1[10], v2[10], i, j = 0, k = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n Digite o %do número inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            v2[k] = v[i];
            k++;
        }
        else
        {
            v1[j] = v[i];
            j++;
        }
    }

    printf("\n Elementos utilizados em v1: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("\n Elementos utilizados em v2: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");
}
