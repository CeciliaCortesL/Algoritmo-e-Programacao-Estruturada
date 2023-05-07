#include <stdio.h>

int main(void)
{
    int numeros[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("\n Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n Números primos: ");
    for (i = 0; i < 10; i++)
    {
        int eh_primo = 1;
        for (j = 2; j < numeros[i]; j++)
        {
            if (numeros[i] % j == 0)
            {
                eh_primo = 0;
                break;
            }
        }
        if (eh_primo && numeros[i] > 1)
        {
            printf("%d (posição %d), ", numeros[i], i);
        }
    }
    printf("\n");
}
