#include <iostream>
#include <cstdlib>
using namespace std;

int mdc(int x, int y) {
  int aux;
  
  while (x != 0) {
    aux = x;
    x = y % x;
    y = aux;
  }
  
  return y;
}

int main() {
  int qtdTestes, a, b, c, d;

  cin >> qtdTestes;

  for (int i = 0; i < qtdTestes; i++) {
    cin >> a >> b >> c >> d;

    cout << mdc(abs(a - c), abs(b - d)) + 1 << endl;
  }

  return 0;
}
