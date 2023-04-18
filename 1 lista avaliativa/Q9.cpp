#include <stdio.h>

int main(void)
{

    int continuar, qtdAbacaxi, qtdMaca, qtdPera, valor, cod;

    while (continuar)
    {
        printf("\n Digite 0 para fechar o carrinho");
        printf("\n\t Cardapio:");
        printf("\n1-Abacaxi - R$ 5,00 a unidade");
        printf("\n2-Maça - R$ 1,00 a unidade");
        printf("\n3-Pera - R$ 4,00 a unidade");

        printf("\n Digite o item desejado: ");
        scanf("%d", &cod);

        switch (cod)
        {
        case 0:
            continuar = 0;
            break;
        case 1:

            printf("\n Quantos itens deseja pedir? ");
            scanf("%d", &qtdAbacaxi);
            break;

        case 2:
            printf("\n Quantos itens deseja pedir? ");
            scanf("%d", &qtdMaca);
            break;

        case 3:
            printf("\n Quantos itens deseja pedir? ");
            scanf("%d", &qtdPera);
            break;

        default:
            printf("\n Invalido");
            break;
        }

        valor = (qtdAbacaxi * 5) + (qtdMaca * 1) + (qtdPera * 4);
        printf("\n O valor total foi de R$ %d", valor);
    }
}