#include <stdio.h>

double validaQuantidade(int quantidade)
{
    if (quantidade <= 0)
    {
        printf("Quantidade invalida. Digite novamente: ");
        scanf("%d", &quantidade);
        return validaQuantidade(quantidade);
    }
    return quantidade;
}
double calculaSalario(int quantidade)
{
    double salarioBase = 600;
    double adicional = 0;

    if (quantidade > 50 && quantidade <= 80)
    {
        adicional = (quantidade - 50) * 0.5;
    }
    else if (quantidade > 80)
    {
        adicional = 30 * 0.5 + (quantidade - 80) * 0.75;
    }
    return salarioBase + adicional;
}
void mostraFinal(int funcionarios, double salarios[])
{
    for (int i = 0; i < funcionarios; i++)
    {
        printf("\n Salario do funcionario %d: R$ %.2lf", i + 1, salarios[i]);
    }
}

int main(void)
{

    int funcionarios = 0, quantidade;
    double salarios[funcionarios];

    printf("\n Digite a quantidade de funcionarios: ");
    scanf("%d", &funcionarios);

    for (int i = 0; i < funcionarios; i++)
    {
        printf("\n Funcionario %d", i + 1);
        printf("\n Digite a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        quantidade = validaQuantidade(quantidade);
        salarios[i] = calculaSalario(quantidade);
    }

    mostraFinal(funcionarios, salarios);
}