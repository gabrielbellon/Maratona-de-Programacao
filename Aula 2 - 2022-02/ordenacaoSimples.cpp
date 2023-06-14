// Gabriel Bellon de Carvalho - 802430.
// Problema: Ordenacao Simples.

#include <iostream>
#include <algorithm>
#include <vector> 

int main() {
    int n, temp;
    std::vector <int> vetor;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        vetor.push_back(temp);
    }

    std::sort(vetor.begin(), vetor.end());

    for (int i = 0; i < n; i++)
        std::cout << vetor[i] << " ";

    std::cout << "\n";

    return 0;
}