#include <stdio.h>

int main(void)
{
    int vetor[100], i = 1, num = 1;

    while (i <= 100)
    {
        if (num % 7 != 0 && num % 10 != 7)
        {
            vetor[i - 1] = num;
            i++;
        }
        num++;
    }

    printf("\n Vetor: ");
    for (i = 0; i < 100; i++)
    {
        printf("%d ", vetor[i]);
    }
}
