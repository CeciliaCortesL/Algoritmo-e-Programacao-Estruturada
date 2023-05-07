#include <stdio.h>

int main(void)
{
    int A[10], B[10], C[10], i;

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

    printf("\n Vetor C: ");
    for (i = 0; i < 10; i++)
    {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }
}
