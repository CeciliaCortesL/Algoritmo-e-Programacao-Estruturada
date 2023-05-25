#include <stdio.h>

void imprime(int *array, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", *(array + i));
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    imprime(array, tamanho);
}