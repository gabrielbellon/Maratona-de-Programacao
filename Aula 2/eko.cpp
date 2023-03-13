// Gabriel Bellon de Carvalho - 802430.
// Problema: Eko.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long int busca_binaria(vector<unsigned long long int> trees, unsigned long long int qtdTrees, unsigned long long int requiredWood) {
    unsigned long long int max = trees[qtdTrees - 1], min = 0, meio, qtdWood, posicaoAnterior, altura = 0;

    while (min <= max) {
        meio = (min + max) / 2;
        qtdWood = 0;
        
        for (int i = 0; i < qtdTrees; i++) {
            if (trees[i] > meio)
                qtdWood += trees[i] - meio;
        }
        
        if (qtdWood < requiredWood)
            max = meio - 1;
        else { // Achamos a respota, mas pode ter uma melhor.
            altura = meio;
            min = meio + 1;
        }
    }

    return altura;
}

int main() {
    unsigned long long int qtdTrees, requiredWood, aux;
    vector<unsigned long long int> trees;

    cin >> qtdTrees;
    cin >> requiredWood;

    for (int i = 0; i < qtdTrees; i++) {
        cin >> aux;
        trees.push_back(aux);
    }

    sort(trees.begin(), trees.end());

    printf("%lld\n", busca_binaria(trees, qtdTrees, requiredWood));

    return 0;
}