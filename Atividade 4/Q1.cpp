#include <stdio.h>

int main()
{

    int x = 0, n = 0;

    printf("\n Digite o ponto de partida: ");
    scanf("%d", &x);

    printf("\n Digite o número: ");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {
        printf("_%d_\n", x);
    }
}