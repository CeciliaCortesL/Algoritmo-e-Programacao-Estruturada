#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    float raio, calculo;

    printf("\n Digite o raio do círculo: ");
    scanf("%f", &raio);

    calculo = M_PI * pow(raio, 2);

    printf("\n A área do círculo é: %8.3f ", calculo);
}