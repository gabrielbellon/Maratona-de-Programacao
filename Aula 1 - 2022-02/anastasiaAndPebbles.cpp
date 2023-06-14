// Gabriel Bellon de Carvalho - 802430.
// Problema: Anastasia and pebbles.

#include <iostream>

int main() {
    int qtdTipos, tamBolso, qtdPedrasDoTipo, qtdDias = 0;

    scanf("%d", &qtdTipos);
    scanf("%d", &tamBolso);

    for (int i = 0; i < qtdTipos; i++) {
        scanf("%d", &qtdPedrasDoTipo);

        while (qtdPedrasDoTipo > 0) {
            qtdPedrasDoTipo -= tamBolso;
            qtdDias += 1;
        }
    }

    if (qtdDias % 2 == 0)
        qtdDias = qtdDias / 2;
    else
        qtdDias = (qtdDias / 2) + 1;

    std::cout << qtdDias << "\n";
    
    return 0;
}