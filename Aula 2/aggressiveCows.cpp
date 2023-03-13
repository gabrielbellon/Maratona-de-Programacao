// Gabriel Bellon de Carvalho - 802430.
// Problema: Aggressive Cows.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int busca_binaria(vector<int> stalls, int n, int c) {
    int max = stalls[n - 1], min = 0, meio, contador, posicaoAnterior, respAtual = 0;

    while (min <= max) {
        meio = (min + max) / 2;
        contador = 1;
        posicaoAnterior = stalls[0];

        for (int i = 1; i < n; i++) {
            if (stalls[i] - posicaoAnterior >= meio) {
                contador++;
                posicaoAnterior = stalls[i];
            }
        }
        
        if (contador < c)
            max = meio - 1;
        else { // Achamos a respota, mas pode ter uma melhor.
            respAtual = meio;
            min = meio + 1;
        }
    }

    return respAtual;
}

int main() {
    int qtdTestes, n, c, aux, minDist, minBusca, largeMinDist;
    vector<int> stalls;

    cin >> qtdTestes;

    for (int i = 0; i < qtdTestes; i++) {
        cin >> n;
        cin >> c;
        stalls.clear();

        for (int j = 0; j < n; j++) {
            cin >> aux;
            stalls.push_back(aux);
        }

        sort(stalls.begin(), stalls.end());

        printf("%d\n", busca_binaria(stalls, n, c));
    }

    return 0;
}