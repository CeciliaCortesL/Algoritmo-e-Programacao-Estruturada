#include <stdio.h>

int main()
{
    float custo, frete, despesas, valorVenda, calculo;

    printf("\n Digite o custo da mercadoria, o valor do frete e despesas eventuais respectivamente: ");
    scanf("%f %f %f", &custo, &frete, &despesas);
    printf("\n Digite o valor de venda da mercadoria: ");
    scanf("%f", &valorVenda);

    calculo = ((valorVenda - (custo + frete + despesas)) / valorVenda) * 100;

    printf("\n A percentagem de lucro da mercadoria é: %8.2f %", calculo);
}