#include <iostream>
using namespace std;

int main() {
    int fatorial;

    cin >> fatorial;

    for (int i = fatorial - 1; i > 0; i--)
        fatorial *= i;

    cout << fatorial << "\n";
    
    return 0;
}
