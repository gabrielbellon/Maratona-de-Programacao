#include <iostream>
#include <string.h>

int main() {
    char risada[51], ordInversa[51], ordNatural[51], iOrd = 0;

    scanf("%s", risada);

    for (int i = 0; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            ordNatural[iOrd] = risada[i];
            iOrd += 1;
        }
    }

    ordNatural[iOrd] = '\0';
    iOrd = 0;

    for (int i = strlen(risada) - 1; i >= 0; i--) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            ordInversa[iOrd] = risada[i];
            iOrd += 1;
        }
    }

    ordInversa[iOrd] = '\0';
    
    if (!strcmp(ordNatural, ordInversa))
        std::cout << "S\n";
    else
        std::cout << "N\n";
    
    return 0;
}