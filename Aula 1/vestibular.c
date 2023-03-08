// Gabriel Bellon de Carvalho - 802430.
// Problema: Vestibular.

#include <stdio.h>

int main() {
    int qtd, acertos = 0;
    char gabarito[81], resposta[81];
    
    scanf("%d", &qtd);
    scanf("%s", gabarito);
    scanf("%s", resposta);

    for (int i = 0; i < qtd; i++) {
        if (gabarito[i] == resposta[i])
            acertos += 1;
    }

    printf("%d\n", acertos);

    return 0;
}