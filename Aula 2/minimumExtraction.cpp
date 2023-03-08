// Gabriel Bellon de Carvalho - 802430.
// Problema: Minimum Extraction.

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int qtdTestes, tamVetor, vetor[200000], minExtraction, maxPossibleMin;

    scanf("%d", &qtdTestes);

    for (int i = 0; i < qtdTestes; i++) {
        scanf("%d", &tamVetor);
        minExtraction = 0;

        for (int j = 0; j < tamVetor; j++)
            scanf("%d", &vetor[j]);

        std::sort(&vetor[0], &vetor[tamVetor]);
        maxPossibleMin = vetor[0];
        
        for (int k = 0; k < tamVetor; k++) {
            vetor[k] = vetor[k] - minExtraction;
            minExtraction += vetor[k];

            if (vetor[k] > maxPossibleMin)
                maxPossibleMin = vetor[k];
        }
        
        printf("%d\n", maxPossibleMin);
    }
    
    return 0;
}