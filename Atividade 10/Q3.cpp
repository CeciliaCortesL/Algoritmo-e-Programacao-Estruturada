#include <stdio.h>

int main()
{

    int inteiro1, inteiro2;

    int *ponteiro1 = &inteiro1;
    int *ponteiro2 = &inteiro2;

    printf("\n Digite o valor da primeira e da segunda variavel respectivamente: ");
    scanf("%d %d", &inteiro1, &inteiro2);

    printf("\n Endereco da variavel 1: %p \n Endereco da variavel 2: %p", &inteiro1, &inteiro2);

    if (&inteiro1 > &inteiro2)
    {
        printf("\n O endereco da variavel 1 eh maior");
    }
    else if (&inteiro2 > &inteiro1)
    {
        printf("\n O endereco da variavel 2 eh maior");
    }
    else
    {
        printf("\n Os enderecos sao iguais");
    }
}