#include <stdio.h>

int main(void)
{

    float x, y;

    printf("\n Digite as coordenadas x e y: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("\n Origem");
    }
    else if (x == 0)
    {
        printf("\n Eixo Y");
    }
    else if (y == 0)
    {
        printf("\n Eixo X");
    }
    else
    {
        if (x > 0)
        {
            if (y > 0)
            {
                printf("\n Q1");
            }
            else
            {
                printf("\n Q4");
            }
        }
        else
        {
            if (y > 0)
            {
                printf("\n Q2");
            }
            else
            {
                printf("\n Q3");
            }
        }
    }
}