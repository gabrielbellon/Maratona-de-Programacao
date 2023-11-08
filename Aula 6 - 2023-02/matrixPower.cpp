#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<vector<ll>> vii;

vii mul(vii a, vii b, int m) {
    vii res(m, vector<ll>(m, 0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < m; k++)
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % 1000000007;

    return res;
}

vii mul(vii v, int m, int n) {
    vii res(m, vector<ll>(m));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(i == j) res[i][j] = 1;
            else res[i][j] = 0;
        }
    }

    while(n) {
        if(n%2) {
            res = mul(res, v, m);
            n--;
        } else {
            v = mul(v, v, m);
            n /= 2;
        }
    }

    return  res;
}

int main() {
    int qtdTestes, m, n;

    cin >> qtdTestes;

    for (int i = 0; i < qtdTestes; i++) {
        cin >> m >> n;
        vii matriz(m, vector<ll>(m));

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++)
                cin >> matriz[j][k];
        }

        matriz = mul(matriz, m, n);

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++)
                cout << matriz[j][k] % 1000000007 << ' ';
            
            cout << endl;
        }
    }

    return 0;
}
