#include <iostream>
using namespace std;

int main() {
	int num, maior;
	
	num = 0;
	maior = 0;
	
	while (1) {
		cin >> num;
		
		if (num == 0)
			break;
		
		if (num > maior)
			maior = num;
	}
	
	cout << maior << endl;
	
    return 0;
}
