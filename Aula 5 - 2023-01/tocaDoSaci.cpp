#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, toca[1005][1005], qtdSalas = 0;
    pair <int, int> inicio, saida, atual;

    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> toca[i][j];

            if (toca[i][j] == 2) {
                inicio.first = i;
                inicio.second = j;
            }
            else if (toca[i][j] == 3) {
                saida.first = i;
                saida.second = j;
            }
        }
    }

    atual = saida;

    while (1) {
        if (atual == inicio)
            break;
        
        qtdSalas += 1;
        
        if (atual.first + 1 < n && toca[atual.first + 1][atual.second]) {
            toca[atual.first][atual.second] = 0;
            atual.first += 1;
            continue;
        }

        if (atual.second + 1 < m && toca[atual.first][atual.second + 1]) {
            toca[atual.first][atual.second] = 0;
            atual.second += 1;
            continue;
        }

        if (atual.first - 1 >= 0 && toca[atual.first - 1][atual.second]) {
            toca[atual.first][atual.second] = 0;
            atual.first -= 1;
            continue;
        }

        if (atual.second - 1 >= 0 && toca[atual.first][atual.second - 1]) {
            toca[atual.first][atual.second] = 0;
            atual.second -= 1;
            continue;
        }
    }
    
    cout << qtdSalas + 1 << endl;

    return 0;
}
