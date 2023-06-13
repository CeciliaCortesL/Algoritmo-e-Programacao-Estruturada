#include <stdio.h>

int main()
{

    int vetor[10];
    int maior = 0, posicao = 0;

    printf("\n Digite 10 numeros: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", vetor[i]);
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("\n O maior numero eh: %d e sua posicao eh: %d", maior, posicao);
}