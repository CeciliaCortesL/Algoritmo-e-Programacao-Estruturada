#include <stdio.h>

int main()
{

    int inteiro = 46;
    float real = 15.4;
    char caractere = 'C';

    int *ponteiroInteiro = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroChar = &caractere;

    printf("\n Antes das modificacoes: \n Inteiro: %d \n Real: %.2f \n Char: %c", inteiro, real, caractere);

    *ponteiroInteiro = 67;
    *ponteiroReal = 32.3;
    *ponteiroChar = 'L';

    printf("\n Depois das modificacoes: \n Inteiro: %d \n Real: %.2f \n Char: %c", inteiro, real, caractere);
}