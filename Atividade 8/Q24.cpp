#include <stdio.h>

int main(void)
{
    int numero_aluno, aluno_mais_baixo, aluno_mais_alto;
    float altura, altura_mais_baixa, altura_mais_alta;

    printf("\n Digite o numero do aluno e a sua altura (em metros): ");
    scanf("%d %f", &numero_aluno, &altura);

    aluno_mais_baixo = numero_aluno;
    aluno_mais_alto = numero_aluno;
    altura_mais_baixa = altura;
    altura_mais_alta = altura;

    for (int i = 1; i < 10; i++)
    {
        printf("\n Digite o numero do aluno e a sua altura (em metros): ");
        scanf("%d %f", &numero_aluno, &altura);

        if (altura < altura_mais_baixa)
        {
            aluno_mais_baixo = numero_aluno;
            altura_mais_baixa = altura;
        }

        if (altura > altura_mais_alta)
        {
            aluno_mais_alto = numero_aluno;
            altura_mais_alta = altura;
        }
    }

    printf("\n Aluno mais baixo: %d, altura: %.2f metros\n", aluno_mais_baixo, altura_mais_baixa);
    printf("\n Aluno mais alto: %d, altura: %.2f metros\n", aluno_mais_alto, altura_mais_alta);
}
