#include <stdio.h>

main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = A[0] + A[1] + A[5];
    printf("%d", soma);

    A[4] = 100;

    for (int indice = 0; indice < 6; indice++)
    {
        printf("%d\n", A[indice]);
    }
}