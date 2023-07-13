#include <stdio.h>
#include <math.h>

main()
{
    double taxa = 0;
    double valor, precoFinal;
    int estado;

    printf("\n Digite o preço do produto: ");
    scanf("%lf", &valor);
    fflush(stdin);
    printf("\nDigite o número do estado: \n1-MG\n2-SP\n3-DF\n4-RJ\n");
    scanf("%d", &estado);

    switch (estado)
    {
    case 1:
        taxa = 0.02;
        precoFinal = valor + (valor + taxa);
        printf("O valor do produto em MG é: R$ %2lf", precoFinal);
        break;

    case 2:
        taxa = 0.01;
        precoFinal = valor + (valor + taxa);
        printf("O valor do produto em SP é: R$ %2lf", precoFinal);
        break;

    case 3:
        taxa = 0.04;
        precoFinal = valor + (valor + taxa);
        printf("O valor do produto no DF é: R$ %2lf", precoFinal);
        break;

    case 4:
        taxa = 0.03;
        precoFinal = valor + (valor + taxa);
        printf("O valor do produto no RJ é: R$ %2lf", precoFinal);
        break;

    default:
        printf("Estado inválido");
    }
}
