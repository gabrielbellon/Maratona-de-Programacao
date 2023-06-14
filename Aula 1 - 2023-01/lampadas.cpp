#include <iostream>
using namespace std;

int main() {
	int estadoA = 0, estadoB = 0, qtd, acao;

	cin >> qtd;
	
	for (int i = 0; i < qtd; i++) {
		cin >> acao;
		
		if (acao == 1) {
			if (estadoA == 0)
				estadoA = 1;
			else
				estadoA = 0;
		}
		else {
			if (estadoA == 0)
				estadoA = 1;
			else
				estadoA = 0;
			
			if (estadoB == 0)
				estadoB = 1;
			else
				estadoB = 0;
		}
	}
	
	cout << estadoA << endl;
	cout << estadoB << endl;
	
    return 0;
}
