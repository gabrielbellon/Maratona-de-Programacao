// Gabriel Bellon de Carvalho - 802430.
// Problema: Binary Search.

#include <iostream>

int busca_binaria(int vetor[], int qtdElem, int consulta) {
    int min = 0, max = qtdElem - 1, meio, primeira = 0;

    while (min <= max) {
        meio = (min + max) / 2;

        if (vetor[meio] == consulta) {
            primeira = busca_binaria(vetor, meio, consulta);

            if (primeira == -1)
                return meio;
            else
                return primeira;
        }
        else if (vetor[meio] > consulta)
            max = meio - 1;
        else
            min = meio + 1;
    }
    
    return -1;
}

int main() {
    int qtdElem, qtdConsultas, consulta, vetor[100000];

    scanf("%d", &qtdElem);
    scanf("%d", &qtdConsultas);

    for (int i = 0; i < qtdElem; i++)
        scanf("%d", &vetor[i]);

    for (int i = 0; i < qtdConsultas; i++) {
        scanf("%d", &consulta);
        printf("%d\n", busca_binaria(vetor, qtdElem, consulta));
    }
    
    return 0;
}