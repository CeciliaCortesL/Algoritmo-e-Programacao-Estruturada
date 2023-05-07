#include <stdio.h>
#include <math.h>

int main(void)
{
    int v[10], i;
    float media = 0, variancia = 0, desvio_padrao;

    printf("\n Digite os elementos do vetor: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        media += v[i];
    }

    media = media / 10.0;

    for (i = 0; i < 10; i++)
    {
        variancia += pow((v[i] - media), 2);
    }

    variancia = variancia / 9.0;

    desvio_padrao = sqrt(variancia);

    printf("Media: %.2f\n Variancia: %.2f\n Desvio Padrao: %.2f ", media, variancia, desvio_padrao);
}
