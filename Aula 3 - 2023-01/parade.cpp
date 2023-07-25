#include <iostream>
#include <stack>
using namespace std;

int main() {
    int atual, qtdCarros, possivel, carros[1010];
    stack <int> pilha;

    while (1) {
        atual = 1;
        possivel = 1;
        cin >> qtdCarros;

        if (!qtdCarros)
            break;

        for (int j = 0; j < qtdCarros; j++)
            cin >> carros[j];
        
        for (int j = 0; j < qtdCarros; j++) {
            if (carros[j] == atual)
                atual += 1;
            else if (!pilha.empty() && pilha.top() == atual) {
                while (!pilha.empty() && pilha.top() == atual) {
                    pilha.pop();
                    atual += 1;
                }

                pilha.push(carros[j]);
            }
            else
                pilha.push(carros[j]);
        }
        
        while (!pilha.empty()) {
            if (pilha.top() != atual) {
                possivel = 0;
                break;
            }
            else {
                pilha.pop();
                atual += 1;
            }
        }

        if (possivel)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

        while (!pilha.empty())
            pilha.pop();
    }

    return 0;
}
