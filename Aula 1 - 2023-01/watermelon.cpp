#include <iostream>
using namespace std;

int main() {
    int pesoTotal, p1, p2;

    cin >> pesoTotal;

    if (pesoTotal == 1)
        cout << "NO" << endl;

    for (p1 = 1; p1 < (pesoTotal / 2) + 1; p1++) {
        p2 = pesoTotal - p1;

        if (p1 % 2 == 0 && p2 % 2 == 0) {
            cout << "YES" << endl;
            break;
        }
        else if (p1 == pesoTotal / 2)
            cout << "NO" << endl;
    }

    return 0;
}
