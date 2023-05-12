#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    int idade;
    char endereco[100];

} listaAlunos;

int main()
{
    listaAlunos aluno1;
    printf("\n Digite o nome: ");
    scanf("%50[^\n]s", &aluno1.nome);
    printf("\n Digite a idade: ");
    scanf("%d", &aluno1.idade);
    printf("\n Digite o endereco: ");
    scanf("%100[^\n]s", &aluno1.endereco);

    printf("\n Registro \n Nome: %s, Idade: %d, Endereco: %s", aluno1.nome, aluno1.idade, aluno1.endereco);
}