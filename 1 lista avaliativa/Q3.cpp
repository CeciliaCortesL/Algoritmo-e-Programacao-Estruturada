#include <stdio.h>
#include <math.h>

int main(void)
{

    double raio, area, volume, pi = 3.14159;

    printf("\n Digite o raio: ");
    scanf("%lf", &raio);

    area = 4 * pi * pow(raio, 2);
    volume = (4.0 / 3) * pi * pow(raio, 3);

    printf("\n A area eh: %.4lf e o volume eh: %.4lf", area, volume);
}