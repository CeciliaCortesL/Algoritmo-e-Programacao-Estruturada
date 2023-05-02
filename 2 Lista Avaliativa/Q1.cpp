#include <stdio.h>

int main(void)
{

    int n, voltaMelhorTempo = 0;
    float tempo, melhorTempo = 99999, tempoTotal = 0;

    printf("\n Digite o numero de voltas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("\n Digite o tempo da volta %d: ", i + 1);
        scanf("%f", &tempo);

        tempoTotal += tempo;

        if (tempo < melhorTempo)
        {

            melhorTempo = tempo;
            voltaMelhorTempo = i + 1;
        }
    }
    printf("\n Melhor tempo: %.2f (volta %d) e o tempo medio foi: %.2f", melhorTempo, voltaMelhorTempo, tempoTotal / n);
}