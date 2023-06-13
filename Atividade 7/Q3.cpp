#include <stdio.h>
#include <math.h>

main()
{
    int vetorDados[10];
    int vetorResultado[10];

    for (int indice = 0; indice < 10; indice++)
    {
        printf("\n Digite os valores");
        scanf("%d", &vetorDados[indice]);
    }
    for (int indice = 0; indice < 10; indice++)
    {
        vetorResultado[indice] = pow(vetorDados[indice], 2);
        printf("%d\n", vetorResultado[indice]);
    }
}