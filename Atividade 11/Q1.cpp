#include <stdio.h>

void maiorMenor(int &a, int &b)
{
    if (b > a)
    {
        int x = a;
        a = b;
        b = x;
    }
}

int main()
{
    int valor1, valor2;

    printf("\n Digite o primeiro e o segundo valor respectivamente: ");
    scanf("%d %d", &valor1, &valor2);

    maiorMenor(valor1, valor2);

    printf("\n Maior valor eh %d e o menor valor eh %d", valor1, valor2);
}