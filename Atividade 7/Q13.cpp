#include <stdio.h>

int main()
{
    int vetor[5];
    int maior = 0, menor = 0, posicaoMenor = 0, posicaoMaior = 0;

    printf("\n Digite 5 numeros: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicaoMaior = i;
        }
        if (vetor[i] < menor)
        {
            maior = vetor[i];
            posicaoMenor = i;
        }
    }
    printf("\n A posicao do maior eh: %d e a posicao do menor eh: %d", posicaoMaior, posicaoMenor);
}