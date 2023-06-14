// Gabriel Bellon de Carvalho - 802430.
// Problema: Coins And Triangle.

#include <iostream>
using namespace std;

int main() {
    int qtdTestes, maxH, qtdCoins;

    cin >> qtdTestes;

    for (int i = 0; i < qtdTestes; i++) {
        cin >> qtdCoins;
        maxH = 0;

        for (int j = 1; j <= qtdCoins; j++) {
            qtdCoins -= j;
            maxH += 1;
        }

        cout << maxH << "\n";
    }

    return 0;
}