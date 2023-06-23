#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Veiculo
{
    char proprietario[100];
    char combustivel[20];
    char modelo[100];
    char cor[100];
    char chassi[100];
    int ano;
    char placa[10];
    struct Veiculo *proximo;
};

void proprietariosDiesel(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("\n Propretarios de carros a diesel (2010 ou posterior: )");

    while (atual != NULL)
    {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010)
        {
            printf("\n Proprietario: %s", atual->proprietario);
        }

        atual = atual->proximo;
    }
}

void listarPlacasJ(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("\n Placas que começam com a letra J e terminam com 0,2, 4 ou 7:  ");

    while (atual != NULL)
    {
        if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7'))
        {
            printf("\n Placa: %s", atual->placa);
            printf("\n Proprietario: %s", atual->proprietario);
        }
        atual = atual->proximo;
    }
}

void ModeloCorSomaPar(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("\n Modelo e cor dos veiculos que as placas tem segunda letra uma vogal e soma dos valores numericos eh par: ");

    while (atual != NULL)
    {
        char segundaLetraPlaca = atual->placa[1];
        int somaNumerosPlaca = 0;

        for (int i = 3; i < 7; i++)
        {
            somaNumerosPlaca += atual->placa[i] - '0';
        }
        if ((segundaLetraPlaca == 'A' || segundaLetraPlaca == 'E' || segundaLetraPlaca == 'I' || segundaLetraPlaca == 'O' || segundaLetraPlaca == 'U') && somaNumerosPlaca % 2 == 0)
        {
            printf("\n Modelo: %s", atual->modelo);
            printf("\n Cor: %s", atual->cor);
        }

        atual = atual->proximo;
    }
}

void trocarProprietario(struct Veiculo *inicio, const char *chassi)
{
    struct Veiculo *atual = inicio;

    while (atual != NULL)
    {
        if (strcmp(atual->chassi, chassi) == 0)
        {
            if (atual->placa[2] == '0' || atual->placa[3] == '0' || atual->placa[4] == '0' || atual->placa[5] == '0')
            {
                printf("\nTroca de proprietario nao permitida");
                return;
            }
            printf("\n Digite o novo proprietario: ");
            scanf("%s", atual->proprietario);

            printf("TRoca de proprietario realizada");
            return;
        }
        atual = atual->proximo;
    }
    printf("Veiculo nao encontrado");
}

int main()
{
    struct Veiculo *inicio = NULL;
    struct Veiculo *atual = NULL;
    int numVeiculos;

    printf("\n Digite o numero de veiculos: ");
    scanf("%d", &numVeiculos);

    for (int i = 0; i < numVeiculos; i++)
    {
        struct Veiculo *novoVeiculo = (struct Veiculo *)malloc(sizeof(struct Veiculo));

        printf("\n Veiculo %d: ", i + 1);

        printf("\n Proprietario: ");
        scanf("%s", novoVeiculo->proprietario);

        printf("\n Combustivel(alcool, diesel ou gasolina): ");
        scanf("%s", novoVeiculo->combustivel);

        printf("\n Modelo: ");
        scanf("%s", novoVeiculo->modelo);

        printf("\n Cor: ");
        scanf("%s", novoVeiculo->cor);

        printf("\n Chassi: ");
        scanf("%s", novoVeiculo->chassi);

        printf("\n Ano: ");
        scanf("%d", &(novoVeiculo->ano));

        printf("\n Placa: ");
        scanf("%s", novoVeiculo->placa);

        novoVeiculo->proximo = NULL;

        if (inicio == NULL)
        {
            inicio = novoVeiculo;
            atual = novoVeiculo;
        }
        else
        {
            atual->proximo = novoVeiculo;
            atual = novoVeiculo;
        }
    }
    proprietariosDiesel(inicio);

    listarPlacasJ(inicio);
    ModeloCorSomaPar(inicio);

    char chassiTroca[100];

    printf("Digite o numero do chassi para realizar a troca de proprietario: ");
    scanf("%s", chassiTroca);
    trocarProprietario(inicio, chassiTroca);

    atual = inicio;
    while (atual != NULL)
    {
        struct Veiculo *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}