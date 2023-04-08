#include <stdio.h>

int main()
{

    int n, impar;

    printf("\n Digite o número: ");
    scanf("%d", &n);

    int num = n + 1 + (n % 2);

    for (int i = 0; i < n; i++)
    {
        printf("%d", num);
        num += 2;
    }
}