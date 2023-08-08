#include <iostream>
#include <vector>
using namespace std;

int qtdSaloes, qtdTuneis, sAtual, hSaloes[205], t1, t2, visitados[205];
vector <int> tuneis[205];

int buscaTuneis(int sAtual) {
    if (visitados[sAtual] == -1) {
        visitados[sAtual] = 0;

        for (int i = 0; i < tuneis[sAtual].size(); i++) {
            visitados[sAtual] = max(buscaTuneis(tuneis[sAtual][i]) + 1, visitados[sAtual]);
        }
    }

    return visitados[sAtual];
}

int main() {
    cin >> qtdSaloes >> qtdTuneis >> sAtual;

    for (int i= 0; i < 205; i++)
        visitados[i] = -1;
    
    for (int i = 1; i <= qtdSaloes; i++)
        cin >> hSaloes[i];

    for (int i = 0; i < qtdTuneis; i++) {
        cin >> t1;
        cin >> t2;

        if (hSaloes[t1] > hSaloes[t2]) {
            tuneis[t1].push_back(t2);
        }
        else if (hSaloes[t1] < hSaloes[t2]) {
            tuneis[t2].push_back(t1);
        }
    }

    cout << buscaTuneis(sAtual) << endl;
    
    return 0;
}
