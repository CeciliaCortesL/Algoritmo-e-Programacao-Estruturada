#include <stdio.h>

main()
{

    float vetor[15];
    float soma = 0, media;

    printf("\n Digite as 15 notas: ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 15;
    printf("\n A media geral eh: %.2f", media);
}