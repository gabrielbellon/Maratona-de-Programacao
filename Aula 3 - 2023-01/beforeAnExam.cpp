#include <iostream>
using namespace std;

int main() {
    int qtdDias, qtdHoras, maxTime[35], minTime[35], horasPorDia[35], possivel = 1, mudou;

    cin >> qtdDias;
    cin >> qtdHoras;

    for (int i = 0; i < 35; i++)
        horasPorDia[i] = 0;

    for (int i = 0; i < qtdDias; i++) {
        cin >> minTime[i];
        cin >> maxTime[i];
    }

    for (int i = 0; i < qtdDias; i++) {
        if (qtdHoras - minTime[i] >= 0) {
            qtdHoras -= minTime[i];
            horasPorDia[i] += minTime[i];
        }
        else {
            possivel = 0;
            break;
        }
    }

    while (qtdHoras != 0) {
        mudou = 0;
        
        for (int i = 0; i < qtdDias; i++) {
            if (qtdHoras == 0)
                break;
                
            if (horasPorDia[i] + 1 <= maxTime[i]) {
                qtdHoras -= 1;
                horasPorDia[i] += 1;

                mudou = 1;
            }   
        }

        if (!mudou && qtdHoras != 0) {
            possivel = 0;
            break;
        }
    }

    if (possivel) {
        cout << "YES" << '\n';

        for (int i = 0; i < qtdDias; i++)
            cout << horasPorDia[i] << " ";

        cout << "\n";
    }
    else
        cout << "NO" << "\n";

    return 0;
}
