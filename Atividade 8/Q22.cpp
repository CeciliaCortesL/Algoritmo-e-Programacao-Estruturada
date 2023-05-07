#include <stdio.h>

int main(void)
{
    int A[10], B[10], C[20], i, j;

    printf("\n Digite os valores do vetor A: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\n Digite os valores do vetor B: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &B[i]);
    }

    j = 0;
    for (i = 0; i < 10; i++)
    {
        C[j] = A[i];
        C[j + 1] = B[i];
        j += 2;
    }

    printf("\n Vetor C: ");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", C[i]);
    }
}
