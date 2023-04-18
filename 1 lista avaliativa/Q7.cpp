#include <stdio.h>

int main(void)
{

    int num, termoAnterior = 0, termoAtual = 1, proximoTermo;

    printf("\n Digite um numero: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("\n 0");
    }
    else if (num == 1)
    {
        printf("\n 1");
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            proximoTermo = termoAnterior + termoAtual;
            termoAnterior = termoAtual;
            termoAtual = proximoTermo;
        }
        printf("\n %d", termoAtual);
    }
}