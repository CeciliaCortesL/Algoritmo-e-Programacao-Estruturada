#include <stdio.h>

int main(void)
{

    int cod, qtd;
    float valorPagamento;

    printf("\n\t Cardapio:");
    printf("\n100 - Cachorro Quente - R$ 10.10");
    printf("\n101 - Bauru Simples - R$ 8.30");
    printf("\n102 - Bauru com ovo - R$ 8.50");
    printf("\n103 - Hamburguer - R$ 12,50");
    printf("\n104 - Cheeseburguer - R$ 13,25");

    printf("\n Digite o item desejado: ");
    scanf("%d", &cod);

    switch (cod)
    {

    case 100:
        printf("\n Quantos itens deseja pedir? ");
        scanf("%d", &qtd);
        valorPagamento = qtd * 10.10;
        printf("\n O valor pago pelo lanche será: %lf", valorPagamento);
        break;

    case 101:
        printf("\n Quantos itens deseja pedir? ");
        scanf("%d", &qtd);
        valorPagamento = qtd * 8.30;
        printf("\n O valor pago pelo lanche será: %lf", valorPagamento);
        break;

    case 102:
        printf("\n Quantos itens deseja pedir? ");
        scanf("%d", &qtd);
        valorPagamento = qtd * 8.50;
        printf("\n O valor pago pelo lanche será: %lf", valorPagamento);
        break;

    case 103:
        printf("\n Quantos itens deseja pedir? ");
        scanf("%d", &qtd);
        valorPagamento = qtd * 12.50;
        printf("\n O valor pago pelo lanche será: %lf", valorPagamento);
        break;

    case 104:
        printf("\n Quantos itens deseja pedir? ");
        scanf("%d", &qtd);
        valorPagamento = qtd * 13.25;
        printf("\n O valor pago pelo lanche será: %lf", valorPagamento);
        break;

    default:
        printf("\n Código inválido.");
    }
}