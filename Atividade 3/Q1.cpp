#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float quadrado, raiz, numero;

    printf("\n Digite o número: ");
    scanf("%f", &numero);

    if (numero > 0)
    {
        quadrado = sqrt(numero);
        raiz = pow(numero, 2);
        printf("\n O quadaro do número é: %2.f e a raiz quadrada é: %2.f", quadrado, raiz);
    }

    else
    {
        printf("\n Número inválido");
    }
}
