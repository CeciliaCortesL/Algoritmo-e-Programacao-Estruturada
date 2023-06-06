#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
    char sintomas[100];
} Dados;

int main()
{
    int numRegistros;

    printf("\n Digite o número de registros a serem cadastrados: ");
    scanf("%d", &numRegistros);

    Dados *registros = (Dados *)malloc(numRegistros * sizeof(Dados));

    for (int i = 0; i < numRegistros; i++)
    {
        printf("\n Cadastro %d\n", i + 1);

        printf("\n Nome: ");
        scanf(" %[^\n]s", registros[i].nome);

        printf("\n Idade: ");
        scanf("%d", &registros[i].idade);

        printf("\n Altura: ");
        scanf("%f", &registros[i].altura);

        printf("\n Sintomas: ");
        scanf(" %[^\n]s", registros[i].sintomas);
    }

    printf("\nRegistros cadastrados: ");
    for (int i = 0; i < numRegistros; i++)
    {
        printf("\n Cadastro %d", i + 1);
        printf("\n Nome: %s", registros[i].nome);
        printf("\n Idade: %d", registros[i].idade);
        printf("\n Altura: %.2f", registros[i].altura);
        printf("\n Sintomas: %s", registros[i].sintomas);
    }
    free(registros);
}