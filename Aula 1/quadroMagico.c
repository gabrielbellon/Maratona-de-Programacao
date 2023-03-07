#include <stdio.h>

int main() {
    int n, matriz[10][10], soma = 0, somaAtual = 0;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    }

    for (int i = 0; i < n; i++) { // Verifica linhas.
        somaAtual = 0;
        
        for (int j = 0; j < n; j++)
            somaAtual += matriz[i][j];

        if (!soma)
            soma = somaAtual;
        else if (soma != somaAtual) {
            soma = -1;
            break;
        }
    }

    if (soma != -1) { // Verifica colunas.
        for (int i = 0; i < n; i++) {
            somaAtual = 0;
            
            for (int j = 0; j < n; j++)
                somaAtual += matriz[j][i];
 
            if (soma != somaAtual) {
                soma = -1;
                break;
            }
        }        
    }

    if (soma != -1) {
        somaAtual = 0;
        for (int i = 0; i < n; i++) // Verifca diagonal principal.
            somaAtual += matriz[i][i];

        if (soma != somaAtual)
                soma = -1;

        somaAtual = 0;
        for (int i = 0; i < n; i++) // Verifica diagonal secundaria.
            somaAtual += matriz[i][n - i - 1];

        if (soma != somaAtual)
            soma = -1;
    }
    
    printf("%d\n", soma);
    
    return 0;
}