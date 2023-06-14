// Gabriel Bellon de Carvalho - 802430.
// Problema: Maximum Subset Sum.

#include <iostream>
using namespace std;

int main() {
    int qtdTestes, qtdElem, vetor[100000], maior, menor, iMaior;

    cin >> qtdTestes;

    for (int i = 0; i < qtdTestes; i++) {
        cin >> qtdElem;

        for (int j = 0; j < qtdElem; j++) {
            cin >> vetor[j];
            
            if (j)
                vetor[j] += vetor[j - 1];
        }

        maior = vetor[0];
        iMaior = 0;
        menor = vetor[0];

        for (int j = 1; j < qtdElem; j++) {
            if (vetor[j] > maior) {
                maior = vetor[j];
                iMaior = j;
            }
        }
        
        for (int j = 1; j < iMaior; j++) {
            if (vetor[j] < menor)
                menor = vetor[j];
        }

        if (menor > 0)
            printf("%d\n", maior);
        else
            printf("%d\n", maior - menor);
    }

    return 0;
}