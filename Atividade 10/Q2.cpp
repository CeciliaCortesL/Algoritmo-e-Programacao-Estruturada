#include <stdio.h>

int main()
{

    int inteiro1 = 10;
    int inteiro2 = 20;

    int *ponteiroInteiro1 = &inteiro1;
    int *ponteiroInteiro2 = &inteiro2;

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
