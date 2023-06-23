#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Restaurante
{
    char nome[100];
    char endereco[100];
    float precoMedio;
    char tipoComida[100];
    struct Restaurante *proximo;
};

void dadosRestaurante(struct Restaurante *restaurante)
{
    printf("\n Digite o nome do restaurante: ");
    scanf("%s", restaurante->nome);

    printf("\n Digite o endereco do restaurante: ");
    scanf("%s", restaurante->endereco);

    printf("\n Digite o preco medio do restaurante: ");
    scanf("%f", &(restaurante->precoMedio));
    // printf("%f", restaurante->precoMedio);

    printf("\n Digite o tipo de comida do restaurante: ");
    scanf("%s", restaurante->tipoComida);

    restaurante->proximo = NULL;
}

void listarDados(struct Restaurante *inicio)
{
    struct Restaurante *atual = inicio;

    while (atual != NULL)
    {
        printf("\n Nome: %s", atual->nome);
        printf("\n Endereco: %s", atual->endereco);
        printf("\n Preco Medio: %.2f", atual->precoMedio);
        printf("\n Tipo de comida: %s", atual->tipoComida);

        atual = atual->proximo;
    }
}

int main()
{

    struct Restaurante *inicio = NULL;
    struct Restaurante *atual = NULL;
    int numRestaurante;

    printf("\n Digite o numero de restaurantes: ");
    scanf("%d", &numRestaurante);

    for (int i = 0; i < numRestaurante; i++)
    {
        struct Restaurante *novoRestaurante = (struct Restaurante *)malloc(sizeof(struct Restaurante));

        dadosRestaurante(novoRestaurante);

        if (inicio == NULL)
        {
            inicio = novoRestaurante;
            atual = novoRestaurante;
        }
        else
        {
            atual->proximo = novoRestaurante;
            atual = novoRestaurante;
        }
    }

    printf("\nDados dos Restaurantes: ");
    listarDados(inicio);

    atual = inicio;
    while (atual != NULL)
    {
        struct Restaurante *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}