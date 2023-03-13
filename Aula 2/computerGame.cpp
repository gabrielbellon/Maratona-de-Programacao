// Gabriel Bellon de Carvalho - 802430.
// Problema: Computer Game.

#include <iostream>
using namespace std;

long long int busca_binaria(long long int k, long long int n, long long int a, long long int b) {
    long long int max = n, min = 0, meio, aux, result;

    while (min <= max) {
        meio = (min + max) / 2;
        aux = n - meio;

        if (meio * a + aux * b < k) {
            result = meio;
            min = meio + 1;
        }
        else if (meio * a + aux * b >= k)
            max = meio - 1;
    }
    
    if (max != - 1)
        return result;
    else
        return max;
}

int main() {
    long long int consulta, k, n, a, b, aux;

    cin >> consulta;

    for (long long int i = 0; i < consulta; i++) {
        cin >> k;
        cin >> n;
        cin >> a;
        cin >> b;

        printf("%lld\n", busca_binaria(k, n, a, b));
    }

    return 0;
}