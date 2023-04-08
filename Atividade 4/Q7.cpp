#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}

int main()
{

    int n;

    printf("\n Digite um valor:");
    scanf("%d", &n);

    printf("\n O termo %d é", n, fibonacci(n));
}