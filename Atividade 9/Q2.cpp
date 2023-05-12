#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct Aluno
{
    char nome[50];
    int matricula;
    char curso[50];
} ListaAlunos;

int main()
{
    ListaAlunos lista[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);
        printf("Digite a matricula: ");
        scanf("%d", &lista[i].matricula);
        fflush(stdin);
        printf("Digite o curso: ");
        scanf("%50[^\n]s", &lista[i].curso);
        fflush(stdin);
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("Nome: %s", lista[i].nome);
        printf("Matricula: %d", lista[i].matricula);
        printf("Curso: %s", lista[i].curso);
    }
}