#include <iostream>
#include <vector>
using namespace std;

int qtdVertices, maxGatos, gatos[100050], x, y, visitados[100050], qtdRestaurantes = 0;
vector <int> arestas[100050];

void dfs(int qtdGatos, int v) {
    if (!visitados[v]) {
        visitados[v] = 1;

        if (gatos[v])
            qtdGatos += 1;
        else
            qtdGatos = 0;
        
        if (qtdGatos > maxGatos)
            return;

        for (auto q : arestas[v])
            dfs(qtdGatos, q);
        
        if (arestas[v].size() == 1 && v != 1)
            qtdRestaurantes += 1;
    }
}

int main() {    
    cin >> qtdVertices >> maxGatos;

    for (int i = 1; i <= qtdVertices; i++) {
        cin >> gatos[i];
        visitados[i] = 0;
    }

    for (int i = 1; i < qtdVertices; i++) {
        cin >> x >> y;

        arestas[x].push_back(y);
        arestas[y].push_back(x);
    }

    dfs(0, 1);
    
    cout << qtdRestaurantes << endl;
    
    return 0;
}
