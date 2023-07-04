#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> valores, ordenado;
    int aux;

    for (int i = 0; i < 3; i++) {
        cin >> aux;

        ordenado.push_back(aux);
        valores.push_back(aux);
    }
    
    sort(ordenado.begin(), ordenado.end());

    for (int i = 0; i < ordenado.size(); i++)
        cout << ordenado[i] << "\n";

    cout << "\n";
    
    for (int i = 0; i < valores.size(); i++)
        cout << valores[i] << "\n";

    return 0;
}
