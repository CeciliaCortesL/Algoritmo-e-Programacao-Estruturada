#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    printf("\n Escreva o valor de a, b e c respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0)
    {
        delta = (b * b) - (4 * a * c);

        if (delta < 0)
        {
            printf("\n Não possui raízes reais");
        }
        else if (delta == 0)
        {
            raiz1 = (-b) / (2 * a);

            printf("\n Possui apenas uma raiz real %f", raiz1);
        }
        else
        {
            raiz1 = (-b - sqrt(delta)) / (2 * a);
            raiz2 = (-b + sqrt(delta)) / (2 * a);

            printf("\n Raiz 1 é: %f", raiz1);
            printf("\n Raiz 2 é: %f", raiz2);
        }
    }
    else
    {
        printf("\n a=0, não é uma equação do segundo grau ");
    }
}