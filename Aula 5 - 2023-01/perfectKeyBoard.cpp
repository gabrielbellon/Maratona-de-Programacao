#include <iostream>
#include <cstring>
using namespace std;

bool visitado[26];

void resolver() {
    string entrada;
    memset(visitado, false, sizeof(visitado));
    cin >> entrada;
    
    string resultado(1, entrada[0]);
    int posicaoAtual = 0;
    visitado[resultado[0] - 'a'] = true;
    
    for (int i = 1; i < entrada.size(); i++) {
        if (visitado[entrada[i] - 'a']) {
            if (posicaoAtual > 0 && resultado[posicaoAtual - 1] == entrada[i]) {
                posicaoAtual--;
            } else if (posicaoAtual < resultado.size() - 1 && resultado[posicaoAtual + 1] == entrada[i]) {
                posicaoAtual++;
            } else {
                cout << "NO" << endl;
                return;
            }
        } else {
            if (posicaoAtual == 0) {
                resultado = entrada[i] + resultado;
            } else if (posicaoAtual == resultado.size() - 1) {
                resultado += entrada[i];
                posicaoAtual++;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
        visitado[entrada[i] - 'a'] = true;
    }
    
    cout << "YES" << endl;
    for (int i = 0; i < 26; i++) {
        if (!visitado[i]) {
            resultado += char(i + 'a');
        }
    }
    cout << resultado << endl;
}

int main() {
    int casosDeTeste;
    cin >> casosDeTeste;
    
    for (int i = 1; i <= casosDeTeste; i++) {
        resolver();
    }
    
    return 0;
}
