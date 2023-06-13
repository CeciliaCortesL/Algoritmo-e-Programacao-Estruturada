#include <stdio.h>

main()
{

    int vetor[6];

    printf("\n Digite 6 numeros: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("\n Vetor na ordem inversa: ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
}