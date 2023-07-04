#include <iostream>
using namespace std;

int main() {
    int segundos;
    cin >> segundos;

    printf("%d:%d:%d\n", (segundos / 3600) % 60, (segundos / 60) % 60, segundos % 60);
    
    return 0;
}
