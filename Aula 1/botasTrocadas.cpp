// Gabriel Bellon de Carvalho - 802430.
// Problema: Botas trocadas.

#include <iostream>

int main() {
    int qtdBotas, esquerdo[31], direito[31], tam, qtdPares = 0;
    char pe;

    scanf("%d", &qtdBotas);

    for (int i = 0; i < 31; i ++) {
        esquerdo[i] = 0;
        direito[i] = 0;
    }

    for (int i = 0; i < qtdBotas; i++) {
        scanf("%d", &tam);
        scanf(" %c", &pe);
        
        if (pe == 'D') {
            if (esquerdo[tam - 30] > 0) {
                esquerdo[tam - 30] -= 1;
                qtdPares += 1;
            }
            else
                direito[tam - 30] += 1;
        }
        else {
            if (direito[tam - 30] > 0) {
                direito[tam - 30] -= 1;
                qtdPares += 1;
            }
            else
                esquerdo[tam - 30] += 1;
        }
    }

    printf("%d\n", qtdPares);

    return 0;
}