#include <stdio.h>
#include <math.h>

main()
{
    int ddd;
    printf("\nDigite o DDD da cidade: ");
    scanf("%d");

    switch (ddd)
    {
    case 61:
        printf("\n Cidade de Brasília");
        break;

    case 71:
        printf("\n Cidade de Salvador");
        break;

    case 11:
        printf("\n Cidade de São Paulo");
        break;

    case 21:
        printf("\n Cidade do Rio de Janeiro");
        break;

    case 32:
        printf("\n Cidade de Juiz de Fora");
        break;

    case 19:
        printf("\n Cidade de Campinas");
        break;

    case 27:
        printf("\n Cidade de Vitória");
        break;

    case 31:
        printf("\n Cidade de Belo Horizonte");
        break;

    default:
        printf("\n Cidade sem identificação");
    }
}