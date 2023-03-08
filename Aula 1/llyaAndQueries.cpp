// Gabriel Bellon de Carvalho - 802430.
// Problema: llya and Queries.

#include <iostream>
#include <string.h>

int main() {
    int qtdConsultas, min, max, resposta, sequencia[100001];
    char s, si;
    sequencia[0] = 0;

    scanf("%c", &s);
    
    for (int i = 0;; i++) {
        scanf("%c", &si);
        
        if (si != '.' && si != '#')
            break;
        
        if (s == si)
            sequencia[i + 1] = sequencia[i] + 1;
        else
            sequencia[i + 1] = sequencia[i];

        s = si;
    } 

    scanf("%d", &qtdConsultas);
    
    for (int i = 0; i < qtdConsultas; i++) {
        scanf("%d", &min);
        scanf("%d", &max);

        printf("%d\n", sequencia[max - 1] - sequencia[min - 1]);
    }
    
    return 0;
}