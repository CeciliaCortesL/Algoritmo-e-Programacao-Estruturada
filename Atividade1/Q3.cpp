#include <stdio.h>

int main()
{
    float largura, altura, rendimento, litros;

    printf("\n Digite a largura e a altura da parede respectivamente: ");
    scanf("%f %f", &largura, &altura);

    rendimento = (largura * altura) * 0.3;
    litros = (rendimento / 2) + 0.5;

    printf("\n Serão necessárias %8.2f latas. ", litros);
}