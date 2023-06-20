#include <stdio.h>

int main(){
    float notaMat, notaFis, notaQui;
    float media;

    printf("\n Digite a nota de matematica, fisica e quimica respectivamente: ");
    scanf(" %f %f %f", &notaMat, &notaFis, &notaQui);

    media = (notaMat + notaFis + notaQui) / 3;

    FILE *arquivo = fopen("notas.txt", "w");

    if(arquivo == NULL){
        printf("\n Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "\n A media eh: %.2f", media);

    fclose(arquivo);

    printf("\n Dados salvos no arquivo 'notas.txt");
}