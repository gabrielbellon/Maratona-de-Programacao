#include <iostream>
#include <vector>
using namespace std;

int visitados[1005], qtdAlunos, qtdRel, qtdTimes = 0;
vector <int> amizades[5005];

void formaTime(int aluno) {
    if (!visitados[aluno]) {
        visitados[aluno] = 1;

        for (auto q : amizades[aluno])
            formaTime(q);
    }
}

int main() {
    cin >> qtdAlunos >> qtdRel;

    for (int i = 0; i < 1005; i++)
        visitados[i] = 0;
    
    for (int i = 0; i < qtdRel; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        amizades[a1].push_back(a2);
        amizades[a2].push_back(a1);
    }

    for (int i = 1; i <= qtdAlunos; i++) {
        if (!visitados[i]) {
            formaTime(i);
            qtdTimes += 1;
        }
    }

    cout << qtdTimes << endl;
    
    return 0;
}
