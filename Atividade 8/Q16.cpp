#include <stdio.h>

int main(void)
{
    float vetor[5];
    int codigo, i;

    printf("\n Digite 5 valores: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetor[i]);
    }

    while (1)
    {
        printf("\n Digite um codigo (0 = sair, 1 = ordem direta, 2 = ordem inversa): ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            return 0;
        case 1:
            printf("\n Valores do vetor na ordem direta: ");
            for (i = 0; i < 5; i++)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("\n Valores do vetor na ordem inversa: ");
            for (i = 4; i >= 0; i--)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
            printf("\n Codigo invalido");
        }
    }
}
