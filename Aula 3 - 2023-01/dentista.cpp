#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct consulta {
    int inicio;
    int final;
};

int sortInicio(consulta c1, consulta c2) {
    return c1.inicio < c2.inicio;
}

int sortFinal(consulta c1, consulta c2) {
    return c1.final < c2.final;
}

int main() {
    int qtdConsultas, fimAtual, qtdAtendidas = 0;
    vector<consulta> consultas;

    cin >> qtdConsultas;

    for (int i = 0; i < qtdConsultas; i++) { 
        consulta c;
        
        cin >> c.inicio;
        cin >> c.final;

        consultas.push_back(c);
    }

    sort(consultas.begin(), consultas.end(), sortInicio);
    sort(consultas.begin(), consultas.end(), sortFinal);

    fimAtual = consultas[0].final;
    qtdAtendidas += 1;
    
    for (int i = 0; i < qtdConsultas; i++) {
        if (consultas[i].inicio >= fimAtual) {
            fimAtual = consultas[i].final;
            qtdAtendidas += 1;
        }
    }
    
    cout << qtdAtendidas << '\n';
    
    return 0;
}
