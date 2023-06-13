#include <stdio.h>

float inflaciona(float preco)
{

    if (preco < 100)
    {
        preco *= 1.1;
    }
    else
    {
        preco *= 1.2;
    }
    return preco;
}

void imprimePreco(float precoInflacionado)
{
    printf("\n Preco inflacionado: %.2f", precoInflacionado);
}

int main()
{
    float preco, precoInflacionado;

    printf("\nDigite o preco do produto: R$ ");
    scanf("%f", &preco);

    precoInflacionado = inflaciona(preco);
    imprimePreco(precoInflacionado);
}