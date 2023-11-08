#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long int a, b;
    int last[4], qtdTestes;
    
    cin >> qtdTestes;

    for (int j = 0; j < qtdTestes; j++) {
        cin >> a >> b;
        
        for (int i = 1; i <= 4; i++) {
            last[i - 1] = ((long long int) pow(a, i)) % 10;
        }

        if (b == 0) 
            cout << 1 << endl;
        else if (b % 4 == 0)
            cout << last[3] << endl;
        else
            cout << last[(b % 4) - 1] << endl;
    }
        
    return 0;
}
