// Gabriel Bellon de Carvalho - 802430.
// Problema: CSUMQ.

#include <stdio.h>

int main() {
    int n, i, j, vetor[100000], q, sum;

    scanf("%d", &n);

    for (int k = 0; k < n; k++)
        scanf("%d", &vetor[k]);

    scanf("%d", &q);
    
    for (int k = 0; k < q; k++) {
        sum = 0;
        scanf("%d", &i);
        scanf("%d", &j);
        
        for (int l = i; l <= j; l++)
            sum += vetor[l];

        printf("%d\n", sum);
    }

    return 0;
}