#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int qtdTestes, min, max, div;

    cin >> qtdTestes;

    for (int i = 0; i < qtdTestes; i++) {
        cin >> min >> max;

        if (min < 2)
            min = 2;

        for (int j = min; j <= max; j++) {
            div = 0;

            for (int k = 2; k <= sqrt(j); k++) {
                if (j % k == 0) {
                    div += 1;
                    break;
                }
            }

            if (!div)
                cout << j << endl;
        }
    }

    return 0;
}
