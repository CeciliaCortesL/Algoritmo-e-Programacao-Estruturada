#include <stdio.h>

int main()
{
    double Valor;
    int A, B, C, D, E, F, G, H, I, J, K, L;

    printf("\n Digite o valor monetário: ");
    scanf("%lf", &Valor);

    A = Valor / 100;
    Valor = Valor - (A * 100);

    B = Valor / 50;
    Valor = Valor - (B * 50);

    C = Valor / 20;
    Valor = Valor - (C * 20);

    D = Valor / 10;
    Valor = Valor - (D * 10);

    E = Valor / 5;
    Valor = Valor - (E * 5);

    F = Valor / 2;
    Valor = Valor - (F * 2);

    G = Valor / 1;
    Valor = Valor - (G * 1);

    H = Valor / 0.50;
    Valor = Valor - (H * 0.50);

    I = Valor / 0.25;
    Valor = Valor - (I * 0.25);

    J = Valor / 0.10;
    Valor = Valor - (J * 0.10);

    K = Valor / 0.05;
    Valor = Valor - (K * 0.05);

    L = Valor / 0.01;
    Valor = Valor - (L * 0.01);

    printf("NOTAS:\n");
    printf("\n %d nota(s) de R$ 100.00\n", A);
    printf("\n %d nota(s) de R$ 50.00\n", B);
    printf("\n %d nota(s) de R$ 20.00\n", C);
    printf("\n %d nota(s) de R$ 10.00\n", D);
    printf("\n %d nota(s) de R$ 5.00\n", E);
    printf("\n %d nota(s) de R$ 2.00\n", F);

    printf("MOEDAS:\n");
    printf("\n %d moeda(s) de R$ 1.00\n", G);
    printf("\n %d moeda(s) de R$ 0.50\n", H);
    printf("\n %d moeda(s) de R$ 0.25\n", I);
    printf("\n %d moeda(s) de R$ 0.10\n", J);
    printf("\n %d moeda(s) de R$ 0.05\n", K);
    printf("\n %d moeda(s) de R$ 0.01\n", L);
}