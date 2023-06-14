// Gabriel Bellon de Carvalho - 802430.
// Problema: Collecting Beats Is Fun.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, panels[10], flag = 0;
    char aux[5];

    scanf("%d\n", &k);
    k = k * 2;

    for (int i = 0; i < 10; i++)
        panels[i] = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%s", aux);
        
        for (int j = 0; j < 4; j++) {
            if (aux[j] == '.')
                panels[0] += 1;
            else
                panels[aux[j] - 48] += 1;
        }
    }

    for (int j = 1; j < 10; j++) {
        if (panels[j] > k)
            flag = 1;
    }

    if (!flag)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}