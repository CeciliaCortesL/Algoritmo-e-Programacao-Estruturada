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

void listarProprietariosDiesel(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("Proprietários dos carros a diesel do ano de 2010 ou posterior:\n");

    while (atual != NULL)
    {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010)
        {
            printf("Proprietário: %s\n", atual->proprietario);
        }

        atual = atual->proximo;
    }
}

void listarPlacasJ(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("Placas que começam com a letra J e terminam com 0, 2, 4 ou 7:\n");

    while (atual != NULL)
    {
        if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7'))
        {
            printf("Placa: %s\n", atual->placa);
            printf("Proprietário: %s\n", atual->proprietario);
        }

        atual = atual->proximo;
    }
}

void listarModeloCorSomaPar(struct Veiculo *inicio)
{
    struct Veiculo *atual = inicio;

    printf("Modelo e cor dos veículos cujas placas têm segunda letra vogal e soma dos valores numéricos é par:\n");

    while (atual != NULL)
    {
        char segundaLetraPlaca = atual->placa[1];
        int somaNumerosPlaca = 0;

        // Calcula a soma dos valores numéricos da placa
        for (int i = 3; i < 7; i++)
        {
            somaNumerosPlaca += atual->placa[i] - '0';
        }

        if ((segundaLetraPlaca == 'A' || segundaLetraPlaca == 'E' || segundaLetraPlaca == 'I' ||
             segundaLetraPlaca == 'O' || segundaLetraPlaca == 'U') &&
            somaNumerosPlaca % 2 == 0)
        {
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
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
                printf("Troca de proprietário não permitida para veículos com placas que possuem dígito igual a zero.\n");
                return;
            }

            printf("Digite o novo proprietário: ");
            scanf("%s", atual->proprietario);

            printf("Troca de proprietário realizada com sucesso.\n");
            return;
        }

        atual = atual->proximo;
    }

    printf("Veículo com chassi '%s' não encontrado.\n", chassi);
}

int main()
{
    struct Veiculo *inicio = NULL;
    struct Veiculo *atual = NULL;
    int numVeiculos;

    printf("Digite o número de veículos: ");
    scanf("%d", &numVeiculos);

    for (int i = 0; i < numVeiculos; i++)
    {
        struct Veiculo *novoVeiculo = (struct Veiculo *)malloc(sizeof(struct Veiculo));

        printf("\nVeículo %d:\n", i + 1);

        printf("Proprietário: ");
        scanf("%s", novoVeiculo->proprietario);

        printf("Combustível (álcool, diesel ou gasolina): ");
        scanf("%s", novoVeiculo->combustivel);

        printf("Modelo: ");
        scanf("%s", novoVeiculo->modelo);

        printf("Cor: ");
        scanf("%s", novoVeiculo->cor);

        printf("Nº chassi: ");
        scanf("%s", novoVeiculo->chassi);

        printf("Ano: ");
        scanf("%d", &(novoVeiculo->ano));

        printf("Placa: ");
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

    listarProprietariosDiesel(inicio);

    printf("\n");

    listarPlacasJ(inicio);

    printf("\n");

    listarModeloCorSomaPar(inicio);

    printf("\n");

    char chassiTroca[100];
    printf("Digite o número do chassi para realizar a troca de proprietário: ");
    scanf("%s", chassiTroca);
    trocarProprietario(inicio, chassiTroca);

    // Liberar memória alocada
    atual = inicio;
    while (atual != NULL)
    {
        struct Veiculo *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
