#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int primo(int num) {
  int div = 0;

  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0)
      div += 1;
  }

  if (div)
    return 0;
  else
    return 1;
}

int main() {
  int num, j;
  vector<int> primos, perguntas;

  cin >> num;

  for (int i = 2; i <= num; i++) {
    if (primo(i))
      primos.push_back(i);
  }

  for (int i = 0; i < primos.size(); i++) {
    perguntas.push_back(primos[i]);

    j = primos[i];
    while (1) {
      
      j = j * primos[i];

      if (j <= num)
        perguntas.push_back(j);
      else
        break;
    }
  }

  cout << perguntas.size() << endl;

  for (int i = 0; i < perguntas.size(); i++)
    cout << perguntas[i] << ' ';

  cout << endl;

  return 0;
}
