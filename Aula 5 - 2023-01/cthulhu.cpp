#include <iostream>
#include <vector>
using namespace std;

int visitados[105];
vector <int> grafo[105];

void dfs(int raiz) {
    if (!visitados[raiz]) {
        visitados[raiz] = 1;

        for (auto q : grafo[raiz])
            dfs(q);
    }
}

int main() {
    int vertices, arestas, flag = 0;

    for (int i = 0; i < 105; i++)
        visitados[i] = 0;
    
    cin >> vertices >> arestas;

    for (int i = 0; i < arestas; i++) {
        int v1, v2;
        cin >> v1 >> v2;

        grafo[v1].push_back(v2);
        grafo[v2].push_back(v1);
    }

    if (vertices == arestas) {
        dfs(1);

        for (int i = 1; i <= vertices; i++) {
            if (!visitados[i]) {
                flag = 1;
                break;
            }
        }
    }
    else
        flag = 1;

    if (flag)
        cout << "NO" << endl;
    else
        cout << "FHTAGN!" << endl;
    
    return 0;
}
