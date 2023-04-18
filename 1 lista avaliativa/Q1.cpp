#include <stdio.h>

int main(void)
{

    int a, b, c, d, diferenca;

    printf("\n Digite o valor de 'A', 'B', 'C' e 'D' respectivamente: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = (a * b) - (c * d);

    printf("\n Diferenca = (%d * %d - %d * %d)", a, b, c, d);
    printf("\n Diferenca = %d", diferenca);
}