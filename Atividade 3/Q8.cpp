#include <stdio.h>

int main(void)
{
    int codP, codS, codB, calP, calS, calB, calTotal;

    printf("\n Cardápio:");
    printf("\n Pratos principais: \t");
    printf("\n 1 - Vegetariano - 180 cal \t");
    printf("\n 2 - Peixe - 230 cal \t");
    printf("\n 3 - Frango - 250 cal \t");
    printf("\n 4 - Carne - 350 cal \t");

    printf("\n Sobremesas: \t");
    printf("\n 1 - Abacaxi - 75 cal \t");
    printf("\n 2 - Sorvete Diet - 110 cal \t");
    printf("\n 3 - Mouse Diet - 170 cal \t");
    printf("\n 4 - Mouse Chocolate - 200 cal \t");

    printf("\n Bebidas: \t");
    printf("\n 1- Chá - 20 cal \t");
    printf("\n 2- Suco Laranja - 70 cal \t");
    printf("\n 3 - Suco Melão - 100 cal \t");
    printf("\n 4 - Refrigerante Diet - 65 cal \t");

    printf("\n Digite o prato desejado: \t");
    scanf("%d", &codP);
    switch (codP)
    {
    case 1:
        calP = 180;
        break;

    case 2:
        calP = 230;
        break;

    case 3:
        calP = 250;
        break;

    case 4:
        calP = 350;
        break;

    default:
        printf("\n Inválido");
        break;
    }

    printf("\n Digite a sobremesa desejada: \t");
    scanf("%d", &codS);
    switch (codS)
    {
    case 1:
        calP = 75;
        break;

    case 2:
        calP = 110;
        break;

    case 3:
        calP = 170;
        break;

    case 4:
        calP = 200;
        break;

    default:
        printf("\n Inválido");
        break;
    }

    printf("\n Digite a bebida desejada: \t");
    scanf("%d", &codB);
    switch (codB)
    {
    case 1:
        calP = 20;
        break;

    case 2:
        calP = 70;
        break;

    case 3:
        calP = 100;
        break;

    case 4:
        calP = 65;
        break;

    default:
        printf("\n Inválido");
        break;
    }

    calTotal = calB + calP + calS;
    printf("\n A quantidade total de calorias é: %d", calTotal);
}