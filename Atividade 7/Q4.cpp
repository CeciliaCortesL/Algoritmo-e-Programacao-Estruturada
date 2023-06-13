#include <stdio.h>
main()
{
    int vetor[8];
    int x, y, soma = 0;

    for (int indice = 0; indice < 8; indice++)
    {
        printf("Digite o valor:");
        scanf("%d", &vetor[indice]);
    }
    printf("Digite os indices que deseja visualizar: ");
    scanf("%d %d", &x, &y);

    if ((x < 0 || x > 7) && (y < 0 || y > 7))
    {
        printf("\n Valores inválidos");
    }
    for (int indice = 0; indice < 8; indice++)
    {
        if (x == indice)
        {
            printf("%d\n", vetor[indice]);
            soma += vetor[indice];
        }
        if (y == indice)
        {
            printf("%d\n", vetor[indice]);
            soma += vetor[indice];
        }
        printf("%d", soma);
    }
}