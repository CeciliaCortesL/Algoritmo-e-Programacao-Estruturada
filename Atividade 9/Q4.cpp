#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float mediaFinal;
} Aluno;

int main()
{
    Aluno alunos[10];
    Aluno aprovados[10];
    Aluno reprovados[10];
    int numAprovados = 0;
    int numReprovados = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n Digite os dados do aluno %d: ", i + 1);

        printf("\n Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);

        printf("\n Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("\n Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);
    }

    for (int i = 0; i < 10; i++)
    {
        if (alunos[i].mediaFinal >= 5.0)
        {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        }
        else
        {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }

    printf("\n Alunos Aprovados:");
    for (int i = 0; i < numAprovados; i++)
    {
        printf("\n Nome: %s", aprovados[i].nome);
        printf("\n Matrícula: %d", aprovados[i].matricula);
        printf("\n Média Final: %.2f", aprovados[i].mediaFinal);
    }

    printf("\n Alunos Reprovados:");
    for (int i = 0; i < numReprovados; i++)
    {
        printf("\n Nome: %s", reprovados[i].nome);
        printf("\n Matrícula: %d", reprovados[i].matricula);
        printf("\n Média Final: %.2f", reprovados[i].mediaFinal);
    }
}
