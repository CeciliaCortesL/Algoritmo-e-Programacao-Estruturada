#include <stdio.h>

int main()
{
    int vetor[5];
    int maior = 0;
    int menor = 0;
    int soma = 0, media;

    printf("\n Digite 5 numeros: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    media = soma / 5;

    printf("\n Valores lidos: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n O maior elemento eh: %d, o menor eh: %d e a media eh: %d ", maior, menor, media);
}