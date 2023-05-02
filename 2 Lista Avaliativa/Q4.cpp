#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define salarioMinimo 1400.00

char validaSexo()
{
    char sexo;
    do
    {
        printf("\n Digite o sexo('M' para masculino e 'F' para feminino): \n OBS: Digite em letra maiuscula. ");
        scanf("%c", &sexo);
        sexo = toupper(sexo);
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario()
{
    float salario;
    do
    {
        printf("\n Digite o salario: ");
        scanf("%f", &salario);
        if (salario <= 1.00)
        {
            printf("\n Valor invalido");
        }

    } while (salario <= 1.00);
    return salario;
}

char *classificaSalario(float salario)
{
    if (salario > salarioMinimo)
    {
        return "Acima do salario minimo";
    }
    else if (salario == salarioMinimo)
    {
        return "Igual ao salario minimo";
    }
    else
    {
        return "Abaixo do salario minimo";
    }
}

void classifica(char sexo, float salario, char *classificacao)
{
    if (sexo == 'M')
    {
        printf("\n Sexo: Masculino");
    }
    else
    {
        printf("\n Sexo: Feminino");
    }
    printf("\n Salario: R$ %.2f", salario);
    printf("\n Classificacao: %s", classificacao);
}

int main(void)
{

    int n, abaixoSalarioMinimo = 0, acimaSalarioMinimo = 0;
    char sexo;
    float salario;
    char *classificacao;

    printf("\n Digite a quantidade de assalariados: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n Dados do %d assalariado: \n", i);
        sexo = validaSexo();
        salario = validaSalario();
        classificacao = classificaSalario(salario);
        classifica(sexo, salario, classificacao);

        if (salario < salarioMinimo)
        {
            abaixoSalarioMinimo++;
        }
        else
        {
            acimaSalarioMinimo++;
        }
    }

    printf("\n Quantidade de assalariados abaixo do salario minimo: %d e quantdade acima do salario minimo: %d", abaixoSalarioMinimo, acimaSalarioMinimo);
}