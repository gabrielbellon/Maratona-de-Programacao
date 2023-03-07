#include <iostream>

int main() {
    int n, tabuleiro[1000][1000], somaLinha[1000], somaColuna[1000], pesoMax = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        somaLinha[i] = 0;
        somaColuna[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &tabuleiro[i][j]);
            somaLinha[i] += tabuleiro[i][j];
            somaColuna[j] += tabuleiro[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (pesoMax < somaLinha[i] + somaColuna[j] - (tabuleiro[i][j] * 2))
                pesoMax = somaLinha[i] + somaColuna[j] - (tabuleiro[i][j] * 2);
        }
    }

    std::cout << pesoMax << "\n";
    
    return 0;
}