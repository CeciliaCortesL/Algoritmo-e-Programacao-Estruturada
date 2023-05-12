#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct aluno
{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
} listaAlunos;

int main()
{

    listaAlunos lista[TAM];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Aluno: %d", i + 1);
        printf("\n Matricula: ");
        scanf("%d", &lista[i].matricula);
        printf("\n Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        printf("\n Nota prova 1: ");
        scanf("%f", &lista[i].nota1);
        printf("\n Nota prova 2: ");
        scanf("%f", &lista[i].nota2);
        printf("\n Nota prova 3: ");
        scanf("%f", &lista[i].nota3);
    }

    int alunoMaiorNota = 0;
    for (int i = 1; i < 5; i++)
    {
        if (lista[i].nota1 > lista[alunoMaiorNota].nota1)
        {
            alunoMaiorNota = i;
        }
    }
    printf("\n O aluno com a maior nota na primeira prova: \n Nome: %s \n Nota: %.2f \n", lista[alunoMaiorNota].nome, lista[alunoMaiorNota].nota1);

    int alunoMaiorMedia = 0;
    float maiorMedia = (lista[0].nota1 + lista[0].nota2 + lista[0].nota3) / 3;
    for (int i = 1; i < 5; i++)
    {
        float media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3;
        if (media > maiorMedia)
        {
            alunoMaiorMedia = i;
            maiorMedia = media;
        }
    }
    printf("\n ALuno com a maior media geral: \n Nome: %s \n Nota: %.2f \n", lista[alunoMaiorMedia].nome, maiorMedia);

    int alunoMenorMedia = 0;
    float menorMedia = (lista[0].nota1 + lista[0].nota2 + lista[0].nota3) / 3;
    for (int i = 1; i < 5; i++)
    {
        float media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3;
        if (media < menorMedia)
        {
            alunoMenorMedia = i;
            menorMedia = media;
        }
    }
    printf("\n ALuno com a menor media geral: \n Nome: %s \n Nota: %.2f \n", lista[alunoMenorMedia].nome, menorMedia);

    for (int i = 1; i < 5; i++)
    {
        float media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3;
        printf("\n Aluno: %s", lista[i].nome);
        printf("\n MAtricula: %d ", lista[i].matricula);
        printf("\n Media: %.2f", media);

        if (media >= 7.0)
        {
            printf("\n Aprovado");
        }
        else
        {
            printf("\n Reprovado");
        }
    }
}