#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int busca_binaria(vector<int> brinquedos) {
    int min = 0, max = 1000000100, mid, resposta = 0;
    
    while (min <= max) {
        mid = min + (max - min) / 2;
        int cnt = 0, j = 0;
        
        for (int i = 0; i < brinquedos.size(); i++) {
            if (brinquedos[i] - brinquedos[j] > 2 * mid) {
                j = i;
                cnt++;
            }
        }
 
        if (cnt >= 3)
            min = mid + 1;
        else {
            resposta = mid;
            max = mid - 1;
        }
    }
 
    return resposta;
}
 
int main() {
    int qtdTestes, qtdPessoas, aux;
    vector<int> brinquedos;
 
    cin >> qtdTestes;
 
    for (int i = 0; i < qtdTestes; i++) {
        cin >> qtdPessoas;
 
        for (int j = 0; j < qtdPessoas; j++) {
            cin >> aux;
            brinquedos.push_back(aux);
        }
 
        sort(brinquedos.begin(), brinquedos.end());
        
        printf("%d\n", busca_binaria(brinquedos));
        
        brinquedos.clear();
    }
 
    return 0;
    
}