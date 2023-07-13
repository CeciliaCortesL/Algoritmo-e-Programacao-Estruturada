#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("\n Digite o número: ");
    scanf("%d, &n");

    if (n % 5 == 0 && n % 3 == 0 && n % 2 == 0)
    {
        printf("\n O número é divisível por 5, 3 e 2.");
    }
    else if (n % 5 == 0 && n % 3 == 0)
    {
        printf("\n O número é divisível por 5 e 3.");
    }
    else if (n % 5 == 0 && n % 2 == 0)
    {
        printf("\n O número é divisível por 5 e 2.");
    }
    else if (n % 3 == 0 && n % 2 == 0)
    {
        printf("\n O número é divisível por 3 e 2.");
    }
    else if (n % 5 == 0)
    {
        printf("\n O número é divisível por 5.");
    }
    else if (n % 3 == 0)
    {
        printf("\n O número é divisível por 3.");
    }
    else if (n % 2 == 0)
    {
        printf("\n O número é divisível por 2.");
    }
    else
    {
        printf("\n O número não é divisível por 5, nem por 3 e nem por 2.");
    }
}