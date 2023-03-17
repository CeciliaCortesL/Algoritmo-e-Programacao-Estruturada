#include <stdio.h>

int main()
{
    float salarioBase, valorComissao, totalVendas, totalComissao, totalSalario;
    int totalCarrosVendidos;

    printf("\n Entre com o salario base do vendedor: ");
    scanf("%f", &salarioBase);

    printf("\n Entre com o valor da comissao por carro vendido: ");
    scanf("%f", &valorComissao);

    printf("\n Entre com o total de carros vendidos: ");
    scanf("%d", &totalCarrosVendidos);

    printf("\n Entre com o total de vendas: ");
    scanf("%f", &totalVendas);

    totalComissao = totalCarrosVendidos * valorComissao;
    totalComissao = totalComissao + (totalVendas * 0.05);

    totalSalario = totalComissao + salarioBase;

    printf("\n O salario final do vendedor: %8.2f", totalSalario);
}