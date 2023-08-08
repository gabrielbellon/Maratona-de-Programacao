#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, digitos[1004], trocou = 0, aux = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> digitos[i];

    if (digitos[n - 1] > 5) {
        for (int i = 0; i < n - 1; i++) {
            if (digitos[i] == 0 || digitos[i] == 5) {
                trocou = 1;
                aux = digitos[i];
                digitos[i] = digitos[n - 1];
                digitos[n - 1] = aux;
                break;
            }
        }
    }

    if (!trocou) {
        for (int i = 0; i < n -1; i++) {
            if (digitos[i] == 0) {
                trocou = 1;
                aux = digitos[i];
                digitos[i] = digitos[n - 1];
                digitos[n - 1] = aux;
                break;               
            }
        }

        if (!trocou) {
            for (int i = n - 2; i >= 0; i--) {
                if (digitos[i] == 5) {
                    trocou = 1;
                    aux = digitos[i];
                    digitos[i] = digitos[n - 1];
                    digitos[n - 1] = aux;
                    break;
                }
            }
        }
    }

    if (trocou) {
        for (int i = 0; i < n; i++)
            cout << digitos[i] << " ";

        cout << endl;       
    }
    else
        cout << -1 << endl;

    return 0;
}
