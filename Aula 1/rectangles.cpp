// Gabriel Bellon de Carvalho - 802430.
// Problema: Rectangles.

#include <iostream>
using namespace std;

int main() {
    long long int qtdLinhas, qtdColunas, matriz[50][50], conjuntos = 0, flag = 0, conjParcial = 1;

    cin >> qtdLinhas;
    cin >> qtdColunas;

    for (long long int i = 0; i < qtdLinhas; i++) {
        for (long long int j = 0; j < qtdColunas; j++) 
            cin >> matriz[i][j];
    }

    conjuntos += qtdLinhas * qtdColunas;

    for (long long int i = 0; i < qtdLinhas; i++) {
        flag = 0;
        
        for (long long int j = 0; j < qtdColunas; j++) {
            conjParcial = 1;
            for (long long int k = j; k < qtdColunas - 1; k++) {
                if (matriz[i][j] == matriz[i][k + 1]) {
                    conjuntos += conjParcial;
                    conjParcial = conjParcial * 2;
                }
            }
            
            conjParcial = 1;
            for (long long int k = i; k < qtdLinhas - 1; k++) {
                if (matriz[i][j] == matriz[k + 1][j]) {
                    conjuntos += conjParcial;
                    conjParcial = conjParcial * 2;
                }
            }
        }
    }

    printf("%lld\n", conjuntos);
    
    return 0;
}