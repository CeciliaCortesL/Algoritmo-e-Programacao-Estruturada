#include <stdio.h>

void tabelaAscii()
{
    int i;

    printf("|-----------|-----------|-----------|\n");
    printf("|  Decimal  |Hexadecimal|  Caracter |\n");
    printf("|-----------|-----------|-----------|\n");

    for (i = 0; i <= 127; i++)
    {
        printf("| %-9d | %-10x | %-9c |\n", i, i, i);
    }

    printf("|-----------|-----------|-----------|\n");
}

int main()
{
    tabelaAscii();
}