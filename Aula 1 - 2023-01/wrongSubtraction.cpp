#include <iostream>
using namespace std;
     
int main() {
    int num, k;
        
    cin >> num;
    cin >> k;
        
    for (int i = 0; i < k; i++) {
        if (num % 10 == 0)
            num = num / 10;
        else
            num -= 1;
    }
    
    cout << num << endl;
        
    return 0;
}
