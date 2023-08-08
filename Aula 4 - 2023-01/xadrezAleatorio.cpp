#include <iostream>
using namespace std;

int main() {
    int n, t, x = 0;

    cin >> n;
    cin >> t;

    if (t == 0)
        cout << n << endl;
    else {
        x = 1;

        for (int i = 0, j = n; i < t + 1; i++, j--)
            x *= j;

        if (t == 2)
            x = x / 6;
        
        cout << x << endl;
    }
    
    return 0;
}
