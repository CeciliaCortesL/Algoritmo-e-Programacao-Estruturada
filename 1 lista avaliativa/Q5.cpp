#include <stdio.h>

int main(void)
{

    int num, divisor = 0, i, resultado;

    printf("\n Digite um numero: ");
    scanf("%d", &num);

    printf("\n Os divisores de %d sao:", num);
    for (i = 1; i <= num; i++)
    {
        divisor += 1;
        resultado = num % divisor;

        if (resultado == 0)
        {
            printf("\n Os divisores de %d sao: %d", num, divisor);
        }
    }
}