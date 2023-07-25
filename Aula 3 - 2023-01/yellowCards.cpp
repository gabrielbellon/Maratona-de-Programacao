#include <iostream>
using namespace std;

int main() {
  int time1, time2, maxCardT1, maxCardT2, cardPartida, max = 0, min = 0;

  cin >> time1;
  cin >> time2;
  cin >> maxCardT1;
  cin >> maxCardT2;
  cin >> cardPartida;

  int aux = cardPartida;

  // Máximo.
  if (maxCardT2 > maxCardT1) {
    for (int i = 0; i < time1; i++) {
      if (cardPartida - maxCardT1 >= 0) {
        cardPartida -= maxCardT1;
        max += 1;
      } else
        break;
    }

    for (int i = 0; i < time2; i++) {
      if (cardPartida - maxCardT2 >= 0) {
        cardPartida -= maxCardT2;
        max += 1;
      } else
        break;
    }
  } else {
    for (int i = 0; i < time2; i++) {
      if (cardPartida - maxCardT2 >= 0) {
        cardPartida -= maxCardT2;
        max += 1;
      } else
        break;
    }

    for (int i = 0; i < time1; i++) {
      if (cardPartida - maxCardT1 >= 0) {
        cardPartida -= maxCardT1;
        max += 1;
      } else
        break;
    }
  }

  cardPartida = aux;

  // Mínimo.
  if (maxCardT2 > maxCardT1) {
    for (int i = 0; i < time2; i++) {
      cardPartida -= maxCardT2 - 1;

      if (cardPartida < 0)
        break;
    }

    for (int i = 0; i < time1; i++) {
      cardPartida -= maxCardT1 - 1;

      if (cardPartida < 0)
        break;
    }

    for (int i = 0; i < time1 + time2; i++) {
      if (cardPartida - 1 >= 0)
        min++;

      cardPartida--;
    }
  } else {
    for (int i = 0; i < time1; i++) {
      cardPartida -= maxCardT1 - 1;

      if (cardPartida < 0)
        break;
    }

    for (int i = 0; i < time2; i++) {
      cardPartida -= maxCardT2 - 1;

      if (cardPartida < 0)
        break;
    }

    for (int i = 0; i < time1 + time2; i++) {
      if (cardPartida - 1 >= 0)
        min++;

      cardPartida--;
    }
  }

  cout << min << " ";
  cout << max << endl;
}
