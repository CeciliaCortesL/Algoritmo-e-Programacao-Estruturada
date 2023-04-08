#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    float porcentagemFem;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[40], corOlho[40], corCabelo[40];

    contPorcentagem = 0;
    maiorIdade = 0;
    cont = 0;

    do
    {
        cont++;
        printf("\n Digite o sexo: ");
        scanf("%s", &sexo);

        printf("\n Digite a cor dos olhos: ");
        scanf("%s", &corOlho);

        printf("\n Digite a cor do cabelo: ");
        scanf("%s", &corCabelo);

        printf("\n Digite a idade: ");
        scanf("%d", &idade);

        if ((strcmp(sexo, "feminino") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp(corOlho, "verdes" == 0)) && (strcmp(corCabelo, "loiro") == 0))
        {
            contPorcentagem++;
        }
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
    } while (idade != 1);
        printf("\nMaior idade: %d", maiorIdade);
        porcentagemFem = (100 * contPorcentagem) / cont;
        printf("\nPorcentagem femnina com olhos verder e cabelo loiro que estao entre 18 e 35 anos: %.2f", porcentagemFem);
    
}