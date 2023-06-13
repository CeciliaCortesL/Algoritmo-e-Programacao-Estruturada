#include <stdio.h>
#include <iostream>

using namespace std;

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int num1, num2;
    printf("\nDigite dois números: ");
    cin >> num1 >> num2;
    cout << "\nO maior número é: " << maior(num1, num2);
}