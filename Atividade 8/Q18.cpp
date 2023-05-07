#include <stdio.h>

int main(void)
{
    int vetor[10], x, i, contador = 0;

    printf("\n Digite 10 valores: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("\n Digite um numero inteiro x: ");
    scanf("%d", &x);

    printf("\n Multiplos de %d no vetor: ", x);
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % x == 0)
        {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if (contador == 0)
    {
        printf("\n Nao ha multiplos de %d no vetor", x);
    }
    else
    {
        printf("\nTotal de multiplos de %d no vetor: %d\n", x, contador);
    }
}
