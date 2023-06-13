#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

double calculaMedia(double nota1, double nota2, double nota3)
{
    double media = (nota1 + nota2 + nota3) / 3;
    return media;
}

int main()
{

    vector<double> medias;

    int numEstudantes;

    printf("\nDigite o número de estudantes: ");
    scanf("%d", &numEstudantes);

    for (int i = 0; i < numEstudantes; i++)
    {
        double nota1, nota2, nota3;
        cout << "\nDigite as três notas: " << i + 1 << ": ";
        cin >> nota1 >> nota2 >> nota3;

        double media = calculaMedia(nota1, nota2, nota3);
        medias.push_back(media);
    }

    for (int i = 0; i < numEstudantes; i++)
    {
        cout << "A média do estudante " << i + 1 << " é: " << medias[i] << endl;
    }
}
