#include <stdio.h>

int main(void)
{

    int num, maior, menor;
    maior = menor = 0;

    printf("\n Digite um numero (para sair do programa digite um numero negativo): ");
    scanf("%d", &num);

    maior = menor = num;

    while (num >= 0)
    {
        printf("\n Digite um numero (para sair do programa digite um numero negativo): ");
        scanf("%d", &num);

        if (num >= 0)
        {
            if (num > maior)
            {
                maior = num;
            }
            else if (num < menor)
            {
                menor = num;
            }
        }
    }
    printf("\n O maior numero digitado eh: %d e o menor eh: %d", maior, menor);
}