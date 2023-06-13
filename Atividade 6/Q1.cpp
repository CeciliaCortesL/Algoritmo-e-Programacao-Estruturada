#include <stdio.h>

int solicitaOpcao()
{
    int opcao;
    printf("\nEscolha uma forma de pagamento: ");
    printf("\n 1 - A vista com 10% de desconto");
    printf("\n 2 - Em duas vezes (preco da etiqueta) ");
    printf("\n 3 - De ate 10 vezes com 3% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    scanf("%d", &opcao);

    return opcao;
}

void avista(float valorTotal)
{
    float valorDesconto = valorTotal * 0.9;
    printf("\n O valor total com desconto eh R$ %.2f", valorDesconto);
}

void duasVezes(float valorTotal)
{
    float valorDuasVezes = valorTotal / 2;
    printf("\n O valor total sera dividido em duas vezes de R$ %.2f", valorDuasVezes);
}

void juros(float valorTotal, int prestacoes)
{
    float valorJuros = valorTotal * 1.03;
    float valorPrestacoes = valorJuros / prestacoes;
    printf("\n O valor total com juros eh de R$ %.2f e o valor de cada prestacao eh de R$ %.2f");
}

int main()
{

    float valorTotal;
    int opcao, prestacoes;

    printf("\n Digite o valor total da compra: R$ ");
    scanf("%f", &valorTotal);

    opcao = solicitaOpcao();

    switch (opcao)
    {
    case 1:
        avista(valorTotal);
        break;

    case 2:
        duasVezes(valorTotal);
        break;

    case 3:
        if (valorTotal > 100)
        {
            printf("\n Digite o numero de prestacoes (entre 3 e 100): ");
            scanf("%d", prestacoes);

            if (prestacoes >= 3 && prestacoes <= 10)
            {
                juros(valorTotal, prestacoes);
            }
            else
            {
                printf("\n Numero de prestacoes invalido");
            }
        }
        else
        {
            printf("\n Valor induficiente para essa opcao.");
        }
        break;

    default:
        printf("\n Opcao invalida.");
        break;
    }
}