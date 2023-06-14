#include <iostream>
using namespace std;

int main() {
	int h, p, f, direcao;
	char fuga;
	
	cin >> h;
	cin >> p;
	cin >> f;
	cin >> direcao;
	
	if (direcao == 1) {
		while (1) {
			if (f == 15)
				f = 0;
			else
				f += 1;
		
			if (f == p) {
				fuga = 'N';
				break;
			}
			else if (f == h){
				fuga = 'S';
				break;
			}
		}
	}
	else {
		while (1) {
			if (f == 0)
				f = 15;
			else
				f -= 1;
		
			if (f == p) {
				fuga = 'N';
				break;
			}
			else if (f == h){
				fuga = 'S';
				break;
			}
		}		
	}
	
	cout << fuga << endl;
	
    return 0;
}
