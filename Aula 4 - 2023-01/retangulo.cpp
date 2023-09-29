#include <bits/stdc++.h>

using namespace std;

const int N = 100009;

int n, x[N], circulo_completo;

bool processar() {
    if (circulo_completo % 2 != 0) return false;
    int metade_circulo = circulo_completo / 2;

    // Quantidade de pares de pontos antipodais
    int pares_antipodais = 0;

    int distancia_arco = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n - 1 && distancia_arco < metade_circulo) {
            distancia_arco += x[j];
            j++;
        }

        if (distancia_arco == metade_circulo) {
            pares_antipodais++;
            if (pares_antipodais == 2) return true;
        }

        distancia_arco -= x[i];
    }

    return false;
}

int main() {
    scanf("%d", &n);
    circulo_completo = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", x + i);
        circulo_completo += x[i];
    }

    if (processar()) printf("S\n");
    else printf("N\n");

    return 0;
}
