#include <stdio.h>

int main()
{
    int array[5];
    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("\n Digite o valor de %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\n Dobro dde cada valor: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d", *(ptr + i) * 2);
    }
}