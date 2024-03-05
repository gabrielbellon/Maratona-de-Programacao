#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtd_testes, n, v, a, aux1, aux2, movimentos;

    cin >> qtd_testes;

    for (int i = 0; i < qtd_testes; i++) {
        cin >> n >> v >> a;
        movimentos = 0;
        
        vector<vector<bool>> labirinto(v, vector<bool>(v));

        for (int j = 0; j < a; j++) {
            cin >> aux1 >> aux2;
            
            labirinto[aux1][aux2] = true;
            labirinto[aux2][aux1] = true;
        }

        for (auto linha : labirinto) {
            for (auto vertice : linha) {
                movimentos += vertice;
            }
        }

        cout << movimentos << endl;
    }
    
    return 0;
}
