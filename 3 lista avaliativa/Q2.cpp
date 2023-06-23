#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dieta
{
    char nomeComida[100];
    float pesoPorcao;
    int calorias;
    struct Dieta *proximo;
};

void solicitaDados(struct Dieta *comida)
{
    printf("\n Digite a comida: ");
    scanf("%s", comida->nomeComida);

    printf("\n Digite o peso da porção em gramas: ");
    scanf("%f", &(comida->pesoPorcao));

    printf("\n Digite as calorias: ");
    scanf("%d", &(comida->calorias));

    comida->proximo = NULL;
}

void dados(struct Dieta *inicio)
{
    struct Dieta *atual = inicio;

    while (atual != NULL)
    {
        printf("\n Comida: %s", atual->nomeComida);
        printf("\n Peso da porção: %.2fg", atual->pesoPorcao);
        printf("\n Calorias: %d", atual->calorias);

        atual = atual->proximo;
    }
}

int main()
{
    struct Dieta *inicio = NULL;
    struct Dieta *atual = NULL;

    int numComidas;

    printf("\n Digite a quantidade de comidas: ");
    scanf("%d", &numComidas);

    for (int i = 0; i < numComidas; i++)
    {
        struct Dieta *novaComida = (struct Dieta *)malloc(sizeof(struct Dieta));

        solicitaDados(novaComida);

        if (inicio == NULL)
        {
            inicio = novaComida;
            atual = novaComida;
        }
        else
        {
            atual->proximo = novaComida;
            atual = novaComida;
        }
    }

    dados(inicio);

    atual = inicio;
    while (atual != NULL)
    {
        struct Dieta *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}