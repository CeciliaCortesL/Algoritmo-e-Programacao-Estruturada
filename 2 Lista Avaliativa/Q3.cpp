#include <stdio.h>

int main(void)
{

    int numTimes, numJogadores, menores = 0, peso80 = 0, total = 0;
    float peso, idade, mediaIdade = 0, mediaPeso = 0, porcentagemPeso;

    printf("\n Digite o numero de times (entre 3 a 9): ");
    scanf("%d", &numTimes);

    while (numTimes < 3 || numTimes > 9)
    {
        printf("\n Numero invalido. Digite novamente: ");
        scanf("%d, &numTimes");
    }

    for (int i = 1; i <= numTimes; i++)
    {
        printf("\n Time %d \n", i);
        printf("Digite o numero de jogadores (entre 6 a 11): ");
        scanf("%d", &numJogadores);

        while (numJogadores < 6 || numJogadores > 11)
        {
            printf("Numero invalido. Digite novamente: ");
            scanf("%d", &numJogadores);
        }

        for (int j = 1; j <= numJogadores; j++)
        {
            printf("\n Jogador %d", j);
            printf("\n DIgite a idade: ");
            scanf("%f", &idade);

            printf("\n Digite o peso: ");
            scanf("%f", &peso);

            mediaIdade += idade;
            total++;

            if (idade < 18)
            {
                menores++;
            }
            if (peso > 80)
            {
                peso80++;
            }
            if (idade > 25)
            {
                mediaPeso += peso;
            }
        }
        mediaIdade /= numJogadores;

        printf("\n A media da idade dos jogadores do time eh: %.2f", mediaIdade);

        if (numJogadores >= 6 && numJogadores <= 11)
        {
            mediaPeso /= numJogadores;
            printf("\n A media do peso dos jogadores acima de 25 anos eh: %.2f", mediaPeso);
        }
    }
    porcentagemPeso = peso80 / total * 100;

    printf("Quantidade de jogadores menores de idade: %d \n QUantidade de jogadores com mais de 80 kg e a porcentagem: %d, %.2f", menores, peso80, porcentagemPeso);
}