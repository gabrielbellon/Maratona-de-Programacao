#include <iostream>
#include <vector>
using namespace std;

int main() {
    float valor, notasEmoedas[12];
    int qtdNotas = 0;

    cin >> valor;
    valor = valor + 0.001;
    
    // Notas.
    notasEmoedas[0] = 100;
    notasEmoedas[1] = 50;
    notasEmoedas[2] = 20;
    notasEmoedas[3] = 10;
    notasEmoedas[4] = 5;
    notasEmoedas[5] = 2;

    // Moedas.
    notasEmoedas[6] = 1;
    notasEmoedas[7] = 0.5;
    notasEmoedas[8] = 0.25;
    notasEmoedas[9] = 0.10;
    notasEmoedas[10] = 0.05;
    notasEmoedas[11] = 0.01;    

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        qtdNotas = valor / notasEmoedas[i];

        if (qtdNotas < 0)
            qtdNotas = 0;
        else
            valor = valor - qtdNotas * notasEmoedas[i];

        printf("%d nota(s) de R$ %.2f\n", qtdNotas, notasEmoedas[i]);
    }

    cout << "MOEDAS:" << endl;
    for (int i = 6; i < 12; i++) {
        qtdNotas = valor / notasEmoedas[i];
        
        if (qtdNotas < 0)
            qtdNotas = 0;
        else
            valor = valor - qtdNotas * notasEmoedas[i];

        printf("%d moeda(s) de R$ %.2f\n", qtdNotas, notasEmoedas[i]);
    }
    
    return 0;
}
