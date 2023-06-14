#include <iostream>
using namespace std;

int main() {
	int n, fibAtual = 1, fibAnterior = 1, aux;
	
	cin >> n;
	
	for (int i = 1; i < n; i++) {
		aux = fibAtual;
		fibAtual = fibAtual + fibAnterior;
		fibAnterior = aux;
	}
	
	cout << fibAtual << endl;
	
    return 0;
}
