#include <stdio.h>

int main()
{
    float array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\n Endereco da posicao %d: %p", i, &(array[i]));
    }
}