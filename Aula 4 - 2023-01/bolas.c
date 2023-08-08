#include <stdio.h>

int main() {
    int v[10];
    int n;

    for (int i = 0; i < 10; i++) {
        v[i] = 0;
    }
    

    for (int i = 0; i < 8; i++) {
        scanf("%d", &n);
        v[n] += 1;
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] > 4) {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
}
