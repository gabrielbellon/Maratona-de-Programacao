#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int visitados[26];
vector<int> aux;

void dfs(int vAtual, vector<int> grafo[]) {
    visitados[vAtual] = 1;
    aux.push_back(vAtual + 97);

    for (int i = 0; i < grafo[vAtual].size(); i++) {
        if (visitados[grafo[vAtual][i]] == 0)
            dfs(grafo[vAtual][i], grafo);
    }
}

int main() {
    int qtd_testes, qtd_comp, v, a;
    char aux2, aux1;

    cin >> qtd_testes;

    for (int i = 0; i < qtd_testes; i++) {
        qtd_comp = 0;

        cin >> v >> a;
        
        for (int j = 0; j < v; j++)
            visitados[j] = 0;

        vector<int> grafo[26];
        aux.clear();

        for (int j = 0; j < a; j++) {
            cin >> aux1 >> aux2;
            
            grafo[(int) aux1 - 97].push_back((int) aux2 - 97);
            grafo[(int) aux2 - 97].push_back((int) aux1 - 97);
        }

        cout << "Case #" << i + 1 << ":" << endl;
        
        for (int j = 0; j < v; j++) {
            if (visitados[j] == 0) {
                dfs(j, grafo);
                sort(aux.begin(), aux.end());

                for(int i = 0; i < aux.size(); i++)
                    printf("%c,", aux[i]);
                
                cout << endl;
                qtd_comp += 1;
                aux.clear();
            }
        }

        cout << qtd_comp << " connected components\n\n";
    }
    
    return 0;
}
