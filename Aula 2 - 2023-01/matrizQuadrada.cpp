#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long int ordem = 1, elemAtual, primeiroElem, ultimo = 0;
    int espaco = 0;

    while (1) {
        cin >> ordem;

        if (!ordem)
            break;
            
        primeiroElem = 1;
        espaco = 0;

        ultimo = pow(2, (ordem - 1) * 2);
        
        while(ultimo != 0){
			ultimo /= 10;
			espaco++;
		}

        for (int i = 0; i < ordem; i++) {
            elemAtual = primeiroElem;
            for (int j = 0; j < ordem; j++) {
                if (j == 1)
                    primeiroElem = elemAtual;

                if(j == 0) 
                    printf("%*ld", espaco, elemAtual);
				else 
                    printf(" %*ld", espaco, elemAtual);
                
                elemAtual *= 2;
            }

            printf("\n");
        }

        printf("\n");
    }
    
    return 0;
}
