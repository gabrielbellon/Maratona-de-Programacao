#include <iostream>
using namespace std;

int main() {
    int qtdA, a, sumB = 0, sumC = 0;

    cin >> qtdA;

    for (int i = 0; i < qtdA; i++) {
        cin >> a;

        if (a > 0)
            sumB += a;
        else
            sumC += a;
    }

    cout << sumB - sumC << endl;
}
