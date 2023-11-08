#include <cmath>
#include <iostream>

using namespace std;

int primo(long long int num) {
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
  long long int num;

  cin >> num;

  if (!primo(num))
    cout << 'S' << endl;
  else
    cout << 'N' << endl;

  return 0;
}
