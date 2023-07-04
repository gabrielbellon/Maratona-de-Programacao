#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> par, impar;
    int aux;

    for (int i = 0; i < 15; i++) {
        cin >> aux;

        if (aux % 2 == 0)
            par.push_back(aux);
        else
            impar.push_back(aux);

        if (par.size() == 5) {
            for (int i = 0; i < par.size(); i++)
                printf("par[%d] = %d\n", i, par[i]);
            
            par.clear();
        }
        else if (impar.size() == 5) {
            for (int i = 0; i < impar.size(); i++)
                printf("impar[%d] = %d\n", i, impar[i]);
            
            impar.clear();
        }
    }

    for (int i = 0; i < impar.size(); i++)
        printf("impar[%d] = %d\n", i, impar[i]);
    
    for (int i = 0; i < par.size(); i++)
        printf("par[%d] = %d\n", i, par[i]);
    
    return 0;
}
