#include <stdio.h>

int main()
{
    int anos, meses, dias, calculo;

    printf("\n Digite a sua idade em anos, meses e dias respectivamente: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    calculo = (dias = (anos * 365) + (meses * 30));

    printf("\n Sua idade em dias é: %d", calculo);
}
