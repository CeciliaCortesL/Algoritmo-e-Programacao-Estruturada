#include <stdio.h>

int main()
{
    float salario, reajuste, calculo;

    printf("\n Escreva o salário e em seguida o reajuste:\n Obs: Escreva o reajuste em percentual (de 0 a 1) usando '.'. Ex: 0.5 ");
    scanf("%f %f", &salario, &reajuste);

    calculo = salario * (1 + reajuste);

    printf("\n O valor do salário após o reajuste é: %f", calculo);
}
