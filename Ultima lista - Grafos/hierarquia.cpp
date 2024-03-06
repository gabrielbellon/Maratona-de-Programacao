#include <bits/stdc++.h>
using namespace std;

vector<list<int>> grafo(25);
int visitados[25], v = 1;
int V, A, contador = 0;

void dfs(int vAtual, int branco) {
    visitados[vAtual] = v;
    contador += 1;
  
    list<int>::iterator it;
    for (it = grafo[vAtual].begin(); it != grafo[vAtual].end(); it++) {
        if (visitados[*it] != v) {
            visitados[*it] = v;

            for (int i = 0; i < branco; i++)
              printf(" ");
          
            printf("%d-%d pathR(G,%d)\n", vAtual, *it, *it);
          
            dfs(*it, branco + 2);
        } 
        else {
            for (int i = 0; i < branco; i++)
              printf(" ");
          
            printf("%d-%d\n", vAtual, *it);
        }
    }
}

int main() {
    int qtd_testes, aux1, aux2;

    cin >> qtd_testes;

    for (int i = 0; i < qtd_testes; i++) {
        if (i != 0)
          printf("\n");
      
        cin >> V >> A;

        contador = 0;

        for (int j = 0; j < V; j++)
          grafo[j].clear();

        for (int j = 0; j < A; j++) {
            cin >> aux1 >> aux2;

            grafo[aux1].push_back(aux2);
        }

        for (int j = 0; j < V; j++)
          grafo[j].sort();

        printf("Caso %d:\n", i + 1);

        for (int j = 0; j < V; j++) {
            if (visitados[j] == v)
                continue;
            else {
                dfs(j, 2);
              
                if (grafo[j].size() && contador != V)
                    printf("\n");
            }
        }
        v++;
  
    }

    return 0;
}
