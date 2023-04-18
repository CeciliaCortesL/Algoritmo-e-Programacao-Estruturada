#include <stdio.h>
#include <math.h>

int main(void)
{

    double x1, y1, x2, y2, distancia;

    printf("\n Digite as coordenadas do ponto 1 (x1, y1 respectivamente) e as coordenadas do ponto 2 (x2, y2 respectivamente): ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n A distancia eh: %.4lf", distancia);
}