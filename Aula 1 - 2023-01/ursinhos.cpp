#include <iostream>
using namespace std;
     
int main() {
    int urso, irmao, anos = 0;
        
    cin >> urso;
    cin >> irmao;
        
    while (1) {
        if (urso > irmao)
            break;
                
        anos += 1;
            
        urso = urso * 3;
        irmao = irmao * 2;
    }
        
    cout << anos << endl;
        
    return 0;
}
