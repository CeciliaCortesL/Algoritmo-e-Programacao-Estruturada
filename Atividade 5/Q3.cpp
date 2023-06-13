#include <iostream>
#include <stdio.h>

using namespace std;

double celsiusFahrenheit(double celsius)
{
    double fahrenheit = (9 * celsius / 5) + 32;
    return fahrenheit;
}
double fahrenheitCelsius(double fahrenheit)
{
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}
double celsiusKelvin(double celsius)
{
    double kelvin = celsius + 273.15;
    return kelvin;
}
double kelvinClesius(double kelvin)
{
    double celsius = kelvin - 273.15;
    return celsius;
}
double celsiusReaumur(double celsius)
{
    double reaumur = celsius * 4 / 5;
    return reaumur;
}
double reaumurCelsius(double reaumur)
{
    double celsius = reaumur * 5 / 4;
    return celsius;
}
double kelvinRankine(double kelvin)
{
    double rankine = kelvin * 1.8;
    return kelvin;
}
double rankineKelvin(double rankine)
{
    double kelvin = rankine / 1.8;
    return kelvin;
}

int main()
{

    int opcao;
    double temperatura, resultado;

    printf("\nDigite o numero da conversao: ");
    printf("\n 1 - Celsius para Fahrenheit");
    printf("\n 2 - Fahrenheit para Celsius");
    printf("\n 3 - Celsius para Kelvin");
    printf("\n 4 - Kelvin para Celsius");
    printf("\n 5 - Celsius para Reaumur");
    printf("\n 6 - Reaumur para Celsius");
    printf("\n 7 - Kelvin para Rankine");
    printf("\n 8 - Rankine para Celsius\n");
    scanf("%d", &opcao);

    printf("\n Digite a temperatura: ");
    scanf("%lf", &temperatura);

    switch (opcao)
    {
    case 1:
        resultado = celsiusFahrenheit(temperatura);
        printf("\n A temperatura é de %lf F", resultado);
        break;

    case 2:
        resultado = fahrenheitCelsius(temperatura);
        printf("\n A temperatura é de %lf C", resultado);
        break;

    case 3:
        resultado = celsiusKelvin(temperatura);
        printf("\n A temperatura é de %lf K", resultado);
        break;

    case 4:
        resultado = kelvinClesius(temperatura);
        printf("\n A temperatura é de %lf C", resultado);
        break;

    case 5:
        resultado = celsiusReaumur(temperatura);
        printf("\n A temperatura é de %lf R", resultado);
        break;

    case 6:
        resultado = reaumurCelsius(temperatura);
        printf("\n A temperatura é de %lf C", resultado);
        break;

    case 7:
        resultado = kelvinRankine(temperatura);
        printf("\n A temperatura é de %lf R", resultado);
        break;

    case 8:
        resultado = rankineKelvin(temperatura);
        printf("\n A temperatura é de %lf K", resultado);
        break;

    default:
        printf("\n Opcao invalida");
        break;
    }
}