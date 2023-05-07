#include <stdio.h>

int main(void)
{
    int vetor[50], i;

    for (i = 0; i < 50; i++)
    {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("\n Vetor: ");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vetor[i]);
    }
}
