#include <iostream>
#include <vector>
using namespace std;

int qtdVilas, c1, c2, menor, menorAtual, dist[105], teste = 0, melhorVila = 0; 
vector <int> caminhos[105];

int busca(int vila) {
    if (dist[vila] == -1) {
        dist[vila] = 0;

        for (auto q : caminhos[vila]) {
            if (dist[q] == -1)
                dist[vila] = max(busca(q) + 1, dist[vila]);
        }
    }
    
    return dist[vila];
}

int main() {
    while (1) {    
        cin >> qtdVilas;

        if (!qtdVilas)
            break;
        
        teste += 1;
            
        for (int i = 0; i < qtdVilas - 1; i++) {
            cin >> c1 >> c2;

            caminhos[c1].push_back(c2);
            caminhos[c2].push_back(c1);
        }

        for (int i = 1; i <= qtdVilas; i++) {
            for (int j = 0; j < 105; j++)
                dist[j] = -1;
            
            if (i == 1) {
                menor = busca(i);
                menorAtual = menor;
                melhorVila = i;
            }
            else {
                menorAtual = busca(i);

                if (menorAtual < menor) {
                    menor = menorAtual;
                    melhorVila = i;
                }
            }
        }

        cout << "Teste " << teste << endl;
        cout << melhorVila << "\n\n";

        for (int i = 1; i <= qtdVilas; i++)
            caminhos[i].clear();
        
    }
    
    return 0;
}
