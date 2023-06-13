#include <stdio.h>

main()
{

    float vetor[10];
    float soma = 0, negativos = 0;

    printf("\n Digite 10 numeros reais: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0)
        {
            negativos++;
        }
        else
        {
            soma += vetor[i];
        }
    }
    printf("\n Quantidade de numeros negativos: %.2f e a soma dos positivos: %.2f", negativos, soma);
}