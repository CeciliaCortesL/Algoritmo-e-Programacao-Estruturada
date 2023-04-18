#include <stdio.h>

int main(void)
{

    int numeros[10];
    int soma = 0, i;

    for (i = 0; i < 10; i++)
    {
        printf("\n Digite o %d numero:", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("\n A media dos numeros eh: %.2f", (float)soma / 10);
}