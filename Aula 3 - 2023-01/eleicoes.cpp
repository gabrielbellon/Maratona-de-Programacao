#include <iostream>
#include <map>
using namespace std;

int main() {
    int qtdVotos, nCandidato, cMaiorVotos = -1, maiorVotos = 0;
    map<int, int> candidatos;
    
    cin >> qtdVotos;

    for (int i = 0; i < qtdVotos; i++) {
        cin >> nCandidato;

        if (candidatos.find(nCandidato) != candidatos.end())
            candidatos.at(nCandidato) += 1;
        else
            candidatos.insert(make_pair(nCandidato, 1));
    }

    for (const auto& candidato : candidatos) {
        if (candidato.second > maiorVotos) {
            maiorVotos = candidato.second;
            cMaiorVotos = candidato.first;
        }
    }

    cout << cMaiorVotos << '\n';
    
    return 0;
}
