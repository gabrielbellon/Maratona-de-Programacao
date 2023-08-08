#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int qtd, estrada;
    vector<float> cidades;
    float menor, aux;

    cin >> estrada;
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        cin >> aux;
        cidades.push_back(aux);
    }

    sort(cidades.begin(), cidades.end());

    menor = cidades[0] + (cidades[1] - cidades[0]) / 2;

    for (int i = 1; i < qtd - 1; i++) {
        if ((cidades[i] - cidades[i - 1]) / 2 + (cidades[i + 1] - cidades[i]) /2 < menor)
            menor = (cidades[i] - cidades[i - 1]) / 2 + (cidades[i + 1] - cidades[i]) / 2;
    }

    if ((cidades[qtd - 1] - cidades[qtd - 2]) / 2 + estrada - cidades[qtd - 1] < menor)
        menor = (cidades[qtd - 1] - cidades[qtd - 2]) / 2 + estrada - cidades[qtd - 1];

    printf("%.2f\n", menor);

    return 0;
}
