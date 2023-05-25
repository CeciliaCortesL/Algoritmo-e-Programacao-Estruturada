#include <stdio.h>

int soma(int &a, int &b)
{
    a *= 2;
    b *= 2;
    return a + b;
}

int main()
{
    int x, y;

    printf("\n Digite o primeiro e o segundo valor respectivamente: ");
    scanf("%d %d", &x, &y);

    int resultado = soma(x, y);

    printf("\n A soma eh: %d \n Primeiro valor eh %d \n Segundo valor eh %d", resultado, x, y);
}