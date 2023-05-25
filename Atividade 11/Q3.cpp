#include <stdio.h>

void soma(int &a, int &b)
{
    a += b;
}

int main()
{
    int a = 37;
    int b = 21;

    printf("\n Valores antes da soma: \n a = %d e b = %d", a, b);

    soma(a, b);

    printf("\n Valores depois da soma: \n a = %d e b = %d", a, b);
}