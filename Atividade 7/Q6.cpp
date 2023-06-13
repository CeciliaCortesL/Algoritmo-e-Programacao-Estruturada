#include <stdio.h>

int main()
{
    int vetor[10];
    int maior = 0;
    int menor = 0;

    printf("\n Digite 10 numeros: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("\n O maior elemento é: %d e o menor é: %d", maior, menor);
}