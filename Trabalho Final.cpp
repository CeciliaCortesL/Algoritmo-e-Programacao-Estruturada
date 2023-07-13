#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

typedef struct
{
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct
{
    Produto produtos[MAX_PRODUTOS];
    int quantidadeProdutos;
} Estoque;

void inicializarEstoque(Estoque *estoque)
{
    estoque->quantidadeProdutos = 0;
}

void adicionarProduto(Estoque *estoque)
{
    if (estoque->quantidadeProdutos >= MAX_PRODUTOS)
    {
        printf("\n Estoque cheio");
        return;
    }

    Produto novoProduto;
    printf("\n Digite o codigo do produto: ");
    scanf("%d", &novoProduto.codigo);
    printf("\n Digite a descricao do produto: ");
    scanf(" %[^\n]", novoProduto.descricao);
    printf("\n Digite a quantidade do produto: ");
    scanf("%d", &novoProduto.quantidade);
    printf("\n Digite o valor do produto: ");
    scanf("%f", &novoProduto.valor);

    estoque->produtos[estoque->quantidadeProdutos] = novoProduto;
    estoque->quantidadeProdutos++;

    printf("\n Produto adicionado com sucesso");
}

void imprimirRelatorio(Estoque estoque)
{
    if (estoque.quantidadeProdutos == 0)
    {
        printf("\n Estoque vazio");
        return;
    }

    printf("\n Relatorio de Produtos:");
    for (int i = 0; i < estoque.quantidadeProdutos; i++)
    {
        Produto produto = estoque.produtos[i];
        printf("\n codigo: %d", produto.codigo);
        printf("\n Descricao: %s", produto.descricao);
        printf("\n Quantidade: %d", produto.quantidade);
        printf("\n Valor: R$ %.2f", produto.valor);
    }
}

void pesquisarProduto(Estoque estoque)
{
    int codigo;
    printf("\n Digite o codigo do produto a ser pesquisado: ");
    scanf("%d", &codigo);

    for (int i = 0; i < estoque.quantidadeProdutos; i++)
    {
        Produto produto = estoque.produtos[i];
        if (produto.codigo == codigo)
        {
            printf("Codigo: %d\n", produto.codigo);
            printf("Descricao: %s\n", produto.descricao);
            printf("Quantidade: %d\n", produto.quantidade);
            printf("Valor: R$ %.2f\n", produto.valor);
            return;
        }
    }

    printf("Produto nao encontrado.\n");
}

void removerProduto(Estoque *estoque)
{
    int codigo;
    printf("\n Digite o codigo do produto a ser removido: ");
    scanf("%d", &codigo);

    for (int i = 0; i < estoque->quantidadeProdutos; i++)
    {
        Produto produto = estoque->produtos[i];
        if (produto.codigo == codigo)
        {
            for (int j = i; j < estoque->quantidadeProdutos - 1; j++)
            {
                estoque->produtos[j] = estoque->produtos[j + 1];
            }
            estoque->quantidadeProdutos--;
            printf("\n Produto removido com sucesso");
            return;
        }
    }

    printf("\n Produto nao encontrado");
}

int main()
{
    Estoque estoque;
    inicializarEstoque(&estoque);

    int opcao;
    do
    {
        printf("\nMenu:\n");
        printf("\n 1. Adicionar produto");
        printf("\n 2. Imprimir relatorio");
        printf("\n 3. Pesquisar produto");
        printf("\n 4. Remover produto");
        printf("\n 0. Sair");
        printf("\n Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            adicionarProduto(&estoque);
            break;
        case 2:
            imprimirRelatorio(estoque);
            break;
        case 3:
            pesquisarProduto(estoque);
            break;
        case 4:
            removerProduto(&estoque);
            break;
        case 0:
            break;
        default:
            printf("\n Opcaoo invalida");
        }
    } while (opcao != 0);

    return 0;
}
